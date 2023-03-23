#include<stdio.h>
int main(){

    int a,b;
    char ch;
    printf("enter the arithmetic operator :");
    scanf("%c",&ch);
    printf("enter two numbers: \n ");
    scanf("%d %d",&a, &b);

    switch(ch)
    {
        case '+':
        printf("sum is :%d\n",a+b);
        break;

        case '-':
        printf("difference is :%d\n",a-b);
        break;

        case '*':
        printf("product is :%d\n",a*b);
        break;
        
        case '/':
        printf("division is :%d\n",a/b);
        break;

        case '%':
        printf("modulus is :%d\n",a%b);
        break;


    }
    return 0;
    
}
