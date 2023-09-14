

import java.util.ArrayList;
import java.util.Scanner;

public class Que17 {
    public static void main(String[] args) {
        // Create an ArrayList to store names
        ArrayList<String> nameList = new ArrayList<>();

        // Create a Scanner for user input
        Scanner scanner = new Scanner(System.in);

        // Menu for user interaction
        while (true) {
            System.out.println("\nName List Manager Menu:");
            System.out.println("1. Add a Name");
            System.out.println("2. Display Names");
            System.out.println("3. Remove a Name");
            System.out.println("4. Exit");
            System.out.print("Enter your choice (1/2/3/4): ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character

            switch (choice) {
                case 1:
                    // Add a name to the list
                    System.out.print("Enter a name to add: ");
                    String newName = scanner.nextLine();
                    nameList.add(newName);
                    System.out.println(newName + " has been added to the list.");
                    break;
                case 2:
                    // Display the list of names
                    System.out.println("\nList of Names:");
                    for (String name : nameList) {
                        System.out.println(name);
                    }
                    break;
                case 3:
                    // Remove a name from the list
                    System.out.print("Enter a name to remove: ");
                    String nameToRemove = scanner.nextLine();
                    boolean removed = nameList.remove(nameToRemove);
                    if (removed) {
                        System.out.println(nameToRemove + " has been removed from the list.");
                    } else {
                        System.out.println(nameToRemove + " was not found in the list.");
                    }
                    break;
                case 4:
                    // Exit the program
                    System.out.println("Exiting the program.");
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        }
    }
}

