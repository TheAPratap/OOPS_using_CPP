//Program to Implement call by value

#include <stdio.h>

int inc(int a)
{
  a++;
  return a;
}

int main()
{
    int n;
    printf("Abhinav Pratap\nA2345920104\nCSE Evening\n");
    printf("Enter any number: ");
    scanf("%d", &n);

    int result =inc(n);
    printf("Incremented value: %d\n", result);
    return 0;
}