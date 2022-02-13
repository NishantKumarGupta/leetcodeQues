const int inf = 1e5+5;

class Solution {
    
    bool diff(string& s, string& t) {
        int differ = 0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] != t[i])
                differ++;
        }
        
        return (differ == 1);
    }
    
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        //create graph then apply BFS.
        wordList.push_back(beginWord);
        int n = wordList.size();
        vector<vector<int>> g(n);
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(diff(wordList[i], wordList[j]) == 1) {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        
        int ans = 0;
        queue<int> q;
        vector<bool> visited(n, false);
        vector<int> dist(n, inf);
        visited[n-1] = true;
        dist[n-1] = 0;
        q.push(n-1);
        while(!q.empty()) {
            int node = q.front(); q.pop();
            for(auto it: g[node]) {
                if (visited[it] == false) {
                    visited[it] = true;
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
        
        int wordPos = -1;
        for(int i = 0; i < n; i++) {
            if (wordList[i] == endWord) {
                wordPos = i;
                break;
            }
        }
        if(wordPos == -1 or dist[wordPos] == inf)
            return 0;
        
        return dist[wordPos] + 1;
    }
};