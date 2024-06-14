cmake_minimum_required(VERSION 3.22) # Минимальная версия Cmake

project(anarchy-in-the-head) # Название проекта

set(CMAKE_CXX_STANDARD 11) # Версия стандарта C++

set(SOURCE_EXE include/main.cpp) # Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB include/Physics.cpp include/Entity.cpp include/Block.cpp) # Установка переменной со списком исходников для библиотеки

add_library(src-lib STATIC ${SOURCE_LIB}) # Создание статической библиотеки

add_executable(anarchy-in-the-head ${SOURCE_EXE}) # Создаие исполняеого файла

target_link_libraries(anarchy-in-the-head src-lib) # Линковка программы с библиотекой