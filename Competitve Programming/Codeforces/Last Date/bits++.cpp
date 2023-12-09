#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,x=0;
    string s;
    cin>>n;
   
    for(int i=1;i<=n;i++)
    {
         cin>>s;
        if(s=="X++" || s=="++X")
        {
            x++;
        }
         
        else if(s=="X--" || s=="--X")
        {
            x--;
        }
    }
    
    cout<<x<<endl;
    return 0;
}