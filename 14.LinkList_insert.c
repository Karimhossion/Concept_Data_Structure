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
    for (ptr = head; ptr!=NULL; ptr=ptr->next)
    {
        printf("%d=>", ptr->data);
    }
    printf("[NULL]\n");
}
void insert(int data){
    struct node *link=(struct node*)malloc(sizeof(struct node));
    link->data=data;
    link->next=NULL;
    if (head==NULL)
    {
        head=link;
        last=link;
    }
    else{
        last->next=link;
        last=link;
    }
    
}

int main()
{
    char ch;
    int x;
    while (1)
    {
        printf("Enter c and E : ");
        scanf(" %c", &ch);
        if (ch == 'C' || ch == 'c')
        {
            printf("Enter element : ");
            scanf(" %d", &x);
            insert(x);
        }
        else
        {
            break;
        }
    }
    printList();
    return 0;
}