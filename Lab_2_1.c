//Write a program to use call by reference
// Find a'=|a+b| and b'=|a-b| .

#include <stdio.h>

void update(int *a,int *b)
{
    int temp=*a;
    *a=*a+*b;
    *b=temp-*b;
    
    if(*b<0)
    {
        *b=-(*b);
    }
}

int main() {

    printf("Abhinav Pratap\nA2345920104\nCSE Evening\n");

    int a, b;
    
    printf("Enter a & b:\n");
    scanf("%d %d", &a, &b);

    int *ptra = &a, *ptrb = &b;
    update(ptra, ptrb);

    printf("a': %d\nb': %d\n", a, b);

    return 0;
}