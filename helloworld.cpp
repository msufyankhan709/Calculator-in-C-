// Header file for input output functions 
#include<iostream>  
  
using namespace std; 
  
  int add(int i, int j){
	return i+j;
}
// main function - 
// where the execution of program begins 
int main() 
{ 

int i=1,j=3,r=0;
r=i+j;
    // prints hello world 
    cout<<r ;
	cout<<"\n"; 
      cout<<add(2,3);  
      int x,y;
      cout << "Type a number 1: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value

      cout << "Type a number 2: "; // Type a number and press enter
cin >> y; // Get user input from the keyboard
cout << "Your number is: " << y << "\t";
cout<<add(x,y);
    return 0; 
} 


