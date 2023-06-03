abstract class animal{
    public void walk(){

    }
}
class horse extends animal
{
    public void walk(){
        System.out.println("walks on 4 leg");
    }

}

class chiken extends animal{
    public void walk(){
        System.out.println("walks in two legs");
    }
}
public class Abstraction {
    public static void main(String args[]){
        horse h=new horse();
        h.walk();
    }
}
 