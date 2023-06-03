import java.util.Stack;

public class stack_next_smaller_element {
    
    public static void Next_Smaller(int a[]){
        Stack<Integer> s=new Stack<>();
        int b[]=new int [a.length];

        for(int i=a.length-1;i>=0;i--){

            while(!s.isEmpty()&& s.peek()>=a[i]){
                s.pop();
            }

            if(s.isEmpty()){
                b[i]=-1;
            }
            else{
                b[i]=s.peek();
            }
            s.push(a[i]);
        }

        for(int i=0;i<a.length;i++){
            System.out.print(b[i]+" ");
        }
    }

    public static void Next_greater(int a[]){

        Stack<Integer> s=new Stack<>();
        int b[]=new int[a.length];

        for(int i=a.length-1;i>=0;i--){
            while(!s.isEmpty() && s.peek()<=a[i]){
                s.pop();
            }
            if(s.isEmpty()){
                b[i]=-1;
            }
            else{
                b[i]=s.peek();
            }
            s.push(a[i]);
        }

        for(int i=0;i<a.length;i++){
            System.out.print(b[i]+" ");
        }
    }

    public static void main(String args[]){
        int a[]={3,10,5,1,15,10,7,6};

        Next_Smaller(a);
        System.out.println();
        Next_greater(a);
    }
}
