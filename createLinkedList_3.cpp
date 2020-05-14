
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *start,*first;
    first=(node *)malloc(sizeof(node));
    start=first;
    printf("Enter Numbers to insert in Linked List, 0 to stop: ");
    while(1)
    {
        scanf("%d",&first->info);
        printf("%d Stored at: %d\n",first->info,first);
        if(first->info==0)
            break;
        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        first->link = next;
        first=next;
    }

    while(start!=NULL)
    {
        printf("info = %d, Next Link = %d\n",start->info,start->link);
        start = start->link;
    }
    return 0;
}
