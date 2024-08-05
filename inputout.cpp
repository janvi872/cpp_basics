# include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1: "; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */

    cout<<"Enter the value of num2: "; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */
    int c=num1+num2;
    cout<<"The sum is "<< c;

    return 0;
}

