
class pen{

    String name ;
    String color;
    

    public void dispaly(){
        System.out.println(this.name + " "+ this.color);
    }
}

public class OPPS {
    public static void main(String args[]){
        pen pen1=new pen();

        pen1.color="blue";
        pen1.name="yash";

        pen1.dispaly();

        pen pen2=new pen();


        pen2.color="red";
        pen2.name="champ";

        pen2.dispaly();
    }
}
