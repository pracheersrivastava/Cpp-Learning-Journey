#include<iostream>
using namespace std;
int main()
{
    int a;
    int rev=0;
    cout<<"Enter a number: ";
    cin>>a;
    int sign = (a < 0) ? -1 : 1;
    a = abs(a);


    while(a>0){
        int last = a%10;
        rev = rev*10+last;
        a = a/10;
    }
    cout<<"Reverse of num is "<<rev*sign<<endl;
 return 0;
}