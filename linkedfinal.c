
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtBeginning(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtLocation(int value, int location) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if (location == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    struct node *temp = head;
    for (int i = 1; i < location - 1; i++) {
        if (temp == NULL) {
            printf("The given location is invalid.\n");
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtFront() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteAtLocation(int location) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node *temp = head;
    if (location == 1) {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < location - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("The given location is invalid.\n");
        return;
    }
    struct node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
void deleteAtEnd() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node *temp = head;
    if (temp->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
void displayList() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node *temp = head;
    printf("The list is: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value, location;
    while (1) {
        printf("Enter your choice:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at specific location\n");
        printf("4. Delete at front end\n");
        printf("5. Delete at specific location\n");
        printf("6. Delete at the end\n");
        printf("7. Display the linked list\n");
        printf("8. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                printf("Enter the location where the value is to be inserted: ");
                scanf("%d", &location);
                insertAtLocation(value, location);
                break;
            case 4:
                deleteAtFront();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
                printf("Enter the location where the value is to be deleted: ");
                scanf("%d", &location);
                deleteAtLocation(location);
                break;
            case 7:
                displayList();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
