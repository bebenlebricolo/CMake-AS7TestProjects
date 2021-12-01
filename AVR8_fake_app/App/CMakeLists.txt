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

target_link_libraries(firmware
    testlib
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT firmware)

# Only add those targets if this is used on a Linux environment, as Atmel Studio already handles them itself
if (CMAKE_HOST_UNIX)
    message("-- Dealing with extra targets on Linux")
    add_extra_avr_targets(firmware)
endif()
