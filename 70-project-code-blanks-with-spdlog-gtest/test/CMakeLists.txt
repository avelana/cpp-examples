# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/3fa7f983c69f780378b4d1ad44d36030ca951ba6.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(TEST_SOURCES config_test.cc)

enable_testing()

add_executable(
        app_test
        ${TEST_SOURCES}
)
target_link_libraries(
        app_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(app_test)