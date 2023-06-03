
class animal{
    void type(){
        System.out.println("i am animal");
    }
    void height(int height){
        System.out.println("my height is"+height);
    }
}

class dog extends animal{
    void type(){
        System.out.println("i am animal of type dog");
    }
}


public class sol {
    public static void main(String args[]){
        dog g = new dog();
        g.height(10);
        g.type();
    }
}
