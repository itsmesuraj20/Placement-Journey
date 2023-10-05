#include<bits/stdc++.h>
using namespace std;
#define forna for(int i=0;i<n;i++)

//Time Complexity of this = O(n);


int search(int*,int , int);

int main()
{
    int n,x;//x is the numb to be search , n is the length of the array
    cin>>n>>x;
    int arr[n];
    forna{
        cin>>arr[i];
    }
    
    int result = search(arr,n,x);
    cout<<"Found at= "<< result<<endl;

}


search(int *arr,int n,int x)
{
    forna{
        if(arr[i]==x)
        return i;
    }

    return -1;
}