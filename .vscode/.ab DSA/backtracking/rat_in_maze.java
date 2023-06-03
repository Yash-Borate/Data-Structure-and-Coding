public class rat_in_maze{
    final int n=4;
    public static boolean isSafe(int arr[][],int row,int col){
        for(int i=0;i<arr.length;i++){
            if(arr[i][col]=='1'){
                return false;
            }
            if(arr[row][i]=='1'){
                return false;
            }
        }
        return true;
    }

    public static boolean solution(int arr[][],int row,int col){
        
        if(col>=4 && row>=4){
            return true;
        }
        for(int i=0;i<4;i++){
            if(isSafe(arr,i,col) ){
                arr[i][col]='1';

                if(solution(arr,row,col+1))
                return true;

                arr[i][col]='0';
            }
            if(isSafe(arr,row,i) ){
                arr[row][i]='1';

                if(solution(arr,row+1,col))
                return true;

                arr[i][col]='0';
            }
            
        }
      
        return false;
    }

    public static void main(String args[]){

    }
}