#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin >> n >> e;
    vector<int>g[n+1];
    for(int i = 0;i < e;++i){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    cout << "adj list" << endl;
    for(int i = 0;i < n + 1;++i){
        cout << i << " -> ";
        for(int j = 0;j < g[i].size(); ++j){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    
    queue<int>q;
    stack<int>st;
    bool vis1[n + 1] = {0};
    bool vis2[n + 1] = {0};
    
    q.push(1);
    vis1[1] = 1;
    cout << "BFS" << endl;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        
        cout << temp << " ";
        
        for(int i = 0;i < g[temp].size();++i){
            if(!vis1[g[temp][i]]){
                q.push(g[temp][i]);
                vis1[g[temp][i]] = 1;
            }
        }
    }
    cout << endl;
    
    cout << "DFS" << endl;
    st.push(1);
    vis2[1] = 1;
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        
        cout << temp << " ";
        
        for(int i = 0;i < g[temp].size();++i){
            if(!vis2[g[temp][i]]){
                st.push(g[temp][i]);
                vis2[g[temp][i]] = 1;
            }
        }
    }
    
    return 0;
}
