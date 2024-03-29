//https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution 
{
    public:
    bool isValid(int board[N][N],int r,int col,int c)
    {
        
        for(int i=0;i<9;i++)
        {
            if(board[r][i]==c){return false;}
            
            if(board[i][col]==c){return false;}
            
            if(board[3*(r/3)+i/3][3*(col/3)+i%3]==c){return false;}
        }
        return true;
        
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int board[N][N])  
    { 
         for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]==0)
                {
                    for(char c=1;c<=9;c++)
                    {
                        if(isValid(board,i,j,c))
                        {
                            board[i][j]=c;
                            
                            if(SolveSudoku(board)==true){return true;}
                            else{board[i][j]=0;}
                        }
                    }
                     return false;
                }
                
            }
           
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<grid[i][j]<<" ";
            }
            // cout<<endl;
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends