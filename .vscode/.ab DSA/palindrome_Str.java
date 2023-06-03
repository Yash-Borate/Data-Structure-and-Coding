

public class palindrome_Str {
    public static void  main(String args[]){

       if(isPali("raccar", 0, 5)){
        System.out.println("yes");
       }
       else{
        System.out.println("no");
       }
    }
    // static boolean isPali(String s,int l,int r){

    //     if(l>=r){
    //         return true;
    //     }
    //     if(s.charAt(l) != s.charAt(r)){
    //         return false;
    //     }
    //     return isPali(s,l+1,r-1);
    // }

    static boolean isPali(String s,int l,int r){
        if(l>=r){
            return true;
        }
        if(s.charAt(l)!=s.charAt(r)){
            return false;
        }
        return isPali(s,l+1,r-1);
    }
}
