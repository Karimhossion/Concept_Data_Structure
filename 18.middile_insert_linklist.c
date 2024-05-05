#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *last=NULL;

void printList()
{
    struct node *ptr;
    printf("\n[head]=>");
    for (ptr = head; ptr!= NULL; ptr=ptr->next)
    {
        printf("%d ",ptr->data);
    }
    printf("=>[NULL]\n");
}
void insert(int data)
{
    struct node *link=(struct node*)malloc(sizeof(struct node));
    link->data=data;
    link->next=NULL;
    if (head==NULL)
    {
        head=link;
        last=link;
    }
    else
    {
        last->next=link;
        last=link;
    }
    
}
void midValue()
{
    int value, position;
    printf("Insert middle value: ");
    scanf("%d", &value);
    printf("Insert position: ");
    scanf("%d", &position);
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    
    if (position <= 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    
    struct node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Invalid position.\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main(){
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int elem;
    printf("element : ");
    for (int i = 0; i < size ; ++i)
    {
        scanf("%d",&elem);
        insert(elem);
    }
    printf("Linklist : ");
    printList();
    midValue();
    printf("Middle add linklist : ");
    printList();
    return 0;
    
}
