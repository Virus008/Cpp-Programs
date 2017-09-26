#include <iostream>
using namespace std;

int main()
{
    int i,n,l,m=0;
    cout<<"Enter the number:";
    cin>>n;
    
    for(i=n;i>0;)
    {
        l=i%10;
        m=m*10+l;
        n=n/10;
    }
    
    if(n==m)
    {
        cout<<"Number IS Palindrome";
    }
    else
    {
        cout<<"Number is NOT Palindrome";
    }
}
