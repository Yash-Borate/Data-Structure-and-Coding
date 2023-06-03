public class power_set_Str {

    public static void main(String args[]){
        Powdr_set("abc", 0, "");
    }
    static void Powdr_set(String a,int i,String curr){
        if(i==a.length()){
            System.out.println(curr);
            return;
        }
        Powdr_set(a, i+1, curr+a.charAt(i));
        Powdr_set(a, i+1, curr);
    }
}
