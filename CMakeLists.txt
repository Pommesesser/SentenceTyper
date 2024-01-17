cmake_minimum_required(VERSION 3.27)
project(SentenceTyper C)

set(CMAKE_C_STANDARD 11)

add_executable(SentenceTyper main.c
        typer.c
        typer.h
        checker.c
        checker.h
        setup.c
        setup.h)
