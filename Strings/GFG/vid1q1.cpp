//Print the frequencies of a string in a lexicography 



//Naive Solution

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str = "geeksforgeeks";
    int n = str.size();

    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i] -'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            cout<<(char)(i+'a') << " "<<count[i]<<endl;
        }
    }
    return 0;
}




//Efficient Solution using HashMap
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     string str = "geeksforgeeks";
//     int n = str.size();
//     map<char,int> mp;
//     for(char i : str)
//     {
//         mp[i]++;
//     }

//     for(auto i : mp)
//     {
//         cout<<i.first << " = " << i.second <<endl;
//     }

//     return 0;


// }