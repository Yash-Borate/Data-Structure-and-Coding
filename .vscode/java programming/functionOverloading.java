import java.util.concurrent.CountDownLatch;

// class student{
//     int id;
//     String name;
//     student(){

//     }

//     public void display(String name){
//         System.out.println("nmae :"+name);
//     }
//     public void diaplay(int n){
//         System.out.println("number : "+n);
//     }
//     public void display(String name , int n){
//         System.out.println("name :"+name+"\n"+"id :"+id);
//     }
// }

// public class functionOverloading {
   
//     public static void main(String args[]){
        
//         student yash=new student();
//         yash.name="yash";
//         yash.id=111;


//         yash.diaplay(yash.id);
//         yash.display(yash.name);
//         yash.display(yash.name, yash.id);

//     }
// }


class student{
    int id;
    String name;

    public void display(int id){
        System.out.println("id :"+this.id);
    }
    
    public void display(String name){
        System.out.println("name :"+this.name);
    }
    
    public void display(int id , String name){
        System.out.println("id :"+this.id+" "+"name :"+this.name);
    }
}

public class functionOverloading{
    public static void main(String args[]){
        student yash=new student();
        yash.name="yash borate";
        yash.id=315;


        yash.display(yash.name);
        yash.display(yash.id);
        yash.display(yash.id, yash.name);
    }
}