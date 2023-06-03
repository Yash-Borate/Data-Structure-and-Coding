public class permutation_of_String {
    public static void main(String args[]){
        permute("abc", 0, 2);
    }
    static void permute(String s,int l,int r){
        if(l==r){
            System.out.println(s);
            return;
        }

        for(int i=l;i<=r;i++){
            swap(s,l,i);
            permute(s, l+1, r);
            swap(s,l,i);
        }
    }
}
