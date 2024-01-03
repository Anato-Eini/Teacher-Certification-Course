// Do not modify code in this file. Go to LinkedList.java

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the initial size of the linked list: ");
        int initialSize = scanner.nextInt();

        LinkedList linkedList = new LinkedList();
        for (int i = 0; i < initialSize; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            int value = scanner.nextInt();
            linkedList.insertAtTail(value);
        }

        System.out.println("\nLinked List before head insertion: ");
        linkedList.displayLinkedList();

        System.out.print("\nEnter the number of elements to insert at the front: ");
        int numElements = scanner.nextInt();
        for (int i = 0; i < numElements; i++) {
            System.out.print("Enter the value of element " + (i + 1) + ": ");
            int value = scanner.nextInt();
            linkedList.insertAtFront(value);
        }

        System.out.println("\nLinked List after head insertion: ");
        linkedList.displayLinkedList();

        scanner.close();
    }
}