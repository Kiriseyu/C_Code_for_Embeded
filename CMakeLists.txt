cmake_minimum_required(VERSION 3.31)
project(C_Code_for_Embeded C)

set(CMAKE_C_STANDARD 11)

add_library(C_Code_for_Embeded STATIC library.c
        src/01_scanf.c
        src/02_printf.c
        src/02_2_printf.c
        src/03_fprintf_sprintf_fscanf_sscanf.c
        src/04_fgets_fputs.c)
