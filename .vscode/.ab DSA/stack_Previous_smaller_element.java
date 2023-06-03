import java.net.SocketTimeoutException;
import java.util.Stack;

class stack_Previous_smaller_element{

    static void Prev_Smaller(int a[]){
        Stack<Integer> s=new Stack<>();
        

        for(int i=0;i<a.length;i++){

             while(!s.isEmpty() && s.peek()>=a[i]){
                s.pop();
            }

            if(s.isEmpty()){
                System.out.print(-1+" ");
            }
            else{
                System.out.print(s.peek()+" ");
            }
            
            s.push(a[i]);

        }

    }

    static void Prev_grrater(int a[]){
        Stack<Integer> st=new Stack<>();

        for(int i=0;i<a.length;i++){
            while(!st.isEmpty() && st.peek()<=a[i]){
                st.pop();
            }
            if(st.isEmpty()){
                System.out.print(-1+" ");
            }
            else{
                System.out.print(st.peek()+" ");
            }
            st.push(a[i]);
        }
    }


    public static void main(String args[]){

        int a[]={4,10,5,8,20,15,3,12};
       
        Prev_Smaller(a);

        Prev_grrater(a);
        
    }
    }