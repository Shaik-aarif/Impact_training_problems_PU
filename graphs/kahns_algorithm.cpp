// kahns algorithm -->  topological sort using bfs

class Solution
{

public:
    vector<int> topoSort(int V, vector<int> adj[])
    {
        // kahns algorithm
        int indegree[V] = {0};

        for (int i = 0; i < V; i++)
        {
            for (auto x : adj[i])
            {
                indegree[x]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> ans;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (auto x : adj[node])
            {
                indegree[x]--;
                if (indegree[x] == 0)
                {
                    q.push(x);
                }
            }
        }
        return ans;
    }
    ]