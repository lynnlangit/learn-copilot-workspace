using System;
using Xunit;

namespace FizzBuzzTests
{
    public class FizzBuzzTest
    {
        [Fact]
        public void TestFizzBuzz()
        {
            var expected = new string[100];
            for (int i = 1; i <= 100; i++)
            {
                if (i % 3 == 0 && i % 5 == 0)
                {
                    expected[i - 1] = "FizzBuzz";
                }
                else if (i % 3 == 0)
                {
                    expected[i - 1] = "Fizz";
                }
                else if (i % 5 == 0)
                {
                    expected[i - 1] = "Buzz";
                }
                else
                {
                    expected[i - 1] = i.ToString();
                }
            }

            var fizzBuzz = new FizzBuzz.FizzBuzz();
            var result = fizzBuzz.GenerateFizzBuzz();

            Assert.Equal(expected, result);
        }
    }
}
