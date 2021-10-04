import java.util.Scanner; // Import scanner class for taking input

public class Main { // add Main class
    public static void main(String[] args) { // add main function
        System.out.println("Enter a number"); // println the question
        Scanner input_object = new Scanner(System.in); // create input object
        int number = input_object.nextInt(); // store an int number
        input_object.close(); // close the input object
        if (number % 2 == 0) { // check if it is divisible by 2 or not
            System.out.println("The number is an even number"); // print if it is an even number
        } else {
            System.out.println("The number is an odd number"); // print if it is not an even number
        }

    }
}

