import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input_object = new Scanner(System.in);
        System.out.println("Enter a number");
        int number = input_object.nextInt();
        input_object.close();
        if (number % 2 == 0) {
            System.out.println("The number is an even number");
        } else {
            System.out.println("The number is an odd number");
        }

    }
}

