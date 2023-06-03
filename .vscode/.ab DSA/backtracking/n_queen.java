

// public class n_queen{
//     final static int n=4;


//     public static void printsolution(int board[][]){
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 System.out.print(" "+board[i][j]+" ");

//             }
//             System.out.println();
//         }
//     }
//     public static boolean isSafe(int board[][],int row,int col){
//         for(int i=0;i<col;i++){
//             if(board[row][i]==1){
//                 return false;
//             }
//         }

       

//         for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//             if(board[i][j]==1){
//                 return false;
//             }
//         }

       
      
//         for(int i=row,j=col;i<n && j<n;i++,j++){
//             if(board[i][j]==1){
//                 return false;
//             }
//         }
//         return true;
//     }

//     public static boolean solvequeen(int board[][],int col){
//         if(col>=n){
//             return true;
//         }
//         for(int i=0;i<n;i++){
//             if(isSafe(board,i,col)){
//                 board[i][col]=1;

//                 if(solvequeen(board, col+1))
//                 return true;

//                 board[i][col]=0;
//             }
//         }
//         return false;
//     }

//     public static void main(String args[]){
//         int board[][]={
//             {0,0,0,0},
//             {0,0,0,0},
//             {0,0,0,0},
//             {0,0,0,0}
//         };
//         if(!solvequeen(board,0)){
//             System.out.println("solution does not exist");
//             return;
//         }
//         printsolution(board);
//     }
// }



class Solution {
    public boolean isSafe(int row, int col, char[][] board) {
        //horizontal
        for(int j=0; j<board.length; j++) {
            if(board[row][j] == 'Q') {
                return false;
            }
        }
       
        //vertical
        for(int i=0; i<board.length; i++) {
            if(board[i][col] == 'Q') {
                return false;
            }
        }
       
        //upper left
        int r = row;
        for(int c=col; c>=0 && r>=0; c--, r--) {
            if(board[r][c] == 'Q') {
                return false;
            }
        }
       
        //upper right
        r = row;
        for(int c=col; c<board.length && r>=0; r--, c++) {
            if(board[r][c] == 'Q') {
                return false;
            }
        }
       
        //lower left
        r = row;
        for(int c=col; c>=0 && r<board.length; r++, c--) {
            if(board[r][c] == 'Q') {
                return false;
            }
        }
       
        //lower right
        for(int c=col; c<board.length && r<board.length; c++, r++) {
            if(board[r][c] == 'Q') {
                return false;
            }
        }
       
        return true;
    }
   
    public void saveBoard(char[][] board, List<List<String>> allBoards) {
        String row = "";
        List<String> newBoard = new ArrayList<>();
       
        for(int i=0; i<board.length; i++) {
            row = "";
            for(int j=0; j<board[0].length; j++) {
                if(board[i][j] == 'Q')
                    row += 'Q';
                else
                    row += '.';
            }
            newBoard.add(row);
        }
       
        allBoards.add(newBoard);
    }
   
    public void helper(char[][] board, List<List<String>> allBoards, int col) {
        if(col == board.length) {
            saveBoard(board, allBoards);
            return;
        }
       
        for(int row=0; row<board.length; row++) {
            if(isSafe(row, col, board)) {
                board[row][col] = 'Q';
                helper(board, allBoards, col+1);
                board[row][col] = '.';
            }
        }
    }
   
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> allBoards = new ArrayList<>();
        char[][] board = new char[n][n];
       
        helper(board, allBoards, 0);
        return allBoards;
    }
 }
 