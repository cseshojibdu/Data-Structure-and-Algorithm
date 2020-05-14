#include<stdio.h>

int main()
{
    int a[10000],n,i,b,e,mid,loc=-5,item;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("Enter item to search: ");
    scanf("%d",&item);
    b = 1;
    e = n;
    mid = (b+e)/2;
    while(b<=e)
    {
        if(a[mid]==item)
        {
            loc = mid;
            break;
        }
        else if(a[mid]<item)
            b = mid + 1;
        else
            e = mid - 1;
        //again calculate
        mid = (b+e)/2;
    }
    if(loc==-5)
        printf("Data not found");
    else
        printf("Data found at location = %d",loc);
  return 0;
}

