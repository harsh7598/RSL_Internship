
public class Que12 {
    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int target = 6;
        boolean found = false;

        for (int number : numbers) {
            if (number == target) {
                found = true;
                break; // Exit the loop when the target is found
            }
        }

        if (found) {
            System.out.println("Target " + target + " found in the array.");
        } else {
            System.out.println("Target " + target + " not found in the array.");
        }
    }
}
