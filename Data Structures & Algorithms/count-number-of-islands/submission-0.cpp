class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        int comp = 0;
        int dr[4] = {1,-1,0,0};
        int dc[4] = {0,0,1,-1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    comp++;
                    queue<pair<int, int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for(int dir = 0;  dir < 4; dir++){
                            int nx = x + dr[dir];
                            int  ny = y + dc[dir];
                            if(nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == '1'){
                                if(!vis[nx][ny]){
                                    q.push({nx, ny});
                                    vis[nx][ny] = 1;
                                }
                            }
                            
                        }
                    }
                }
            }
        }
        return comp;
    }
};
