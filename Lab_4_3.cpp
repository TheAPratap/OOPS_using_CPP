//Implement inline function (problem statement of your choice)
#include <iostream>
using namespace std;

inline bool increment(int a,int b)
{
  return (a++&&++b)? true:false;
}

int main()
{
  cout<<"Abhinav Pratap"<<endl<<"A2345920104"<<endl<<"CSE Evening"<<endl;
  int i,j;
  cin>>i>>j;
  cout<<increment(i,j)<<endl;
}