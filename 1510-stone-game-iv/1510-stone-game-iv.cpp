class Solution{
public:
     bool winnerSquareGame(int n){
          vector<bool> mat(n + 1);
          for (int i = 1; i <= n; i++)
               for (int j = 1; j * j <= i; j++)
                    if (!mat[i - j * j]){
                         mat[i] = true;
                         break;
                    }
          return mat[n];
     }
};