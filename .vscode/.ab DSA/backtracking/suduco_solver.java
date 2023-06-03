public class suduco_solver {

    // public static boolean isSafe(char board[][],int row ,int col,int num){
    //     for(int i=0;i<board.length;i++){
    //         if(board[i][col]==(char)(num+'0')){
    //             return false;
    //         }
    //         if(board[row][i]==(char)(num+'0')){
    //             return false;
    //         }
    //     }

    //     int sr=row/3*3;
    //     int sc=col/3*3;

    //     for(int i=sr;i<sr+3;i++){
    //         for(int j=sc;j<sc+3;j++){
    //             if(board[i][j]!=(char)(num+'0')){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }

    // public static boolean helper(char board[][],int row,int col){
    //     if(row==board.length){
    //         return true;
    //     }

    //     int nrow=0;
    //     int ncol=0;

    //     if(col==board.length-1){
    //         nrow=row+1;
    //         ncol=0;
    //     }
    //     if(row==board.length-1){
    //         ncol=col+1;
    //         row=0;
    //     }

    //     if(board[row][col]!='.'){
    //         if(helper(board,nrow,ncol)){
    //             return true;
    //         }
    //     }
    //     else{
    //         for(int i=1;i<=9;i++){
    //             if(isSafe(board,row,col,i)){
    //                 board[row][col]=(char)(i+'0');
    //                 if(helper(board,row,col)){
    //                     return true;
    //                 }
    //                 else
    //                 board[row][col]='.';
                    
    //             }
                
    //         }
    //     }
    //     return false;
    // }


    // public static void sudocoSolver(char board[][]){
    //     helper(board,0,0);
    // }

    public static void printBoard(char board[][]){
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;i++){
                System.out.print(" "+board[i][j]+" ");
            }
            System.out.println();
        }
    }

    // public static void main(String arg[]){
    //     char board[][]={ {'3', '0','6', '5', '0', '8', '4', '0', '0'}, 
    //     {'5', '2', '0', '0', '0', '0', '0', '0', '0'}, 
    //     {'0', '8', '7', '0', '0', '0', '0', '3', '1'}, 
    //     {'0', '0', '3', '0', '1', '0', '0', '8', '0'}, 
    //     {'9', '0', '0', '8', '6', '3', '0', '0', '5'}, 
    //     {'0', '5', '0', '0', '9', '0', '6', '0', '0'}, 
    //     {'1', '3', '0', '0', '0', '0', '2', '5', '0'}, 
    //     {'0', '0', '0', '0', '0', '0', '0', '7', '4'}, 
    //     {'0', '0', '5', '2', '0', '6', '3', '0', '0'} };

    //     sudocoSolver(board);

    //     printBoard(board);

    // }

    
        public static boolean isSafe(char[][] board, int row, int col, int number) {
            //column
            for(int i=0; i<board.length; i++) {
                if(board[i][col] == (char)(number+'0')) {
                    return false;
                }
            }
           
            //row
            for(int j=0; j<board.length; j++) {
                if(board[row][j] == (char)(number+'0')) {
                    return false;
                }
            }
           
            //grid
            int sr = 3 * (row/3);
            int sc = 3 * (col/3);
           
            for(int i=sr; i<sr+3; i++) {
                for(int j=sc; j<sc+3; j++) {
                    if(board[i][j] == (char)(number+'0')) {
                        return false;
                    }
                }
            }
               
       return true;
    }
   
    public static boolean helper(char[][] board, int row, int col) {
        if(row == board.length) {
            return true;
        }
       
        int nrow = 0;
        int ncol = 0;
       
        if(col == board.length-1) {
            nrow = row + 1;
            ncol = 0;
        } else {
            nrow = row;
            ncol = col + 1;
        }
       
        if(board[row][col] != '.') {
            if(helper(board, nrow, ncol)) {
                return true;
            }
        } else {
           
            //fill the place
            for(int i=1; i<=9; i++) {
                if(isSafe(board, row, col, i)) {
                    board[row][col] = (char)(i+'0');
                    if(helper(board, nrow, ncol))
                        return true;
                    else
                         board[row][col] = '.';
                }
            }
        }
                      
        return false;
    }
   
    // public static void solveSudoku(char[][] board) {
    //     helper(board, 0, 0);
    // }
 
      public static void main(String arg[]){
        char board[][]={ 
        {'3', '0', '6', '5', '0', '8', '4', '0', '0'}, 
        {'5', '2', '0', '0', '0', '0', '0', '0', '0'}, 
        {'0', '8', '7', '0', '0', '0', '0', '3', '1'}, 
        {'0', '0', '3', '0', '1', '0', '0', '8', '0'}, 
        {'9', '0', '0', '8', '6', '3', '0', '0', '5'}, 
        {'0', '5', '0', '0', '9', '0', '6', '0', '0'}, 
        {'1', '3', '0', '0', '0', '0', '2', '5', '0'}, 
        {'0', '0', '0', '0', '0', '0', '0', '7', '4'}, 
        {'0', '0', '5', '2', '0', '6', '3', '0', '0'} };


        if(helper(board, 0, 0)){
            printBoard( board);
        }
        else{
            System.out.println("no solution found");
        }
       
    

    }
    

}
