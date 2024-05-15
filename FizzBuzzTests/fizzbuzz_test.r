# Unit tests for FizzBuzz implementation in R

library(testthat)

test_that("numbers divisible by 3 return 'Fizz'", {
  expect_equal(fizzbuzz(3), "Fizz")
  expect_equal(fizzbuzz(6), "Fizz")
})

test_that("numbers divisible by 5 return 'Buzz'", {
  expect_equal(fizzbuzz(5), "Buzz")
  expect_equal(fizzbuzz(10), "Buzz")
})

test_that("numbers divisible by both 3 and 5 return 'FizzBuzz'", {
  expect_equal(fizzbuzz(15), "FizzBuzz")
  expect_equal(fizzbuzz(30), "FizzBuzz")
})

test_that("numbers not divisible by either 3 or 5 return the number itself", {
  expect_equal(fizzbuzz(1), "1")
  expect_equal(fizzbuzz(2), "2")
})

# Main function to run the tests
test_dir("tests")
