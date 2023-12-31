//Check the string str1 is present in the other or not

#include<bits/stdc++.h>
using namespace std;

bool isSub(string &s1, string &s2 , int n , int m){
        int j = 0;
        for(int i = 0;i<n && j < m ;i++)
        {
            if(s1[i] == s2[j]){
                j++;
            }
        }
        return (j == m);
}

bool isSubs(string &s1, string &s2 , int n , int m){
    if(m == 0) return true;

    if(n == 0) return false;

    if(s1[n-1] == s2[m-1])
    return isSubs(s1,s2,n-1,m-1);
    else
    return isSubs(s1,s2,n-1,m);
}


int main(){
    string str1 ,str2;
    getline(cin,str1);
    getline(cin,str2);
    int l1 = str1.length();
    int l2 = str2.length();
    
    if(isSub(str1,str2,l1,l2))
    {
        cout<<"Present"<<endl;
        }
    else
    {
        cout<<"Not Present"<<endl;
    }
    
    if(isSubs(str1,str2,l1,l2))
    {
        cout<<"Present using Recursive"<<endl;
        }
    else
    {
        cout<<"Not Present using Recursive"<<endl;
    }
    

return 0;
}    
