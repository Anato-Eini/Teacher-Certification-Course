import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        Circle circle = new Circle(scanner.nextDouble());
        System.out.printf("Radius: %.2f\n", circle.getRadius());
        System.out.printf("Circumference: %.2f\n", circle.getCircumference());
        System.out.printf("Area: %.2f", circle.getArea());
    }
    private static class Circle{
        private double radius, circumference, area;

        public Circle(double radius) {
            this.radius = radius;
            circumference = 2 * Math.PI * radius;
            area = Math.PI * radius * radius;
        }

        public void setRadius(double radius) {
            this.radius = radius;
        }

        public void setCircumference(double circumference) {
            this.circumference = circumference;
        }

        public void setArea(double area) {
            this.area = area;
        }

        public double getRadius() {
            return radius;
        }

        public double getCircumference() {
            return circumference;
        }

        public double getArea() {
            return area;
        }
    }
}