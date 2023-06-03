
class pen{
    int price;
    String name;

    public void print(){
        System.out.println("name of pen : "+name +"\n"+"price of pen : "+price);
    }
}


public class ClassPractice {

    public static void main(String args[]){
        pen yash=new pen();

        yash.name="stylo";
        yash.price=100;

        yash.print();
    }    
}
