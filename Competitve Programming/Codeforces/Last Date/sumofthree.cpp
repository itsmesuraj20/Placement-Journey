// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // #define int long long int

// // // int32_t main()
// // // {
// // //     int t=1;
// // //     cin>>t;
// // //     while(t--)
// // //     {
// // //         int n;
// // //         cin>>n;
// // //         bool pos=false;

// // //         for (int  i = 2; i <= (int)1e3; i++)
// // //         {
// // //             if((n-1-i)%3 && i%3!=0 &&(n-1-i)!=1 && (n-i-1)!=i &&(n-1-i)>0)
// // //             {
// // //                 pos=true;
// // //                 cout<<"YES\n";
// // //                 cout<<1<<" "<<i<<" "<<(n-1-i)<<"\n";
// // //                 break;
// // //             }
// // //             if(!pos) 
// // //             {
// // //                 cout<<"NO\n";
// // //             }
// // //         }
        
// // //     }
// // // }


// // #include<bits/stdc++.h>
// // using namespace std;

// // #define int long long int

// // int32_t main()
// // {
// //     int t; cin >> t;
// //     while (t--)
// //     {
// //         int n; cin >> n;
// //         bool pos = false;
// //         for (int i = 2; i <=  (int)1e3; i++)
// //         {
// //             if ((n - 1 - i) % 3 && i % 3 != 0 && (n - 1 - i) != 1 && (n - i-1) != i && (n-1-i)>0)
// //             {
// //                 pos = true;
// //                 cout << "YES\n";
// //                 cout << 1 << " " << i << " " << (n - 1 - i) << "\n";
// //                 break;
// //             }
// //         }

// //         if (!pos) cout << "NO\n";
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// #define int long long int

// int32_t main()
// {
//   int t; cin >> t;
//   while (t--)
//   {
//     int n; cin >> n;

//     int i = 2;
//     do {
//       if ((n - 1 - i) % 3 && i % 3 != 0 && (n - 1 - i) != 1 && (n - i-1) != i && (n-1-i)>0) {
//         cout << "YES\n";
//         cout << 1 << " " << i << " " << (n - 1 - i) << "\n";
//         break;
//       }
//       i++;
//     } while (i <= (int)1e3);

//     if (i > (int)1e3) cout << "NO\n";
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
  int t=1;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    bool found = false;
    for (int i = 2; i <=(int)1e3; i++) {
      if ((n - 1 - i) % 3 && i % 3 != 0 && (n - 1 - i) != 1 &&
          (n - i - 1) != i && (n - 1 - i) > 0) {
        found = true;
        cout << "YES\n";
        cout << 1 << " " << i << " " << (n - 1 - i) << "\n";
        break;
      }
    }

    if (!found) {
      cout << "NO\n";
    }
  }

  return 0;
}
