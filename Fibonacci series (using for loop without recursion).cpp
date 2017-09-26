#include <iostream>
using namespace std;

int main() 
{
    int 1stno=0,2ndno=1,result,i,number;    
    cout<<"Enter the number of elements: ";    
    cin>>number;    
    cout<<1stno<<" "<<2ndno<<" "; //printing 0 and 1    
    for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
    {    
        result=1stno+2ndno;    
        cout<<result<<" ";    
        1stno=2ndno;    
        2nd=result;    
    }    
    return 0;  
}  