import java.util.*;
//Branch and bound
public class EightQueens {

    private static final int N = 8;
    private static int[] column = new int[N];
    private static boolean[] row = new boolean[N];
    private static boolean[] diagonal1 = new boolean[2 * N - 1];
    private static boolean[] diagonal2 = new boolean[2 * N - 1];

    public static void main(String[] args) {
        solve(0);
    }

    private static void solve(int i) {
        if (i == N) {
            printSolution();
            return;
        }

        for (int j = 0; j < N; j++) {
            if (!row[j] && !diagonal1[i + j] && !diagonal2[i - j + N - 1]) {
                column[i] = j;
                row[j] = diagonal1[i + j] = diagonal2[i - j + N - 1] = true;
                solve(i + 1);
                row[j] = diagonal1[i + j] = diagonal2[i - j + N - 1] = false;
            }
        }
    }

    private static void printSolution() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (column[i] == j) {
                    System.out.print("Q ");
                } else {
                    System.out.print(". ");
                }
            }
            System.out.println();
        }
        System.out.println();
    }
}
