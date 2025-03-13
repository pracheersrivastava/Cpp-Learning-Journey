#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int i=1;
    do{
        cout<<"Count: "<<i<<endl;
        i++;
    } while(i<=a);
 return 0;
}