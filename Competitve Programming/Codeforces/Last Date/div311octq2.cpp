#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b, c;
        cin >> a >> b >> c;
        int minimumvalue=min({a,b,c});


        bool result=true;
        int count =0;
        if(a%minimumvalue!=0 || b%minimumvalue!=0 || c%minimumvalue!=0)
        result=false;
        while(a!=minimumvalue)
        {
            if(a%minimumvalue!=0||count>3)
            {
                result=false;
                break;

            }
            a-=minimumvalue;
            count++;
        }
        while(b!=minimumvalue)
        {
            if(b%minimumvalue!=0 ||count>3)
            {
                result=false;
                break;
            }
            b -=minimumvalue;
            count++;
        }

        while(c!=minimumvalue)
        {
            if(c%minimumvalue!=0 || count>3){
                result=false;
                break;
            }
            c -=minimumvalue;
            count++;

        }

        if(count>3) result=false;
        if(result) cout<<"YES\n";
        else cout<< "NO\n";

        }
    return 0;
}
