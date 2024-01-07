#include<bits/stdc++.h>
using namespace std;

void prevGreater(int arr[] , int n){
    stack<int> s;
    
    s.push(arr[0]);
    cout<< -1 << " ";

    for(int i = 1;i<n;i++){
    
       while(s.empty() == false && s.top() <= arr[i]){
            s.pop();
        } 

       int pg = s.empty() ? -1 : s.top();
       cout<<pg<<" ";
       s.push(arr[i]);
    }
}

int main()
{
    int size;
    cin>>size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    prevGreater(arr.data(),size);
    return 0;
    
}