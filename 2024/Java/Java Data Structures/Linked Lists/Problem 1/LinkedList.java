import java.util.Scanner;

public class LinkedList {
    public Node head;

    public void deleteNode(int value) {
        // Implement me!
        Node curr = head, prev = null;
        while(curr != null){
            if(curr.data == value){
                if(curr == head){
                    head = head.next;
                    curr = head;
                    continue;
                }
                curr = curr.next;
                prev.next = curr;
                continue;
            }
            prev = curr;
            curr = curr.next;
        }
    }

    // ----- DO NOT MODIFY CODE BELOW -----
    public void addNode(int value) {
        Node node = new Node(value);
        if (head == null) {
            head = node;
        } else {
            Node currentNode = head;
            while (currentNode.next != null) {
                currentNode = currentNode.next;
            }
            currentNode.next = node;
        }
    }

    public void displayLinkedList() {
        Node currentNode = head;
        while (currentNode != null) {
            if (currentNode.next != null) {
                System.out.print(currentNode.data + " -> ");
            } else {
                System.out.println(currentNode.data);
            }
            currentNode = currentNode.next;
        }
    }
}