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

void deleteLast()
{
    if (head == NULL)
    {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL)
    {
        // Only one node in the list
        head = NULL;
    }
    else
    {
        prev->next = NULL;
    }
    free(temp);
}

int main()
{
    int size;
    printf("Enter size : ");
    scanf("%d", &size);
    int elem;
    printf("element : ");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &elem);
        insert(elem);
    }
    printf("Linklist : ");
    printList();
    deleteLast();
    printf("After deleting last node: ");
    printList();
    return 0;
}
