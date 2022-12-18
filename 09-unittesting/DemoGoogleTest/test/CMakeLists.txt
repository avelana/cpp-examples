include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/3fa7f983c69f780378b4d1ad44d36030ca951ba6.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(TEST_SOURCES tests.cc)

enable_testing()

add_executable(
        DemoGoogleTest_test
        ${TEST_SOURCES}
)
target_link_libraries(
        DemoGoogleTest_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(DemoGoogleTest_test)