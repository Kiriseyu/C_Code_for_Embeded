# CMake 最低版本要求
cmake_minimum_required(VERSION 3.20)

# 项目名称与所用语言(C语言)
project(C_Code_for_Embeded LANGUAGES C)

# C 语言标准设定为 C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 扫描 src/ 目录下所有 .c 文件
file(GLOB SRC_LIST CONFIGURE_DEPENDS "src/*.c")

# 为每个 .c 文件单独生成一个可执行目标
# 说明: src/ 下每个 .c 都含独立的 main 函数,不能编进同一个可执行文件,
#       否则链接阶段会报 "multiple definition of `main'"。
# 目标名规则: 文件名去掉 .c 后缀,并把 '.' 换成 '_',
#             例如 gobang0.1.c -> 目标 gobang0_1
#             (点号在部分生成器如 MinGW Makefiles 中非法,故替换)
# 运行方式: 在 CLion 顶部"配置下拉框"中选择对应目标(如 gobang0_1)后点击运行
foreach(src ${SRC_LIST})
    # 取完整文件名(如 gobang0.1.c),注意:不能用 NAME_WE,
    # 因为 NAME_WE 会去掉"最长扩展名",把 gobang0.1.c 变成 gobang0(去掉了 .1.c)
    get_filename_component(fname ${src} NAME)
    # 仅去掉末尾的 .c 后缀,得到 gobang0.1
    string(REGEX REPLACE "\\.c$" "" target_name ${fname})
    # 把点号换成下划线,得到 gobang0_1
    # (点号在 MinGW Makefiles 等生成器中非法)
    string(REPLACE "." "_" target_name ${target_name})
    add_executable(${target_name} ${src}
            src/test/BubbleSort.c
            src/test/mystrcpy.c
            src/test/mystrcmp.c
            src/test/factorial.c
            src/test/fibonacci.c
            src/test/pascal.c
            src/defswap.c
            src/test/mystrcat.c
            src/test/mystrlen.c
            src/test/itoa.c
            src/test/struct_itoa.c
            src/test/struct_memAlign.c
            src/test/struct_pointer.c
            src/test/struct_FlexibleArrayMember.c
            src/test/union_feature.c
            src/test/union_endian.c
            src/test/struct_Bit_field.c
            src/test/ConditionalCompilation.c
            src/test/Preprocessing.c
            src/test/macro_swap.c
            src/test/Llist_CreateUnloop.c)
endforeach()
