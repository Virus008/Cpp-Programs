
#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    static int 1stno = 0, 2ndno = 1, result;
    if(n>0)
    {
        result = 1stno + 2ndno;
        1stno = 2ndno;
        2ndno = result;
        
        cout<<result<<"";
        
        printFibonacci(n-1);
    }
}

int main() 
{
    int number;
    cout<<"\nEnter the number of elements:";
    cin>>number;
    
    cout<<"\nFibonacci series:";
    cout<<"0"<<"1";
    
    printFibonacci(n-2);
    return 0;
}  