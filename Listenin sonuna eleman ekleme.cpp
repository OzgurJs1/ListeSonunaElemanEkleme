#include<stdio.h>
#include<stdlib.h>
// Listenin sonuna eleman ekleme
struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

// Listenin eleman say�s�n� bulma
int countNodes(struct Node *head) {
    int count = 0;
    struct Node *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    struct Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 712);
    printf("Listenin eleman sayisi: %d", countNodes(head));
    return 0;
}

