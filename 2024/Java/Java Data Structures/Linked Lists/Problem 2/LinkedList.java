public class LinkedList {
    Node head;

    public void insertAtFront(int value) {
        // Implement me!
        Node newNode = new Node(value);
        newNode.next = head;
        head = newNode;
    }

    // ----- DO NOT MODIFY CODE BELOW -----
    public void insertAtTail(int value) {
        Node newNode = new Node(value);
        if (head == null) {
            head = newNode;
        } else {
            Node tail = getTail();
            tail.next = newNode;
        }
    }

    public void displayLinkedList() {
        Node currentNode = head;
        while (currentNode != null) {
            if (currentNode.next != null) {
                System.out.print(currentNode.data + " -> ");
            } else {
                System.out.print(currentNode.data);
            }
            currentNode = currentNode.next;
        }
        System.out.println();
    }

    private Node getTail() {
        Node tail = head;
        while (tail.next != null) {
            tail = tail.next;
        }
        return tail;
    }
}