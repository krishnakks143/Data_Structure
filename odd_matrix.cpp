#include <bits/stdc++.h>
using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    int matrix[m][n];
    memset(matrix, 0, sizeof(matrix)); //initialize matrix to all zeros
    
    //apply increments based on indices
    for(int i=0; i<indices.size(); i++){
        int row = indices[i][0];
        int col = indices[i][1];
        for(int j=0; j<m; j++){
            matrix[j][col]++; //increment entire column
        }
        for(int j=0; j<n; j++){
            matrix[row][j]++; //increment entire row
        }
    }
    
    //count odd numbers in the matrix
    int oddCount = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] % 2 != 0){
                oddCount++;
            }
        }
    }
    return oddCount;
}

//example usage
int main(){
    vector<vector<int>> indices = {{0,1},{1,1}};
    cout << oddCells(2,3,indices) << endl; //output: 6
    return 0;
}
