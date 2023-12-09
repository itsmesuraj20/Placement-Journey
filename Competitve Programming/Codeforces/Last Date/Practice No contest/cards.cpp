#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++) {
        cin >> ch[i];
    }

    for (int i = 0; i < n; i++) {
        cout << ch[i]<<" ";
    }

    cout<<endl;
        sort(ch,ch+n);
for (int i = 0; i < n; i++) {
        cout << ch[i]<<" ";
        
    }
    
}
