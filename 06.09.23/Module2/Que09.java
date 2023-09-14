

public class Que09 {
    // Static variable for the value of Pi
    public static final double PI = 3.14159265359;

    // Static method to calculate the area of a circle
    public static double calculateArea(double radius) {
        return PI * radius * radius;
    }

    public static void main(String[] args) {
        double radius = 5.0;
        double area = Que09.calculateArea(radius);
        System.out.println("Area of the circle with radius " + radius + " is: " + area);
    }
}
