import unittest

def fizzbuzz(value):
    if value % 3 == 0 and value % 5 == 0:
        return "FizzBuzz"
    elif value % 3 == 0:
        return "Fizz"
    elif value % 5 == 0:
        return "Buzz"
    else:
        return str(value)

class TestFizzBuzz(unittest.TestCase):
    def test_fizz(self):
        for i in range(1, 101):
            if i % 3 == 0 and i % 5 != 0:
                self.assertEqual(fizzbuzz(i), "Fizz")

    def test_buzz(self):
        for i in range(1, 101):
            if i % 5 == 0 and i % 3 != 0:
                self.assertEqual(fizzbuzz(i), "Buzz")

    def test_fizzbuzz(self):
        for i in range(1, 101):
            if i % 3 == 0 and i % 5 == 0:
                self.assertEqual(fizzbuzz(i), "FizzBuzz")

    def test_number(self):
        for i in range(1, 101):
            if i % 3 != 0 and i % 5 != 0:
                self.assertEqual(fizzbuzz(i), str(i))

if __name__ == '__main__':
    unittest.main()
