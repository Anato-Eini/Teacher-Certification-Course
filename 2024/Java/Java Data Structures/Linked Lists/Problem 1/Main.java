// Do not modify code in this file. Go to LinkedList.java

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Prompt the user for the number of elements in the linked list
        System.out.print("Enter the number of elements in the linked list: ");
        Scanner scanner = new Scanner(System.in);
        int numElements = scanner.nextInt();

        // Create the linked list
        LinkedList linkedList = new LinkedList();

        // Add nodes to the linked list
        for (int i = 0; i < numElements; i++) {
            System.out.print("Enter the value of node " + (i + 1) + ": ");
            int value = scanner.nextInt();
            linkedList.addNode(value);
        }

        // Display the initial linked list
        System.out.print("Linked List: ");
        linkedList.displayLinkedList();

        // Prompt the user for the value to delete
        System.out.print("Enter the value to delete: ");
        int valueToDelete = scanner.nextInt();

        // Delete all occurrences of the specified value from the linked list
        linkedList.deleteNode(valueToDelete);

        // Display the updated linked list
        System.out.print("Updated Linked List: ");
        linkedList.displayLinkedList();
    }
}