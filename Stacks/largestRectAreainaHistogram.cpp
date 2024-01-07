//Largest Rectangular in a Histogram 
//Topic : Stacks


#include<bits/stdc++.h>
using namespace std;

int getMaxArea(int arr[], int n);

int main(){
    int size;
    cin>>size;
    vector<int> arr(size);
    
    cout<<getMaxArea(arr.data(),size);
    return 0;
}

int getMaxArea(int arr[],int n){
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for(int j = i-1;j>=0; j++){
            if(arr[j] >=arr[i])
            curr += arr[i];
            
            else{
                break;
            }

            for(int  j =)
        }
    }
    
}