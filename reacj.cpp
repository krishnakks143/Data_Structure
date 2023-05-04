#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

// Function to check if the message can reach the recipient
int isReachable(int n, unordered_map<int, vector<int>>& graph, int sender, int recipient) {
    // Create a visited array to keep track of visited nodes
    bool visited[n+1] = {false};

    // Create a queue to perform BFS
    queue<int> q;

    // Add the sender to the queue and mark it as visited
    q.push(sender);
    visited[sender] = true;

    // Perform BFS
    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        // Check if the current node is the recipient
        if (curr == recipient) {
            return 1;
        }

        // Traverse the neighbors of the current node
        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    // If the recipient is not reached, return 0
    return 0;
}

int main() {
    // Read input
    int n;
    cin >> n;

    // Create a map to store the graph
    unordered_map<int, vector<int>> graph;

    // Read the members of the social network
    for (int i = 1; i <= n; i++) {
        int memberId;
        cin >> memberId;
    }

    // Read the number of direct connections
    int m;
    cin >> m;

    // Read the connections and build the graph
    for (int i = 0; i < m; i++) {
        int follower, following;
        cin >> follower >> following;
        graph[follower].push_back(following);
        graph[following].push_back(follower);
    }

    // Read the sender and the recipient
    int sender, recipient;
    cin >> sender >> recipient;

    // Check if the message can reach the recipient
    int reachable = isReachable(n, graph, sender, recipient);

    // Print the result
    cout << reachable << endl;

    return 0;
}