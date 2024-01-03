import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the total purchase amount: ");
        float purchaseAmount = sc.nextFloat();
        System.out.printf("Initial Purchase Amount: %.2f\n", purchaseAmount);
        float discount = (float) ((purchaseAmount > 5000) ? purchaseAmount * 0.1 : purchaseAmount * 0.05);
        System.out.printf("Discount: %.2f\n", discount);
        System.out.printf("Final Price: %.2f" , purchaseAmount - discount);
    }
}
