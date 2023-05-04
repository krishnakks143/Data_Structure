#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            cin >> arr[i][j];
        }
    }
    
    queue<pair<pair<int, int>, int> >q;
    bool vis[n][m];
    memset(vis, 0, sizeof(vis));
    int cnt = 0;
    for(int i = 0;i < n;++i){
        for(int j = 0;j < m;++j){
            if(arr[i][j] == 2){
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
            if(arr[i][j] == 1){
                cnt++;
            }
        }
    }
    
    int ans = 0;
    
    int rowArr[] = {-1, 1, 0, 0};
    int colArr[] = {0, 0, -1, 1};
    
    while(!q.empty()){
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        
        q.pop();
        ans = t > ans ? t : ans;
        
        for(int i = 0;i < 4;++i){
            if(r + rowArr[i] >= 0 && r + rowArr[i] < n
                && c + colArr[i] >= 0 && c + colArr[i] < m
                && vis[r + rowArr[i]][c + colArr[i]] == 0
                && arr[r + rowArr[i]][c + colArr[i]] == 1
            ){
                q.push({{r + rowArr[i], c + colArr[i]}, t + 1});
                vis[r + rowArr[i]][c + colArr[i]] = 1;
                cnt--;
            }
        }
        
        
    }
    
    if(cnt != 0){
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}