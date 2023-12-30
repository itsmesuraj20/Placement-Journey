#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i = 2)
{
    // Base conditions
    if (n <= 2) 
    return (n == 2) ? true : false; 
    if (n % i == 0) return false; 
    if (i * i > n)
    {
        return true;
       }
    return isPrime(n, i + 1);
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"It is a prime no."<<endl;
    }
    else{
        cout<<"It is a not a prime no."<<endl;
    }
}
