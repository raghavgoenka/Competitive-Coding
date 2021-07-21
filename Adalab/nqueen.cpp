#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>board, int row, int col){
    int r = row-1;
    int c = col;
    while(r >= 0){
        if(board[r][c]){
            return false;
        }
        r--;
    }

    r = row;
    c = col-1;
    while(c >= 0){
        if(board[r][c]){
            return false;
        }
        c--;
    }
    
    r = row-1;
    c = col-1;
    while(r>=0 && c>=0){
        if(board[r][c]){
            return false;
        }
        r--; c--;
    }
    
    r = row-1;
    c = col+1;
    while(r>=0 && c<board[0].size()){
        if(board[r][c]){
            return false;
        }
        r--; c++;
    }
    
    return true;
}

void NQueen(vector<vector<int>>board, int row, int col, int q, int qpsf){
    
    if(qpsf == q){
        for(int i=0; i<q; i++){
            for(int j=0; j<q; j++){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    
    if(col == board[0].size()){
        row++;
        col = 0;
    }
    
    if(row == board.size()){
        return;
    }
    
    if(isSafe(board,row,col)){
        board[row][col] = 1;
        NQueen(board,row,col+1,q,qpsf+1);
        board[row][col] = 0;
    }
    
    NQueen(board,row,col+1,q,qpsf);
}

int main(){
    cout << "Enter the value of n: ";
    int n; cin>> n;
    vector<vector<int> > board(n, vector<int>(n,0)); 
    NQueen(board,0,0,n,0);
}