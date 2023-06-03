class fun{
    public void AndOPeration(String str){
    
    System.out.println("output of biwise And with 127 :");
    
    for(int i=0;i<str.length();i++){
      System.out.print((char)(str.charAt(i)&127));
    }
    
 }

 public void ExOrOPeration(String str){
    
    System.out.println("output of biwise Exor with 127 :");

    String res = "";
    
    for(int i=0;i<str.length();i++){
        res+=(char)(str.charAt(i)^127);
    }
    for(int i=0;i<res.length();i++){
        System.out.print((char)(res.charAt(i)^127));
    }
 }
}

public class And_Xor {
    public static void main(String args[]){
        String input = "hello world";
        fun AndOP = new fun();
        AndOP.AndOPeration(input);
        System.out.println();
        AndOP.ExOrOPeration(input);
    }
}
