# CMake 最低版本要求 (CLion 自带 CMake, 3.20 普遍可用)
cmake_minimum_required(VERSION 3.20)

# 项目名称与所用语言(C语言)
project(C_Code_for_Embeded LANGUAGES C)

# C 语言标准设定为 C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# ============================================================
# 构建策略:
# 递归扫描 src/ 下所有 .c 文件, 仅对"含 main 函数"的文件
# 各自生成一个独立可执行目标。
#
# 原因: 本仓库是 C 语言学习笔记, 每个 .c 都是独立小程序,
# 各自带 main 函数, 不能编进同一个可执行文件
# (否则链接阶段报 "multiple definition of `main'")。
#
# 函数库文件(无 main, 如 factorial.c / fibonacci.c / my_strlen.c 等)
# 不会被单独构建, 它们供其他文件 #include 后使用。
#
# 使用: 在 CLion 顶部"配置下拉框"选择目标(如 leap_year)后点击运行,
#       或在构建目录执行 cmake --build . --target leap_year
# ============================================================

# 递归收集 src/ 下全部 .c 源文件 (CONFIGURE_DEPENDS: 新增文件自动纳入)
file(GLOB_RECURSE ALL_C_FILES CONFIGURE_DEPENDS "src/*.c")

foreach(src ${ALL_C_FILES})
    # 栈模块的 stack_demo.c 依赖 stack.c, 跳过自动构建, 改用下方专用目标
    if(src MATCHES "stack_demo\\.c")
        continue()
    endif()

    # 检测该文件是否定义了 main 函数 (匹配 int main( 或 void main()
    # CMake 正则中 \\( 表示字面左括号, [ ]+ 表示至少一个空格)
    file(STRINGS ${src} HAS_MAIN REGEX "(int|void)[ ]+main[ ]*\\(")
    if(NOT HAS_MAIN)
        # 无 main => 函数库文件, 不单独构建
        continue()
    endif()

    # 目标名 = 文件名去掉 .c 后缀; 点号替换为下划线
    # (点号在 MinGW Makefiles 等生成器中非法)
    get_filename_component(fname ${src} NAME)
    string(REGEX REPLACE "\\.c$" "" target_name ${fname})
    string(REPLACE "." "_" target_name ${target_name})

    add_executable(${target_name} ${src})
endforeach()

# ============================================================
# 栈模块: stack_demo.c 调用 stack.c / stack.h 中定义的栈操作,
# 需把两个源文件合并编译为一个目标 stack_app
# ============================================================
add_executable(stack_app
    src/stack/stack_demo.c
    src/stack/stack.c
)
target_include_directories(stack_app PRIVATE src/stack)
