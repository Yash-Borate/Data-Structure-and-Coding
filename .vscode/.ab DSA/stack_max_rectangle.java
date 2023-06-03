public class stack_max_rectangle {

    public static int MaxRectangle(int a[][]){
        
        int curr=a[0];
        int MaxAns=histrogram(curr);

        for(int i=0;i<a.length;i++){
            for(int j=0;i<a[0].length;i++){
                if(a[i][j]==1){
                    curr[j]+=1;
                }
                else curr[j]=0;
            }

            int maxCurr=histrogram(curr);
            MaxAns=Math.max(maxCurr,MaxAns);
        }
        return maxAns;

    }
    
}
