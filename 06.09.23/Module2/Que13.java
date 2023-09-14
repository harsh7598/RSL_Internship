
// Define the Shape interface with a method to calculate area
interface Que13 {
    double calculateArea();
}

// Implement the Shape interface in the Circle class
class Circle implements Que13 {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

// Implement the Shape interface in the Rectangle class
class Rectangle implements Que13 {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateArea() {
        return length * width;
    }
}

public class Que13Demo {
    public static void main(String[] args) {
        Que13 circle = new Circle(5.0);
        Que13 rectangle = new Rectangle(4.0, 6.0);

        System.out.println("Area of Circle: " + circle.calculateArea());
        System.out.println("Area of Rectangle: " + rectangle.calculateArea());
    }
}

