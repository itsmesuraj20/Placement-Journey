#include<bits/stdc++.h>
using namespace std;

//Naive Approach
// bool isPal(string &str){ // &operand used to get direct value coz we are not change 
//     string rev = str;
//     reverse(rev.begin(),rev.end());
//     return (rev == str);
// }


//Efficient Solution using Two Pointer Approach
bool isPalindrome(string str)
{
    int begin = 0;
    int end = str.length() - 1;
    while(begin < end)
    {
        if(str[begin] != str[end])
        {return false;}

        begin++;
        end--;
    }
    return true;
}


int main()
{
    string str;
    getline(cin,str);
    // if(isPal(str))
    // {
    //     cout<<"Yes , it is a Palindrome"<<endl;
    // }
    // else
    // {
    //     cout<<"No,it is not Palindrome"<<endl;
    // }


    if(isPalindrome(str) == true)
    {
        cout<<"Yes , it is a Palindrome using Efficient Solution"<<endl;
    }
    else
    {
        cout<<"No,it is not Palindrome using Efficient Solution"<<endl;
    }

    return 0;
}
