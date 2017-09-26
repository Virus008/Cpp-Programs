int main() {
    // your code goes here
    int n,cnt=0;
    cout<<"\nenter the number";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
     }
     if(cnt>0)
     {
         cout<<"Is not a prime number";
     }
     else
     {
         cout<<n<<" Is a prime number";
     }
    return 0;
}
