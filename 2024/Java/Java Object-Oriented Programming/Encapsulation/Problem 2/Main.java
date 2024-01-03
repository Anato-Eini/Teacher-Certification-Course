import java.util.Scanner;

public class Main {
    public static class Employee{
        private int id, yearEmployed;
        private String name, role;

        public void setId(int id) {
            this.id = id;
        }

        public void setYearEmployed(int yearEmployed) {
            this.yearEmployed = yearEmployed;
        }

        public void setName(String name) {
            this.name = name;
        }

        public void setRole(String role) {
            this.role = role;
        }

        public int getId() {
            return id;
        }

        public int getYearEmployed() {
            return yearEmployed;
        }

        public String getName() {
            return name;
        }

        public String getRole() {
            return role;
        }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get user inputs
        System.out.print("Enter employee ID: ");
        int id = Integer.parseInt(scanner.nextLine());

        System.out.print("Enter employee name: ");
        String name = scanner.nextLine();

        System.out.print("Enter employee role: ");
        String role = scanner.nextLine();

        System.out.print("Enter year employed: ");
        int yearEmployed = Integer.parseInt(scanner.nextLine());

        // Create an Employee object
        Employee employee = new Employee();

        // Use setters to set the values
        employee.setId(id);
        employee.setName(name);
        employee.setRole(role);
        employee.setYearEmployed(yearEmployed);

        // Get and display the properties
        System.out.println("Employee ID: " + employee.getId());
        System.out.println("Employee Name: " + employee.getName());
        System.out.println("Employee Role: " + employee.getRole());
        System.out.println("Year Employed: " + employee.getYearEmployed());
    }
}