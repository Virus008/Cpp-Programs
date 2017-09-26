#include <iostream>
using namespace std;

int main()
{
   int i,j=2, ch=0;
   cout<<"Enter no:";
   cin>>i;
   
   while(j<=i/2)
   {
       if(i%j == 0)
       {
           cout<<i<<"is not prime";
           ch = 1;
           break;
       }
       else
       {
           j++;
       }
   }
   
   if(ch==0)
   {
       cout<<i<<" is prime no";
   }
}



