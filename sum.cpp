
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"n : "<<endl;
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
         //cout<<"sum of number is  : "<<sum<<endl;
    }
    cout<<"sum of number is  : "<<sum<<endl;
    return 0;
    
}