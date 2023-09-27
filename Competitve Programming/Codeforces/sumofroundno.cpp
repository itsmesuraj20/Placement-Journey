#include<iostream>
#include<vector> // You need to include the vector header to use vectors.
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v{1000, 100, 10, 1};
        vector<int> ans;
        int n;
        cin >> n;
        for (int i : v)
        {
            if (n >= i)
            {
                if (n > 0 && n <= i)
                {
                    ans.push_back(n);
                    break; // You should break the loop when you add an element to 'ans'.
                }
                else
                {
                    ans.push_back(n - (n % i));
                    n %= i;
                }
            }
        }
        cout << ans.size() << endl;
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
