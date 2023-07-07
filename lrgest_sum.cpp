int solution(vector<int> arr) {
    int n = arr.size();
    vector<int> sum;
    vector<bool> visited(n, false);

    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            int j = i;
            int cycle_sum = 0;
            while(true) {
                if(visited[j]) break;
                visited[j] = true;
                cycle_sum += j;
                j = arr[j];
                if(j == i) {
                    cycle_sum += j;
                    sum.push_back(cycle_sum);
                    break;
                }
            }
        }
    }

    if(sum.empty()) return -1;
    else return *max_element(sum.begin(), sum.end());
}
