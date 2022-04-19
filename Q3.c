/*Write a program to print inverted pascal's triangle using array. */
#include<stdio.h>
#include<stdlib.h>
void pascal(int);
void main()
{
    int n;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);fflush(stdin);
    pascal(n);
}
void pascal(int n)
{
    int i,j,k,a[n][n];
    for(i=0;i<n;i++)
    {
        
        for(k=0;k<=i;k++)
        {
            if(k==0||k==i)
            {
                a[i][k]=1;
            }
            else
            {
                a[i][k]=a[i-1][k-1]+a[i-1][k];
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j<n-1;j++)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%4d",a[i][k]);
        }
        printf("\n");
    }
    
}