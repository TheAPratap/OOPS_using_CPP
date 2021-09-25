//Write a program to implement string operations
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter choice: "<<endl<<"1. String Length"<<endl<<"2. String Copy"<<endl<<"3. String Concatenate"<<endl<<"4. String Comparsion"<<endl<<"5. Substring from String"<<endl<<"6. Reverse of String"<<endl<<"7. String Palindrome"<<endl;
    cin>>choice;
    string s1,s2;
    bool check;
    // getline(cin,s1);

    switch(choice)
    {
      //Length of string
      case 1:
      cout<<"Enter string: ";
      cin>>s1;
      cout<<s1.length()<<endl;
      break;
      
      //String Copy
      case 2:
      cout<<"Enter string: ";     
      cin>>s1;
      s2=s1;
      cout<<s2<<endl;
      break;
      
      //Concatenation of String
      case 3:
      cout<<"Enter both string:"<<endl;
      cin>>s1>>s2;
      cout<<s1+s2<<endl;
      break;
      
      //String Comparison
      case 4:
      cout<<"Enter both string:"<<endl;
      cin>>s1>>s2;
      cout<<s1.compare(s2)<<endl;
      if(s2.compare(s1)==0)
      {
        cout<<"String is equal"<<endl;
      }
      else
      {
          cout<<"String is unequal"<<endl;
      }
      break;

      //Substring from String
      case 5:
      cout<<"Enter string: ";
      cin>>s1;
      cout<<s1.substr(0,4)<<endl;
      break;

      case 6:
      cout<<"Enter string: ";
      cin>>s1;
      reverse(s1.begin(),s1.end());
      cout<<s1;
      break;

      case 7:
      cout<<"Enter string: ";
      cin>>s1;

      check=1;
      for (int i = 0; i < s1.size(); i++)
      {
          if(s1[i]!=s1[s1.size()-1-i])
          {
              check=0;
              break;
          }
      }
      if(check==1)
      {
        cout<<"Word is a palindrome"<<endl;
      }
      else
      {
        cout<<"Not a palindrome"<<endl;
      }
      break;

      default:
      cout<<"Wrong choice"<<endl;
      break;
    }
    return 0;
}