import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String string = sc.nextLine();
        System.out.println(
                "\t" + string + "\n" +
                        "\t\t" + string + "\n" +
                        "\t\t" + string + "\n" +
                        "\t\t\t" + string + "\n" +
                        "\t\t\t" + string + "\n" +
                        "\t\t" + string + "\n" +
                        "\t\t" + string + "\n" +
                        "\t" + string + "\n" +
                        string
        );
    }
}
