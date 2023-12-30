// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr{}={1,2,3,1,1,5,1,5,9,8,7};
//     map<int,int> mp;

//     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
//     {
//         mp[arr[i]]++;
//     }

//     for(auto i: mp[arr]){
//         cout<<mp[i];
//     }
//     return 0;
// }


#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 5, 1, 5, 9, 8, 7};
    unordered_map<int, int> mp;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        mp[arr[i]]++;
    }

    for (auto i : mp) // Iterate through elements of the map
    {
        cout << i.first << "  "<< i.second << endl;
    }
    
    return 0;
}
