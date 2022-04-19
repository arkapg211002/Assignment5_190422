/*Write a program to implement bubble sort algorithm .*/
#include<stdio.h>
#include<stdlib.h>
void input(int *,int);
void display(int *,int);
void bubble_increasing(int *,int);
void bubble_decreasing(int *,int);
void main()
{
    int n,i;char ch;
    
    do
    {
        printf("\nEnter the number of elements\n");
        scanf("%d",&n);fflush(stdin);
        int *a=(int *)malloc(n*sizeof(int));
        input(a,n);
        printf("\nThe array before sorting\n");
        display(a,n);
        printf("\n The array after sorting\n");
        printf("\nEnter the choice\n(1) Increasing\n(2) Decreasing\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            {
                bubble_increasing(a,n);
                break;
            }
            case 2:
            {
                bubble_decreasing(a,n);
                break;
            }
            default:
            {
                printf("\nInvalid choice\n");
                break;
            }
        }
        display(a,n);
        fflush(stdin);
        ch=getchar();
        printf("\nDo you want to continue?\n(y/n)");
        scanf("%c",&ch);
    }while(ch=='y');
}
void input(int *a,int n)
{
    int i;
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    {   
        printf("\nThe elelemnt %d is\n",i+1);
        scanf("%d",&a[i]);fflush(stdin);
    }
}
void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void bubble_increasing(int *a,int n)
{
    int i,j,temp,flag;
    for(i=0,flag=1;i<n-1 && flag;i++)
    {
        for(j=0,flag=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void bubble_decreasing(int *a,int n)
{
    int i,j,temp,flag;
    for(i=0,flag=1;i<n-1 && flag;i++)
    {
        for(j=0,flag=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                flag=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}