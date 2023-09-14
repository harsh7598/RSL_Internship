// in place of mathutils i use que07.

public class Que07 {
    // Method to add two integers
    public static int add(int num1, int num2) {
        return num1 + num2;
    }

    // Method to add two doubles
    public static double add(double num1, double num2) {
        return num1 + num2;
    }

    public static void main(String[] args) {
        // Adding two integers
        int sumInt = Que07.add(5, 3);
        System.out.println("Sum of integers: " + sumInt);

        // Adding two doubles
        double sumDouble = Que07.add(2.5, 3.7);
        System.out.println("Sum of doubles: " + sumDouble);
    }
}

