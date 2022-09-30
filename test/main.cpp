/**
 * @file main.cpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @author Sparsh Jaiswal (sjaiswal@umd.edu)
 * @brief Runs all the tests described in the test file
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
