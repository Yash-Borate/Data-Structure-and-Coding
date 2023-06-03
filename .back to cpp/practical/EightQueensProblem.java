public class EightQueensProblem {
    private static final int BOARD_SIZE = 8;
    private static final char QUEEN_SYMBOL = 'Q';
    private static final char EMPTY_SYMBOL = '-';
    public static void main(String[] args) {
        char[][] board = new char[BOARD_SIZE][BOARD_SIZE];
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                board[i][j] = EMPTY_SYMBOL;
            }
        }
        solve(board, 0);
    }
    
    private static boolean solve(char[][] board, int col) {
        if (col == BOARD_SIZE) {
            printBoard(board);
            return true;
        }
        boolean success = false;
        for (int row = 0; row < BOARD_SIZE; row++) {
            if (isSafe(board, row, col)) {
                board[row][col] = QUEEN_SYMBOL;
                success = solve(board, col+1);
                board[row][col] = EMPTY_SYMBOL;
            }
        }
        return success;
    }
    
    private static boolean isSafe(char[][] board, int row, int col) {
        // Check row and column
        for (int i = 0; i < BOARD_SIZE; i++) {
            if (board[row][i] == QUEEN_SYMBOL || board[i][col] == QUEEN_SYMBOL) {
                return false;
            }
        }
        // Check diagonals
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == QUEEN_SYMBOL) {
                return false;
            }
        }
        for (int i = row, j = col; i < BOARD_SIZE && j >= 0; i++, j--) {
            if (board[i][j] == QUEEN_SYMBOL) {
                return false;
            }
        }
        return true;
    }
    
    private static void printBoard(char[][] board) {
        System.out.println("Solution:");
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }
    }
}
