add_executable(firmware
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
)

# Produce a Map file
set (Map_file firmware.map)

# Disable full debug optimizations for now
string(REPLACE "-Og" "-O0" CMAKE_C_FLAGS_DEBUG ${CMAKE_C_FLAGS_DEBUG})

set (CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wl,-Map=${Map_file}")
set (CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wl,-Map=${Map_file}")
set (CMAKE_C_FLAGS_MINSIZEREL "${CMAKE_C_FLAGS_MINSIZEREL} -Wl,-Map=${Map_file}")
set (CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO} -Wl,-Map=${Map_file}")

set(ADDITIONAL_CFLAGS "-Wall -DTEST_DEFINITION=33 -Wextra -pedantic -O2 "
                       "-O3 -O0 -g1 -g2 -g3  -ffunction-sections -pedantic-errors "
                       "-mcall-prologues -mno-interrupts -funsigned-char -fpack-struct "
                       "-mshort-calls -std=c11 -Wno-unused-parameter -Wno-error=unused-function -Wno-error=unused-variable ")

# Add those flags to the already existing ones for this target
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} ${ADDITIONAL_CFLAGS}")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} ${ADDITIONAL_CFLAGS}")
set(CMAKE_C_FLAGS_MINSIZEREL "${CMAKE_C_FLAGS_MINSIZEREL} ${ADDITIONAL_CFLAGS}")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO} ${ADDITIONAL_CFLAGS}")

target_link_libraries(firmware
    testlib
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT firmware)

# Only add those targets if this is used on a Linux environment, as Atmel Studio already handles them itself
if (CMAKE_HOST_UNIX)
    message("-- Dealing with extra targets on Linux")
    add_extra_avr_targets(firmware)
endif()
