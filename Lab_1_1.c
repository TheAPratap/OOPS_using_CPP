//Write a program to implement all loops
#include <stdio.h>
int main()
{

    int a, n,sum;
    printf("Abhinav Pratap\nA2345920104\nCSE Evening\n");
    printf("Enter choice: 1.For Loop 2. While Loop 3. Do While Loop 4. Nested Loop\n");
    scanf("%d", &a);
    printf("Enter any number: ");
    scanf("%d", &n);

 switch(a)
 {
  
  //For Loop
  case 1:
  //Table
  for(int i=1;i<=10;i++)
    {
        int product=i*n;
        printf("%d\n", product);
    }
  break;
  
  //While Loop
  case 2:
  //Reverse of n number
  while(n>0)
    {
        int rem=n%10;
        n=n/10;
        printf("%d", rem);
    }
  break;

  //do while Loop
  case 3:
  //Increment of any number till <=5
  do{
        printf("%d\n", n);
        n++;
    } while(n<=5);
  break;

  //Nested Loop
  case 4:
  //Print Floyd's Triangle
  {
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
  }
  break;

  default:
  printf("Unknown");
 }
}