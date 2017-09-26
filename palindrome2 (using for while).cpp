#include <iostream>
using namespace std;

int main()
{
    int a,n,l,m=0;
    cout<<"Enter the number:";
    cin>>n;
    a=n;
    
    while(n>0)
    {
        l=n%10;
        m=m*10+l;
        n=n/10;
    }
    
    if(a==m)
    {
        cout<<"Number IS Palindrome";
    }
    else
    {
        cout<<"Number is NOT Palindrome";
    }
}
