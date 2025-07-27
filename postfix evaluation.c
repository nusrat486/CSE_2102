#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int stack[25]={0};
int top=-1;
int ch;

void push(int x)
{
    if(top==24)
        printf("Stack is full\n");
    else
    {
        top++;
        stack[top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
            }
            else
            {
                ch=stack[top];
                top--;
            }
            return ch;
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    char postfix[20]={'\0'},ele;
    int num1,i,num2,ans;
    printf("Enter postfix expression:");
    scanf("%s",postfix);
    printf("Postfix expression is:-%s\n",postfix);
    i=0;
    while(i<=strlen(postfix)-1)
    {
        ele = postfix[i];
        if(isdigit)
        {
          push(ele-'0') ;
        }
        else
        {
             num1=pop();
             num2=pop();
             switch(ele)
             {
                 case '^':
                 ans=pow(num2,num1);
                 break;
                 case '/':
                 ans=num2/num1;
                 break;
                 case '*':
                 ans=num2*num1;
                 break;
                 case '+':
                 ans=num2+num1;
                 break;
                 case '-':
                 ans=num2-num1;
                 break;
             }
             push(ans);
        }
        i++;
    }
    printf("Result is=%d\n",pop());


}
