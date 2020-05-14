#include<stdio.h>
#include<string.h>

char stack[100];
int len,top;
void push(char ch)
{
    stack[top] = ch;
    printf("%c is pushed at %d\n",ch, top);
    top++;
    printf("New blank space Top = %d\n",top);
}
void pop()
{
    top--;
    printf("Top after pop = %d\n",top);
}
char topStack()
{
    return stack[top-1];
}
void test(char s[])
{
    int i;
    for(i=0;i<len;i++)
    {
        if(top==0 && s[i]!=')')push(s[i]);
        else
        {
            if(topStack()==s[i])
                push(s[i]);
            else
                pop();
        }
    }
}
int main()
{
    char inp[100];

    while(gets(inp))
    {
        if(strcmp(inp,"00")==0)break;
        top = 0;
        len = strlen(inp);
        test(inp);
        printf("Final top = %d\n",top);
        if(top==0)printf("Balanced");
        else printf("Not Balanced");

        printf("\n\n");

    }
    return 0;
}
