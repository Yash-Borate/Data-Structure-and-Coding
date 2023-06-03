import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class arrayList {
    public static void main(String args[]){
        
        ArrayList <Integer> yash=new ArrayList<Integer>();

        yash.add(1);
        yash.add(2);
        yash.add(8);
        yash.add(3);
        yash.add(6);
        yash.add(9);
        yash.add(4);

        int a=yash.size();
        yash.remove(3);

        for(int i=0;i<yash.size();i++){
            System.out.print(yash.get(i)+" ");
        }

        yash.set(3,5);

        Collections.sort(yash);

        for(int i=0;i<yash.size();i++){
            System.out.print(yash.get(i)+" ");
        }

    }
}
