#include <iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<&a<<endl;
    cout<<a<<endl;
    
    cout<<"After first dereference->"<<endl;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    cout<<"After second dereference->"<<endl;
    int **q=&p;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&q<<endl;

    cout<<"After third dereference->"<<endl;
    int ***r=&q;
    cout<<r<<endl;
    cout<<*r<<endl;
    cout<<**r<<endl;
    cout<<***r<<endl;
    cout<<&r<<endl;
    
    cout<<"After forth dereference->"<<endl;
    int ****s=&r;
    cout<<s<<endl;
    cout<<*s<<endl;
    cout<<**s<<endl;
    cout<<***s<<endl;
    cout<<****s<<endl;
    cout<<&s<<endl;
    
    return 0;
}