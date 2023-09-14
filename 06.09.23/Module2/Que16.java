import java.util.Scanner;

public class Que16 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter a dividend: ");
            int dividend = scanner.nextInt();

            System.out.print("Enter a divisor: ");
            int divisor = scanner.nextInt();

            int result = divide(dividend, divisor);
            System.out.println("Result of division: " + result);
        } catch (ArithmeticException e) {
            System.err.println("Error: Division by zero is not allowed.");
        } catch (java.util.InputMismatchException e) {
            System.err.println("Error: Input must be a valid integer.");
        } finally {
            // Close the scanner in the finally block to ensure it's always closed.
            scanner.close();
        }

        System.out.println("Program continues after exception handling.");
    }

    static int divide(int dividend, int divisor) {
        return dividend / divisor;
    }
}
