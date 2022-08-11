struct edge {
    int p1;
    int p2;
    int cost;
    edge(int p1, int p2, int cost) : p1(p1), p2(p2), cost(cost) {}
};

class cmp {
public:
    bool operator() (edge& e1, edge& e2) {
        return e1.cost > e2.cost;
    }
};

class unionFind {
public:
    unionFind(int n) {
        root.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; ++i) {
            root[i] = i;
        }
        groups = n;
    }

    int find(int x) {
        if (x == root[x]) {
            return x;
        }
        return x = find(root[x]);
    }

    void unify(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                root[rootX] = rootY;
            } else if (rank[rootY] < rank[rootX]) {
                root[rootY] = rootX;
            } else {
                root[rootY] = rootX;
                ++rank[rootX];
            }
            --groups;
        }
    }
private:
    vector<int> root;
    vector<int> rank;
    int groups;
};

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<edge, vector<edge>, cmp> heap;
        for (int i = 0; i < points.size(); ++i) {
            for (int j = i + 1; j < points.size(); ++j) {
                int cost = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                
                // Use minimum heap to sort all the edges by cost.
                // In this coding question, the cost is the manhattan distance.
                heap.push(edge(i, j, cost));
            }
        }

        unionFind uf(points.size());
        int maxNumEdges = points.size() - 1, answer = 0;
        while (maxNumEdges > 0 && !heap.empty()) {
            edge e = heap.top();
            heap.pop();

            if (uf.find(e.p1) != uf.find(e.p2)) {
                // In disjoint set, p1 and p2 are not in the same set,
                // so adding the edge (p1, p2) into our spanning tree 
                // won't create a cycle.
                uf.unify(e.p1, e.p2);
                --maxNumEdges;
                answer += e.cost;
            }
        }

        if (maxNumEdges != 0) {
            // Because we want to construct a tree to connect n pionts (n = points.size()),
            // we need to find n - 1 edges from the original graph.
            // If we cannot find n - 1 edges, we don't have spanning tree for the original graph.
            return -1;
        }
        return answer;
    }

};