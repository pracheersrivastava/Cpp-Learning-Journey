#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int i = 1;
    while(i<=a){
        sum = (sum+i);
    i++;
    }
    cout<<"Sum of numbers is: "<<sum<<endl;
 return 0;
}