//Write a program to implement switch and array
#include <stdio.h>

int main()
{
    printf("Abhinav Pratap\nA2345920104\nCSE Evening\n");
    int n,i,ch,sum=0,mul=1;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for (i = 0; i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Choose a program: \n1. Sum of Array\n2. Multiplication of array\n");

    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        for (i = 0; i < n; i++)
        {
            sum=sum+arr[i];
        }
        
        printf("Sum of array: %d\n",sum);
        break;

        case 2:
        for (i = 0; i < n; i++)
        {
            mul=mul*arr[i];
        }

        printf("Multiplication of array: %d\n",mul);
        break;

        default:
        printf("Wrong Choice");
    }
}