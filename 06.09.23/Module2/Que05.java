// in place of student there is Que05.
    
public class Que05 {
    private String name;
    private int age;

    // Parameterized constructor
    public Que05(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getter methods for accessing the name and age attributes
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    // Setter methods for updating the name and age attributes
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Method to display student information
    public void displayStudentInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        // Creating a Student object with a parameterized constructor
        Que05 student1 = new Que05("Alice", 20);

        // Displaying student information
        student1.displayStudentInfo();
    }
}

