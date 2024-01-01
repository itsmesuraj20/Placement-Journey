#include<bits/stdc++.h>
using namespace std;


int pow(int base, int power)
{
    if(power==0)
    return 1;

    else if(power==1)
    return base;

    else{
        return base* pow(base , power-1);
    }
}

int main()
{
    int base,power;
    cout<<"Enter the value of Base "<<endl;
    cin>>base;
    cout<<"Enter the value of Power "<<endl;
    cin >> power;

    cout<<pow(base,power);
}