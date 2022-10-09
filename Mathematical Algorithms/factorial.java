// Java program to find factorial of number
import java.util.*;

class factorial {
    // method to find factorial of number
    static int factorial(int x) {
        if (x == 0)
            return 1; // factorial of 0 is always 1
        return x * factorial(x - 1);
    }

    // Driver method
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in); // input number from user
        System.out.print(" Enter the number: "); 
        int num = sc.nextInt();
        System.out.println(" Factorial of " + num + " is " + factorial(num)); // print value of factorial
    }
}