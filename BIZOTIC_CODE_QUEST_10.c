#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* prev;
    struct Node* next;
    int data;
};

void insertnode(int temp, struct Node **head) {
    struct Node *newnode = calloc(1, sizeof(struct Node));
    newnode->data = temp;

    if (*head == NULL) {
        *head = newnode;
        newnode->next = NULL;
        newnode->prev = NULL;
    } else {
        struct Node* tempNode = *head;
        while (tempNode->next != NULL) {
            tempNode = tempNode->next;
        }
        tempNode->next = newnode;
        newnode->prev = tempNode;
        newnode->next = NULL;
    }
}

int main() {
    struct Node *head = NULL;
    insertnode(2, &head);
    insertnode(3, &head);
    insertnode(4, &head);
    insertnode(5, &head);
    insertnode(6, &head);

    struct Node *temp1 = head;
    int N,i=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    struct Node *end=head;
    while(end->next!=NULL){
        end=end->next;
    }
    struct Node *start=head;
    temp1 = head;
    while(i<N){
        temp1=temp1->next;
        i++;
    }
    end->next=start;
    start->prev=end;
    temp1->prev->next=NULL;
    temp1->prev=NULL;
    head=temp1;
    temp1=head;
    while(temp1!=NULL){
        printf("%d",temp1->data);
        temp1=temp1->next;
    }
    return 0;
}
