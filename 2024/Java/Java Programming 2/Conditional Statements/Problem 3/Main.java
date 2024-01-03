import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        int dup = number, sum = 0;
        while (dup != 0){
            sum = sum * 10 + (dup % 10);
            dup /= 10;
        }
        System.out.println((sum == number) ? "Palindrome" : "Not a Palindrome");
    }
}
