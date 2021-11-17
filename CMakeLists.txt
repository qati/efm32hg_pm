cmake_minimum_required(VERSION 3.13.1)

set(SelectedBoard efm32hg_slstk3400a)

set(BOARD ${SelectedBoard})
set(DTC_OVERLAY_FILE ./boards/${SelectedBoard}.overlay)

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(efm32sleep_test)

FILE(GLOB app_sources ./src/*.c*)

target_sources(app PRIVATE ${app_sources} ${lib_sources})
