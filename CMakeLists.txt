# CMakeList.txt: проект CMake для lab04-figures; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("lab04-figures")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab04-figures "lab04-figures.cpp" "lab04-figures.h" "lab04-triangle.h" "lab04-triangle.cpp" "lab04-parallelogram.cpp" "lab04-parallelogram.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
