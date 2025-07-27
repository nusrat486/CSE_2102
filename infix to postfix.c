#include<stdio.h>
char stack[20];
int top=-1;
void push(char x)
{
    top++;
    stack[top]=x;
    }
   char pop()

    {
        char item;
        item = stack[top];
        top--;
    }
    int priority()
    {
       char x;
       if(x=='(' || x==')')
            return 0;
       if (x=='+'||x=='-')
        return 1;
       if (x=='*'||x=='/')
        return 2;
    }
    int main()
    {
        char exp[20];
        char *e,x;
        printf("Enter expressions::\n");
        scanf("%s\n",exp);
        e= exp;
        while(*e!=0)
        {
            if (isalnum(*e))
                printf("%c\n",*e);
            else if(*e=='(')
                        push(*e);
            else if (*e==')'){
                while((x=pop())!='('){
                        printf("%c\n",x);

                }
            }
            else{
                if(priority (stack[top])>=priority(*e))
                    printf("%c\n",pop());
                    push(*e);
            }
            e++;
        }
        while(top!=-1)
            printf("%c\n",pop());

    }
