cmake_minimum_required(VERSION 3.15)
# Use AVR GCC toolchain
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/Toolchain/avr8-gcc-toolchain.cmake)

project(CmakeAS7TestProject C)

set(AVR_MCU atmega328p)
set(AVR_MCU_SPEED 16000000)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

add_compile_definitions(
    F_CPU=${AVR_MCU_SPEED}
    __AVR_ATmega328P__
)
add_compile_options(-mmcu=${AVR_MCU})

set(CMAKE_EXE_LINKER_FLAGS "-mmcu=${AVR_MCU}")
set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)

add_subdirectory(${CMAKE_SOURCE_DIR}/TestLib)
add_subdirectory(${CMAKE_SOURCE_DIR}/App)
