// Here Que01 is used in place of car

public class Que01 {
    // Attributes or instance variables
    private String make;
    private String model;
    private int year;
    private double price;

    // Constructor to initialize the attributes
    public Que01(String make, String model, int year, double price) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.price = price;
    }

    // Getter methods for accessing the attributes
    public String getMake() {
        return make;
    }

    public String getModel() {
        return model;
    }

    public int getYear() {
        return year;
    }

    public double getPrice() {
        return price;
    }

    // Setter method for updating the price attribute
    public void setPrice(double price) {
        this.price = price;
    }

    // Method to display car information
    public void displayCarInfo() {
        System.out.println("Make: " + make);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
        System.out.println("Price: $" + price);
    }

    // Method to calculate the depreciation of the car
    public double calculateDepreciation(int years) {
        // Simple depreciation calculation (for demonstration purposes)
        double depreciationRate = 0.10; // 10% depreciation per year
        double depreciation = price * depreciationRate * years;
        return price - depreciation;
    }
}
