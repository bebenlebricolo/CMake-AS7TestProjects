cmake_minimum_required(VERSION 3.15)

add_library(testlib STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/testlib.c
)

target_include_directories(testlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)


# Only add those targets if this is used on a Linux environment, as Atmel Studio already handles them itself
if (CMAKE_HOST_UNIX)
    message("-- Dealing with extra targets on Linux")
    add_extra_avr_targets(firmware)
endif()
