import java.util.Scanner;

public class Main {
    public static class Car {
        private String brand, color;
        private int size;

        public void setBrand(String brand) {
            this.brand = brand;
        }

        public void setColor(String color) {
            this.color = color;
        }

        public void setSize(int size) {
            this.size = size;
        }

        public String getBrand() {
            return brand;
        }

        public String getColor() {
            return color;
        }

        public int getSize() {
            return size;
        }
    }


    public static void main(String[] args) {
        // Get user inputs
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter brand: ");
        String brand = scanner.nextLine();

        System.out.print("Enter size: ");
        int size = Integer.parseInt(scanner.nextLine());

        System.out.print("Enter color: ");
        String color = scanner.nextLine();

        // Create a Car object
        Car myCar = new Car();
        myCar.setBrand(brand);
        myCar.setSize(size);
        myCar.setColor(color);

        // Get and display the properties
        System.out.println("Brand: " + myCar.getBrand());
        System.out.println("Size: " + myCar.getSize());
        System.out.println("Color: " + myCar.getColor());
    }
}