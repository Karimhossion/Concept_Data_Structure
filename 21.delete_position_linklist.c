#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;

void printList()
{
    struct node *ptr;
    printf("\n[head]=>");
    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d ", ptr->data);
    }
    printf("=>[NULL]\n");
}

void insert(int data)
{
    struct node *link = (struct node*)malloc(sizeof(struct node));
    link->data = data;
    link->next = NULL;
    if (head == NULL)
    {
        head = link;
        last = link;
    }
    else
    {
        last->next = link;
        last = link;
    }
}

void deleteMiddle()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    int position;
    printf("Enter position of node to delete: ");
    scanf("%d", &position);
    if (position < 1)
    {
        printf("Invalid position.\n");
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    int count = 1;
    while (temp != NULL && count < position)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        printf("Position out of range.\n");
        return;
    }
    if (prev == NULL)
    {
        // Deleting the first node
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }
    free(temp);
}

int main()
{
    int size;
    printf("Enter size : ");
    scanf("%d", &size);
    int elem;
    printf("Enter elements : ");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &elem);
        insert(elem);
    }
    printf("Linked list : ");
    printList();
    deleteMiddle();
    printf("After deleting node from middle: ");
    printList();
    return 0;
}
