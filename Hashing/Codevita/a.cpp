// // #include <bits/stdc++.h>
// // using namespace std;


// // int findMinSwap(vector<int> &arr, int n)
// // {
    
// //     vector<pair<int, int>> temp(n);
// //     for (int i = 0; i < n; i++)
// //     {
        
// //         temp[i].first = arr[i];
        
// //         temp[i].second = i;
// //     }


    
// //     sort(temp.begin(), temp.end());
    
// //     int minimum_swaps = 0;
// //     int i = 0;
// //     while (i < n)
// //     {
       
// //         if (temp[i].second == i or temp[i].first == arr[i])
// //         {
// //             ++i;
// //             continue;
// //         }
// //         else
// //         {
          
// //             swap(temp[i].first, temp[temp[i].second].first);
            
// //             swap(temp[i].second, temp[temp[i].second].second);
           
// //             if (temp[i].second != i)
// //                 i--;
// //         }
      
// //         minimum_swaps++;
       
// //         ++i;
// //     }
// //     return minimum_swaps;
// // }




// // C++ program to find 
// // minimum number of swaps 
// // required to sort an array 
// #include <bits/stdc++.h> 
// using namespace std; 

// void swap(vector<int>& arr, int i, int j) 
// { 
// 	int temp = arr[i]; 
// 	arr[i] = arr[j]; 
// 	arr[j] = temp; 
// } 
// // Return the minimum number 
// // of swaps required to sort 
// // the array 
// int minSwaps(vector<int> arr, int N) 
// { 
// 	int ans = 0; 
// 	vector<int> temp = arr; 

// 	// Hashmap which stores the 
// 	// indexes of the input array 
// 	map<int, int> h; 

// 	sort(temp.begin(), temp.end()); 
// 	for (int i = 0; i < N; i++) { 
// 		h[arr[i]] = i; 
// 	} 
// 	for (int i = 0; i < N; i++) { 
// 		// This is checking whether 
// 		// the current element is 
// 		// at the right place or not 
// 		if (arr[i] != temp[i]) { 
// 			ans++; 
// 			int init = arr[i]; 

// 			// If not, swap this element 
// 			// with the index of the 
// 			// element which should come here 
// 			swap(arr, i, h[temp[i]]); 

// 			// Update the indexes in 
// 			// the hashmap accordingly 
// 			h[init] = h[temp[i]]; 
// 			h[temp[i]] = i; 
// 		} 
// 	} 
// 	return ans; 
// } 


// int main() 
// { 
// 	vector<int> a 
// 		= { 4 , 5 , 3 ,2 ,1 };
// 	int n = a.size(); 
	
// 	cout << minSwaps(a, n); 
// } 

// // This code is contributed by Stream_Cipher
