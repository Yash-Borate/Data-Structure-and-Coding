interface animal{
    public void walk();
}

class horse implements animal{
    public void walk(){
        System.out.println("walk on four leg ");
    }
}


public class interfaces
 {
public static void main(String args[]){
    horse h=new horse();
    h.walk();
}
}
