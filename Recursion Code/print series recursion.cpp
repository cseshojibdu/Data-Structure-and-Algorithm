#include<stdio.h>

void p(int n)
{
    if(n>=1)
    {
        p(n-1);
        printf("%d ",n);
    }
    return;
}

int main()
{
    int n;
    scanf("%d",&n);
    p(n);
	return 0;
}
