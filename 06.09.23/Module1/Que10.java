import java.util.Scanner;

public class Que10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // To read user input

        System.out.println("Enter an Integer");

        int a = sc.nextInt();

        if(a%2 == 0){
            System.out.println( a +" is even"); 
        }
        else{
            System.out.println( a +" is odd");
        }
    }
}
