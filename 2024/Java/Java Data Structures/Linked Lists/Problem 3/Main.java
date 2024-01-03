import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();
        int size;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the linked list: ");
        size = scanner.nextInt();

        for (int i = 0; i < size; i++) {
            int value;
            System.out.print("Enter the value of element " + (i + 1) + ": ");
            value = scanner.nextInt();
            linkedList.insert(value);
        }

        System.out.print("\nLinked List before reversing: ");
        linkedList.displayLinkedList();

        linkedList.reverse();

        System.out.print("Linked List after reversing: ");
        linkedList.displayLinkedList();
    }
}