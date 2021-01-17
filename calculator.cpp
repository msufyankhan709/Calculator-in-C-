#include <iostream>

using namespace std;

int main()
{
	
 int num1,num2;
 char x;
 cout<<"Enter number one:"<<endl;
 cin>>num1;
 
 cout<<"Enter number two:"<<endl;
 cin>>num2;
 
  cout<<"Press a for addition"<<endl;
  cout<<"Press b for subtraction"<<endl;
  cout<<"Press c for multiplication"<<endl;
  cout<<"Press d for division and remainder"<<endl;
  cin>>x;
  
  if(x=='a')
  cout<<"The sum= "<<num1+num2<<endl;
  
  else if(x=='b')
  cout<<"The subtraction= "<<num1-num2<<endl;
  
  else if(x=='c')
  cout<<"The multiplication= "<<num1*num2<<endl;
  
  else if(x=='d')
  cout<<"The division= "<<num1/num2<<"The remainder= "<<num1%num2<<endl;
  
   cin>>x;
}
