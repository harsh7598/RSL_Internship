public class Que02 {
    // Attributes or instance variables
    private String make;
    private String model;
    private int year;
    private double price;

    // Constructor to initialize the attributes
    public Que02(String make, String model, int year, double price) {
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
        public static void main(String[] args) {
            // Create a Car object
            Que02 myCar = new Que02("Toyota", "Camry", 2020, 25000.0);
    
            // Call methods on the Car object
            myCar.displayCarInfo();
    
            double newPrice = myCar.calculateDepreciation(2);
            System.out.println("Estimated car value after 2 years: $" + newPrice);
    
            // Update the price of the car
            myCar.setPrice(22000.0);
    
            // Display updated car information
            myCar.displayCarInfo();
    }
    
}
