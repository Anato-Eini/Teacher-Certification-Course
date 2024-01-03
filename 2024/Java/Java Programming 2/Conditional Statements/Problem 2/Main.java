import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter your weight in kilograms: ");
        float weight = scanner.nextFloat();
        System.out.print("Please enter your height in meters: ");
        float height = scanner.nextFloat(), BMI;
        BMI = weight / (height * height);
        System.out.printf("Your BMI is %.2f\n", BMI);
        System.out.println((BMI >= 30) ? "BMI is Obese" : (BMI >= 25) ? "BMI is Overweight" :
                (BMI >= 18.5) ? "BMI is Normal" : "BMI is Underweight");
    }
}
