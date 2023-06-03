
public class fibnocai {
    public static void fibnac(int n,int f,int term)
{
    if(term==0){
        return;
    }
    System.out.println(n);
    fibnac(f, n+f, term-1);
}   

public static void main(String args[]){

    fibnac(0, 1,5 );

    }
}
