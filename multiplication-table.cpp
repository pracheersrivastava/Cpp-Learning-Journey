#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for (int i = 1; i<=10; i++){
    cout<<"The Table of "<<a<<"x"<<i<<"="<<(i*a)<<endl;
    }
 return 0;
}