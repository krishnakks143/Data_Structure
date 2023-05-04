#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();                  
        int n = grid[0].size();               
        int result = 0;
        
        for(int i=0;i<m;i++)
        {
            sort(grid[i].begin(),grid[i].end());          
        }
        
        for(int i=0;i<n;i++)
        {
            int maxValue = 0;
            for(int j=0;j<m;j++)
            {
                maxValue = max(maxValue,grid[j][i]);                                    
            }
             
            result += maxValue;                                
        }
        return result;  
    }

int main() {
    vector<vector<int>> grid = {{1,2,4},{3,3,1}};
    int result = deleteGreatestValue(grid);
    cout << result << endl; // Output: 8
    return 0;
}
