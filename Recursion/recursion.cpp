//Sum of The n number Decode C++;
#include<bits/stdc++.h>
using namespace std;

int pow(int,int);

int main()
{
    cout<<pow(11,2);
    return 0;
}

// void print(int n)
// {
//     if(n==0) return;

//     cout<<n<<endl;
//     print(n-1);
// }

int pow(int a,int b)
{
    if(b==0) return 1;

    return a*pow(a,b-1);
}


