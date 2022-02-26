class Solution {
public:
    int shortestPathLength(vector<vector<int>>& adj) {
        int n = (int)(adj.size());
        const int inf = 1e9;
        vector<vector<int>> dp((1 << (n + 1)), vector<int>(n, inf));
        // dp[mask][i] shortest path spannning mask and ending at i
        int ans = inf;
        vector<vector<int>> dist(n, vector<int>(n, inf));
        for (int i = 0; i < n; ++i) dist[i][i] = 0;
        for (int i = 0; i < n; ++i) {
            for (int v : adj[i]) dist[i][v] = dist[v][i] = 1;
        }
		// floyd warshall to find distance between all pair of nodes
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        for (int i = 0; i < n; ++i) dp[1 << (i)][i] = 0;
        for (int mask = 0; mask < (1 << n); ++mask) {
            for (int i = 0; i < n; ++i) {
                //if(dp[mask][i]==inf) continue;
                if (mask & (1 << i)) {
                    for (int j = 0; j < n; ++j) {
                        if (i == j) continue;
                        dp[mask | (1 << j)][j] = min(dp[mask | (1 << j)][j], dp[mask][i] + dist[i][j]);
                    }
                }

            }
        }

        for (int i = 0; i < n; ++i) {
            ans = min(ans, dp[(1 << n) - 1][i]);
        }
        return ans;
    }
};