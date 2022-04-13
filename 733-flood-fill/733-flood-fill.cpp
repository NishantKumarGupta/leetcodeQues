class Solution {
public: //isko karenge hum BFS se
    
    bool valid(vector<vector<int>>& image, int i, int j,int oldColor, int newColor){
        if(i<0 || i>=image.size() || j<0 || j>= image[0].size() || image[i][j] == newColor || image[i][j] != oldColor)
            return false;
        return true;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int oldColor = image[sr][sc];
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            image[x][y]=newColor;
            if(valid(image,x-1,y,oldColor,newColor))
                q.push({x-1,y});
            if(valid(image,x+1,y,oldColor,newColor))
                q.push({x+1,y});
            if(valid(image,x,y-1,oldColor,newColor))
                q.push({x,y-1});
            if(valid(image,x,y+1,oldColor,newColor))
                q.push({x,y+1});
        }
        return image;
    }
};