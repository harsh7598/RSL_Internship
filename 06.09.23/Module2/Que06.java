
public class Que06 {
    private String name;
    private int age;
    private String address;

    // Constructor with name and age
    public Que06(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Constructor with name, age, and address
    public Que06(String name, int age, String address) {
        this.name = name;
        this.age = age;
        this.address = address;
    }

    // Getter and setter methods for name, age, and address
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getAddress() {
        return address;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    // Method to display student information
    public void displayStudentInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        if (address != null) {
            System.out.println("Address: " + address);
        }
    }

    public static void main(String[] args) {
        // Creating Student objects using different constructors
        Que06 student1 = new Que06("Alice", 20);
        Que06 student2 = new Que06("Bob", 22, "123 Main St");

        // Displaying student information
        student1.displayStudentInfo();
        System.out.println();
        student2.displayStudentInfo();
    }
}

