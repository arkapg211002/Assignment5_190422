/*1.Write a menu drive program to implement following functions- 

(i) Factorial
(ii) GCD
(iii) Combination coefficient
(iv) Fibonacci no. generation*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int factorial(int);
int gcd(int,int);
int combination(int,int);
int fibonacci(int);
void main()
{
    int n;char ch;
    
    do
    {   
        printf("\nEnter the choice\n(1) Factorial\n(2) GCD\n(3) Combination\n(4) Fibonacci\n");
        scanf("%d",&n);
        fflush(stdin);
        switch(n)
        {
            case 1:
            {
                int num;
                printf("\nEnter the number\n");
                scanf("%d",&num);
                fflush(stdin);
                printf("\nFactorial of %d is %d",num,factorial(num));
                break;
            }
            case 2:
            {
                int a,b;
                printf("\nEnter the two numbers\n");
                scanf("%d%d",&a,&b);
                fflush(stdin);
                printf("\nGCD of %d and %d is %d",a,b,gcd(a,b));
                break;
            }
            case 3:
            {
                int a,b;
                printf("\nEnter the two numbers\n");
                scanf("%d%d",&a,&b);
                fflush(stdin);
                printf("\nCombination of %d and %d is %d",a,b,combination(a,b));
                break;
            }
            case 4:
            {
                int num;
                printf("\nEnter the number\n");
                scanf("%d",&num);
                fflush(stdin);
                printf("\nFibonacci of %d is %d",num,fibonacci(num));
                break;
            }
            default:
            {
                printf("\nInvalid choice\n");
                
            }
        }
        ch=getchar();
        printf("\nDo you want to continue?(y/n)\n");
        fflush(stdin);
        scanf("%c",&ch);
        
      
    } while (ch=='y');
    
    
}
int factorial(int n)
{
    if(n<0)
    {
        printf("\nFactorial of negative number is not possible");
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int combination(int n,int r)
{
   
    if(r==0 || r==n)
    {
        return 1;
    }
    else
    {
        return combination(n-1,r-1)+combination(n-1,r);
    }
}
int fibonacci(int n)
{
    if(n<0)
    {
        printf("\nFibonacci no. of negative number is not possible");
        return 0;
    }
    else if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}