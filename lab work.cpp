#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
	int choice;
	double radius, lenght, width, area;
	const double PI = 3.412;
	
	cout<<" Choose a shape to calculate its area : " <<endl;
	cout<<" 1. Circle " <<endl;
	cout<<" 2. Rectangle " <<endl;
	cout<<" Enter your choice (1 or 2) : ";
	cin>>choice;
	
	if (choice == 1) {
		cout<<" Enter the radius of the circle : ";
		cin>>radius;
		
		area  = PI * pow(radius, 2);
		cout<<" Area of the circle is : " <<area<<endl;
	}
	else if (choice == 2) {
		cout<<" Enter the lenght and width of the rectangle : ";
		cout<<" Enter the lenght of the rectangle : ";
		cin>>lenght;
		cout<<" Enter the width of the rectangle : ";
		cin>>width;
		
		if ((lenght <= 0) || (width <= 0))
		    cout<<" Invalid input . Lenght and width cannot be negative. "<<endl;
		    
		area = lenght * width; //Calculate area of rectangle
		cout<<" Area of the rectangle is : " <<area<<endl;
	}
	else
	   cout<<" Invalid choice. Please enter 1 or 2. " <<endl;
	//end of it
	
	return 0;
}//end of the main function
