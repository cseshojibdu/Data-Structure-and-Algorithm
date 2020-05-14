#include<stdio.h>

int findSum(int a[],int n)
{
    if(n==0)return 0;
    //printf("%d ",a[n-1]);
    return findSum(a,n-1)+a[n-1];

}
int main()
{
    int a[1000],i,s,n;
    scanf("%d",&n);
    s = 0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    s = findSum(a,n);
    printf("Sum = %d",s);
    return 0;
}
