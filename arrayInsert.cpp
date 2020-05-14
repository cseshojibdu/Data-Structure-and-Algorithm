#include<stdio.h>

int main()
{
    int a[10000],n,i,k,loc,item;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("Enter item to insert: ");
    scanf("%d",&item); //28
    printf("Enter location to insert: ");
    scanf("%d",&k);

    for(i=n+1;i>k;i--)
    {
        a[i] = a[i-1];
    }
    a[k]=item;
    //after inserting
    for(i=1;i<=n+1;i++)
    {
        printf("%d ",a[i]);
    }

  return 0;
}


