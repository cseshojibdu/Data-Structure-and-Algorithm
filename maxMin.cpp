#include<stdio.h>

int main()
{
    int a[100],n,i,maximum,minimum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    //initialization
    maximum = a[0];
    minimum=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>maximum)
        {
            maximum = a[i];
        }
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
    }
    printf("Maximum value of array = %d",maximum);
    printf("minimum value of array= %d", minimum);

  return 0;
}
