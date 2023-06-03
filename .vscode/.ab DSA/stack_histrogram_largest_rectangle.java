import java.util.Stack;

public class stack_histrogram_largest_rectangle{
    
    public static int MaxArea(int a[]){
        int ps[];
        int ns[];

        ps=prevSmaller(a);
        ns=nextSmaller(a);

        int maxAns=0;

        for(int i=0;i<a.length;i++){
            int curr=(ns[i]-ps[i]-1)*a[i];
            maxAns=Math.max(maxAns, curr);
        }
        return maxAns;
    }
    
    public static void prevSmaller(int a[]){
        int ps[]=new int [a.length];
        Stack<Integer> s=new Stack<>();
        for(int i=0;i<a.length;i++){
            while(!s.isEmpty() && s.peek()>=a[i]){
                s.pop();
            }
            if(s.isEmpty()){
                ps[i]=-1;
            }
            else{
                ps[i]=s.peek();
            }
            s.push(a[i]);
        }
    }

    public static void nextSmaller(int a[]){
        int ns[]=new int [a.length];
        Stack<Integer> s=new Stack<>();
    
        for(int i=a.length-1;i>=0;i--){
            while(!s.isEmpty() && s.peek()>=a[i]){
                s.pop();
            }
            if(s.isEmpty()){
                ns[i]=a.length+1;
            }
            else{
                ns[i]=s.peek();
            }

            s.push(a[i]);
        }
    }
    public static void main(String args[]){

        int a[]={4,2,1,5,6,3,2,4,2};

        System.out.println(MaxArea(a));
    }
}