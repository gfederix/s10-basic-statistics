include(GoogleTest)
find_package(GTest REQUIRED)

add_executable(test1 test.cpp)
target_link_libraries(test1  GTest::GTest GTest::Main)
gtest_discover_tests(test1)

