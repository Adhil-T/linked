#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the beginning
void insertAtBeginning(struct Node** head, int value) {
    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data
    newNode->data = value;

    // Point newNode to the current head
    newNode->next = *head;

    // Update head to newNode
    *head = newNode;
}

// Function to print the list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Start with an empty list

    // Insert elements at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    // Print the list
    printList(head);  // Output: 30 -> 20 -> 10 -> NULL

    return 0;
}
