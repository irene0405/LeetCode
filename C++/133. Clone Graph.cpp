/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node *cloneGraph(Node *node) {
        unordered_map < Node * , Node * > visited;
        queue < Node * > q;

        if (!node) return nullptr;

        visited[node] = new Node(node->val);
        q.push(node);

        while (!q.empty()) {
            Node *curr = q.front();
            q.pop();
            for (auto neighbor : curr->neighbors) {
                if (visited.find(neighbor) == visited.end()) {
                    visited[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }
                visited[curr]->neighbors.push_back(visited[neighbor]);
            }
        }
        return visited[node];
    }
};

// Runtime: 11 ms, faster than 63.12% of C++ online submissions for Clone Graph.
// Memory Usage: 8.4 MB, less than 93.49% of C++ online submissions for Clone Graph.

