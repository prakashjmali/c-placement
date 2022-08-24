#include<iostream>
using namespace std;
int main()
{ int a,b,c,op;
cin>>a>>b;
cout<<"enter the operttor";
cin>>op;
switch(op)
{
case 1: cout<<a+b;
        
        break;
case 2: cout<< a-b;
        
          break;
case 3: cout<< a*b;
          
          break;
Default : cout<<"no statement is requried";
         break;                  
}

return 0;
    
    
    }