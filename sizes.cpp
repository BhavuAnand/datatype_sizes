//size of datatypes
#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}


//product of two numbers
#include <iostream>
using namespace std;

int main() 
{    
    float n1,n2,pr;
    cout << "Enter the numbers for product"<<endl;
    cout << "Enter the first number: ";
    cin>>n1;
    cout << "Enter the second number: ";
    cin>>n2;
    pr=n1*n2;
    cout<<"Product is: "<<pr;

    return 0;
}
