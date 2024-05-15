#include <gtest/gtest.h>

// Test suite for FizzBuzz
class FizzBuzzTest : public ::testing::Test {
protected:
    // Test setup
    void SetUp() override {
        // Setup code if needed
    }

    // Test teardown
    void TearDown() override {
        // Teardown code if needed
    }
};

// Test cases
TEST_F(FizzBuzzTest, ReturnsFizzForMultiplesOfThree) {
    EXPECT_EQ(FizzBuzz(3), "Fizz");
    EXPECT_EQ(FizzBuzz(6), "Fizz");
}

TEST_F(FizzBuzzTest, ReturnsBuzzForMultiplesOfFive) {
    EXPECT_EQ(FizzBuzz(5), "Buzz");
    EXPECT_EQ(FizzBuzz(10), "Buzz");
}

TEST_F(FizzBuzzTest, ReturnsFizzBuzzForMultiplesOfBothThreeAndFive) {
    EXPECT_EQ(FizzBuzz(15), "FizzBuzz");
    EXPECT_EQ(FizzBuzz(30), "FizzBuzz");
}

TEST_F(FizzBuzzTest, ReturnsNumberForOthers) {
    EXPECT_EQ(FizzBuzz(1), "1");
    EXPECT_EQ(FizzBuzz(2), "2");
}

// Main function to run the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
