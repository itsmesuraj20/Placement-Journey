#include <iostream>
#include <vector>

using namespace std;

int calculateVisibilityScore(vector<vector<int>>& A, vector<int>& B) {
    int m = A.size();
    int n = A[0].size();
    int score = 0;

    // Iterate through each building in the city
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int height = A[i][j];
            int tallestBuilding = 0;

            // Check buildings in all four directions (up, down, left, right)
            for (int x = i - 1; x >= 0; x--) {
                tallestBuilding = max(tallestBuilding, A[x][j]);
            }
            for (int x = i + 1; x < m; x++) {
                tallestBuilding = max(tallestBuilding, A[x][j]);
            }
            for (int y = j - 1; y >= 0; y--) {
                tallestBuilding = max(tallestBuilding, A[i][y]);
            }
            for (int y = j + 1; y < n; y++) {
                tallestBuilding = max(tallestBuilding, A[i][y]);
            }

            // Calculate visibility score for the current building
            int visibilityScore = height - tallestBuilding;
            
            // Add visibility score to the result
            score += visibilityScore;
        }
    }

    return score;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m) and columns (n) of the city: ";
    cin >> m >> n;

    vector<vector<int>> A(m, vector<int>(n));
    cout << "Enter the heights of buildings in the city (0 for empty spaces):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    vector<int> B(m * n);
    cout << "Enter the heights of buildings to be constructed:\n";
    for (int i = 0; i < m * n; i++) {
        cin >> B[i];
    }

    int visibilityScore = calculateVisibilityScore(A, B);
    cout << "Total visibility score: " << visibilityScore << endl;

    return 0;
}