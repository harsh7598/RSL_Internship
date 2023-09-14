
public class Que15 {
    public static void main(String[] args) {
        // Define a sample string
        String originalString = "Hello, World!";

        // Get the length of the string
        int length = originalString.length();
        System.out.println("Length of the string: " + length);

        // Convert the string to uppercase
        String uppercaseString = originalString.toUpperCase();
        System.out.println("Uppercase string: " + uppercaseString);

        // Extract a substring
        String substring = originalString.substring(7); // Extracts from index 7 to the end
        System.out.println("Substring starting from index 7: " + substring);

        // Extract a substring with a specified range
        String substringRange = originalString.substring(0, 5); // Extracts from index 0 to 4
        System.out.println("Substring with range [0, 5): " + substringRange);
    }
}

