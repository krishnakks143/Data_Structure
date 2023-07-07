#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum = 0;
    int n = mat.size();
    
    for(int i = 0; i < n; i++) {
        sum += mat[i][i];  // add elements on the main diagonal
        sum += mat[i][n - i - 1];  // add elements on the secondary diagonal
    }
    
    // If the matrix size is odd, the element mat[n/2][n/2] will be counted twice,
    // so we need to subtract one of its occurrences
    if(n % 2 != 0) {
        sum -= mat[n/2][n/2];
    }
    
    return sum;
}

int main() {
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << diagonalSum(mat) << endl;  // prints 25
    return 0;
}
