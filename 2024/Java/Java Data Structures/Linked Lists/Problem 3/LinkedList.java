public class LinkedList {
    public Node head;

    public void reverse() {
        // Implement me!
        Node prev = null, curr = head, next = head;
        while(next != null){
            next = next.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    // ----- DO NOT MODIFY CODE BELOW -----
    public void insert(int value) {
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