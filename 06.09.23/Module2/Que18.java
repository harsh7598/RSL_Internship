

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Que18 {
    public static void main(String[] args) {
        // Create a HashMap to store words and their meanings
        Map<String, String> wordDictionary = new HashMap<>();

        // Add some initial word-meaning pairs
        wordDictionary.put("apple", "a fruit with a red or green skin and white flesh");
        wordDictionary.put("book", "a written or printed work consisting of pages");
        wordDictionary.put("computer", "an electronic device for storing and processing data");

        // Create a Scanner for user input
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nWord Dictionary Menu:");
            System.out.println("1. Look Up Word");
            System.out.println("2. Add Word and Meaning");
            System.out.println("3. Exit");
            System.out.print("Enter your choice (1/2/3): ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character

            switch (choice) {
                case 1:
                    // Look up the meaning of a word
                    System.out.print("Enter a word to look up: ");
                    String wordToLookup = scanner.nextLine().toLowerCase(); // Convert to lowercase for case-insensitivity
                    String meaning = wordDictionary.get(wordToLookup);
                    if (meaning != null) {
                        System.out.println("Meaning: " + meaning);
                    } else {
                        System.out.println("Word not found in the dictionary.");
                    }
                    break;
                case 2:
                    // Add a word and its meaning to the dictionary
                    System.out.print("Enter a word to add: ");
                    String newWord = scanner.nextLine().toLowerCase();
                    System.out.print("Enter its meaning: ");
                    String newMeaning = scanner.nextLine();
                    wordDictionary.put(newWord, newMeaning);
                    System.out.println("Word and meaning added to the dictionary.");
                    break;
                case 3:
                    // Exit the program
                    System.out.println("Exiting the Word Dictionary.");
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        }
    }
}
