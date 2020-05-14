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
            {
                push(s[i]);
                //printf("%d. Top = %d\n",i,top);
            }
            else
            {
                pop();
                //printf("%d. Top = %d\n",i,top);
            }
        }
    }
}
int main()
{
    top = 0;
    char inp[100];
    gets(inp);
    len = strlen(inp);
    test(inp);
    printf("%d\n",top);
    if(top==0)printf("Balanced");
    else printf("Not Balanced");
    return 0;
}
