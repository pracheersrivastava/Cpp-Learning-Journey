#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int i = 1;
    while(i<=a){
        fact *= i;
        i++;
    }
    cout<<"Factorial of "<<a<<" is: "<<fact<<endl;
 return 0;
}