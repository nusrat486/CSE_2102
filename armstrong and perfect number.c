#include<stdio.h>
int armstrong(int n)
{
    int m,rem,sum=0;
    m=n;
    while(m!=0)
    {
        rem=m%10;
    m=m/10;
    sum=sum+(rem*rem*rem);
    }
    return sum;

}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int r=armstrong(n);
    if(r==n)
    {
       printf("Number is armstrong\n");
    }

    else{
         printf("Number isnot armstrong\n");
    }

    return 0;
}

