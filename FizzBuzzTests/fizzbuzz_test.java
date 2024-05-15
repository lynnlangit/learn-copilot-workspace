import org.junit.Test;
import static org.junit.Assert.*;

public class FizzBuzzTest {

    @Test
    public void testFizz() {
        FizzBuzz fizzBuzz = new FizzBuzz();
        for (int i = 1; i <= 100; i++) {
            if (i % 3 == 0 && i % 5 != 0) {
                assertEquals("Fizz", fizzBuzz.getResult(i));
            }
        }
    }

    @Test
    public void testBuzz() {
        FizzBuzz fizzBuzz = new FizzBuzz();
        for (int i = 1; i <= 100; i++) {
            if (i % 5 == 0 && i % 3 != 0) {
                assertEquals("Buzz", fizzBuzz.getResult(i));
            }
        }
    }

    @Test
    public void testFizzBuzz() {
        FizzBuzz fizzBuzz = new FizzBuzz();
        for (int i = 1; i <= 100; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                assertEquals("FizzBuzz", fizzBuzz.getResult(i));
            }
        }
    }

    @Test
    public void testNumber() {
        FizzBuzz fizzBuzz = new FizzBuzz();
        for (int i = 1; i <= 100; i++) {
            if (i % 3 != 0 && i % 5 != 0) {
                assertEquals(String.valueOf(i), fizzBuzz.getResult(i));
            }
        }
    }
}
