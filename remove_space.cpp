
#include <iostream>
using namespace std;

string re_space(string str)
{
    string result="";

    for(char c:str)
    {
        if (c!=' ') {
           result += c;
        }
    }
    return result;

    
}


int main ()
{
    string str="parth Sharad  Bhagat" ;

    cout<<"string without space is : " <<re_space(str)<<endl;

    
}