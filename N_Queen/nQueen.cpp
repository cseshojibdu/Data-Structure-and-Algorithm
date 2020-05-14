#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

bool isValid(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(abs(i-j)==abs(a[j]-a[i]))
                    return false;
            }
        }
    }
    return true;
}
int main()
{
    int n,i,a[100],c=0;
    printf("Enter number of queen: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    while(next_permutation(a,a+n))
    {
        if(isValid(a,n))
        {
            for(i=0;i<n;i++)
                printf("%d ",a[i]);
            printf("\n");
            c++;
        }
    }
    cout<<"Total Solution: "<<c<<endl;
    return 0;
}
