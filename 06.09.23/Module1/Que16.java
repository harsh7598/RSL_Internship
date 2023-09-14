
public class Que16 {
    public static void main(String[] args) {
        // Given string
        String inputString = "Hello, World! This is an example.";

        // Character to count
        char targetChar = 'a';

        // Initialize a count variable to keep track of occurrences
        int count = 0;

        // Iterate through the string and count occurrences of the target character
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString.charAt(i) == targetChar) {
                count++;
            }
        }

        // Print the count of occurrences
        System.out.println("The character '" + targetChar + "' appears " + count + " times in the string.");
    }
}
