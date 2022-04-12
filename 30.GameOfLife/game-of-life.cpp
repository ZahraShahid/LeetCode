// Returns the number of live cells in the next generation.
// https://leetcode.com/problems/game-of-life/

class Solution
{
public:
    //     void gameOfLife(vector<vector<int>>& board) {
    //         int cols=board[0].size();
    //         int rows=board.size();
    //         for(int i=0;i<rows;i++){
    //             for(int j=0;j<cols;j++){
    //                 int c=0;

    //                 //Check Vertically
    //                 if(i>0)
    //                     if(board[i-1][j]>=1)
    //                         c++;
    //                 if(i<rows-1)
    //                     if(board[i+1][j]>=1)
    //                         c++;

    //                 //Check Horizontally
    //                 if(j>0)
    //                     if(board[i][j-1]>=1)
    //                         c++;
    //                 if(j<cols-1)
    //                     if(board[i][j+1]>=1)
    //                         c++;

    //                 //Check Diagonally
    //                 if(i>0 && j>0)
    //                     if(board[i-1][j-1]>=1)
    //                         c++;
    //                 if(i<cols-1 && j<rows-1)
    //                     if(board[i+1][j+1]>=1)
    //                         c++;
    //                 if(i<cols-1 && j>0)
    //                     if(board[i+1][j-1]>=1)
    //                         c++;
    //                 if(i>0 && j<rows-1)
    //                     if(board[i-1][j+1]>=1)
    //                         c++;

    //                 if(board[i][j]==1 && (c<2||c>3)) board[i][j]=2;
    //                 if(board[i][j]==0 && c==3) board[i][j]=-1;
    //             }
    //         }

    //         for(int i=0;i<rows;i++){
    //             for(int j=0;j<cols;j++){
    //                 if(board[i][j]==2) board[i][j]=0;
    //                 if(board[i][j]==-1) board[i][j]=1;
    //             }
    //         }
    //         return;

    //     }
    void gameOfLife(vector<vector<int>> &board)
    {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                int cnt = 0;

                if (i > 0 && board[i - 1][j] >= 1)
                    cnt++;
                if (i < n - 1 && board[i + 1][j] >= 1)
                    cnt++;
                if (j > 0 && board[i][j - 1] >= 1)
                    cnt++;
                if (j < m - 1 && board[i][j + 1] >= 1)
                    cnt++;

                if (i > 0 && j > 0 && board[i - 1][j - 1] >= 1)
                    cnt++;
                if (i > 0 && j < m - 1 && board[i - 1][j + 1] >= 1)
                    cnt++;
                if (i < n - 1 && j > 0 && board[i + 1][j - 1] >= 1)
                    cnt++;
                if (i < n - 1 && j < m - 1 && board[i + 1][j + 1] >= 1)
                    cnt++;

                if (board[i][j] == 1 && (cnt < 2 || cnt > 3))
                    board[i][j] = 2;

                if (board[i][j] == 0 && cnt == 3)
                    board[i][j] = -1;
            }
        }

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == 2)
                    board[i][j] = 0;
                if (board[i][j] == -1)
                    board[i][j] = 1;
            }
        }

        return;
    }
};