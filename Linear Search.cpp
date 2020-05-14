#include<stdio.h>

int main()
{
    int a[100],n,i,loc=-5,item;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter item: ");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            loc = i+1;
            break;
        }
    }
    if(loc==-5)
        printf("Data not found");
    else
        printf("Data found at lc = %d",loc);

    return 0;
}
