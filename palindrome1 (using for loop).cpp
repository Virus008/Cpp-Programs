#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char string[100];
    int i,length;
    int flag = 0;
    
    cout<<" Enter the string:";
    cin>>string;
    
    length = strlen(string);
    cout<<"\n Length is:"<<length;
    
    cout<<"\n string[i]:"<<string[i];
    cout<<"\n string[length-i-1]:"<<string[length-i-1];
    
    for(i=0;i<length;i++)
    {
        if(string[i] != string[length-i-1])
        {
            flag = 1;
        }
    }
    
    if(flag)
    {
        cout<<"\n String is NOT palindrome";
    }
    else
    {
        cout<<"\n String is palindrome";
    }
}
