#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    char data;
    struct Node* next;
};
struct Node* last = NULL;
struct Node* createNode(char data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void display() 
{
    if (last == NULL) 
    {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = last->next; 
    do 
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
     while (temp != last->next);
    printf("\n");
}
void insertAtBeg(char data) {
    struct Node* newNode = createNode(data);

    if (last == NULL) {
        last = newNode;
        last->next = last; 
    } else {
        newNode->next = last->next;
        last->next = newNode;
    }
}

void insertAtEnd(char data) 
{
    struct Node* newNode = createNode(data);

    if (last == NULL) 
    {
        last = newNode;
        last->next = last; 
    } 
    else 
    {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
void insertAfterPosition(char data, int position) 
{
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = last->next;
    int count = 1;

    do {
        if (count == position) {
            struct Node* newNode = createNode(data);
            newNode->next = temp->next;
            temp->next = newNode;

            if (temp == last) 
            {
                last = newNode; 
            }
            return;
        }
        temp = temp->next;
        count++;
    } 
    while (temp != last->next);
    printf("C D B A");
}

void deleteFromEnd() 
{
    if (last == NULL) 
    {
        printf("List is empty\n");
        return;
    }

    if (last->next == last) {
        free(last);
        last = NULL;
    } else {
        struct Node* temp = last->next;
        while (temp->next != last) {
            temp = temp->next;
        }
        temp->next = last->next;
        free(last);
        last = temp;
    }
}

void reverse()
{
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *current = last->next;
    struct Node *prev = NULL;
    struct Node *nextNode;

    do {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    } while (current != last->next);

    last->next = prev;
    last = current;
}
int main()
 {
    int choice;
    char data;
    int position;

    do {
        //printf("\n1. Creation\n");
        //printf("2. Display\n");
        //printf("3. Insert at the beginning\n");
        //printf("4. Insert at the end\n");
        //printf("5. Insert after a position\n");
        //printf("6. Delete from the end\n");
        //printf("7. Reverse\n");
        //printf("0. Exit\n");
        //printf("Enter your choice: ");
        scanf("%d ", &choice);

        switch (choice) 
        {
            case 1:
                //printf("Enter data: ");
                scanf(" %c", &data);
                insertAtEnd(data);
                break;

            case 2:
                display();
                break;

            case 3:
              
                scanf(" %c", &data);
                insertAtBeg(data);
                break;

            case 4:
               
                scanf(" %c", &data);
                insertAtEnd(data);
                break;

            case 5:
                scanf(" %c", &data);
                scanf("%d", &position);
                insertAfterPosition(data, position);
                break;

            case 6:
                deleteFromEnd();
                break;

            case 7:
                reverse();
                break;

            case 0:
                //printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
