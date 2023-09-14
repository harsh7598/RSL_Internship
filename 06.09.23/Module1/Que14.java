
public class Que14 {
    public static void main(String[] args) {
        // Define the size of the multiplication table
        int rows = 5;
        int columns = 5;

        // Create a 2D array to store the multiplication table
        int[][] multiplicationTable = new int[rows][columns];

        // Populate the array with multiplication values
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                multiplicationTable[i][j] = (i + 1) * (j + 1);
            }
        }

        // Print the multiplication table
        System.out.println("Multiplication Table from 1 to 5:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(multiplicationTable[i][j] + "\t");
            }
            System.out.println(); // Move to the next row
        }
    }
}

