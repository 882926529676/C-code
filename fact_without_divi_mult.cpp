



#include <iostream>
using namespace std;


void findfact(int a)
{
    int ans=a;
    for(int i=1;i>0;i--){
        int sum=0;
        for(int j=0;j<1;j++){
            sum=sum-ans;
        }
        ans=sum;
    }
    return ans;
}
int main() 
{
    int n;
    cout<<factorial is : <<findfact(n)<<endl
}