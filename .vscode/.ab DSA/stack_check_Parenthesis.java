import java.util.Stack;

public class stack_check_Parenthesis {

    public static boolean is_pali(String str){
        
        Stack<Character> s = new Stack<>();
        
        for(int i=0;i<str.length();i++){
            char curr=str.charAt(i);

            if(isOpening(curr)){
                s.push(curr);
            }
            else{
                if(s.isEmpty()){
                    return false;
                }
                else if(!isMatching(curr,s.peek())){
                    return false;
                }
                else{
                    s.pop();
                }
            }
           
        }
        return true;
    }

    public static boolean isOpening(char curr){
        return curr=='(' || curr=='{' || curr=='[';
    }

    public static boolean isMatching(char a , char b){
        return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
    }
    
    public static void main(String args[]){
        String s="[{()}]";

        System.out.println(is_pali(s));
    }
}
