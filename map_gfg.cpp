#include <bits/stdc++.h>
using namespace std;


int main() {
  unordered_map<int, int> myMap;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        myMap[arr[i]]++;
    }
    vector<pair<int,int>>p;
    

    // Iterate over the elements of the map
    for (auto& pair : myMap) {
        int key = pair.first;
        int value = pair.second;
       p.push_back(make_pair(value,key));
       
    }
   sort(p.begin(),p.end());
   reverse(p.begin(),p.end());
    for(auto i:p){

        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
