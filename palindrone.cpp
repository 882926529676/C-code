

#include <iostream>

using namespace std ;

int main()
{
    int n,temp,sum; 
    cout<<"number is : ";
    cin>>n;
    temp=n;
    
    while (n>0) {
        
       int r=n%10;
       sum=(sum*10)+r;
       n=n/10;

    } 
     if(temp==sum)
     {
        cout<<"Number is Palindrome.";   
     }     
    else 
    {
        cout<<"Number is not Palindrome.";  
    }   
        
return 0 ;
        
}