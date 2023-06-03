
class student{
    int roll_no;
    String name;
    public  void display(){
        System.out.println(this.name);
        System.out.println(this.roll_no);
    }
    student(String name,int roll_no){
        this.name=name;
        this.roll_no=roll_no;
    }
}


public class Constructor {
    public static void main(String args[]){

        student yash=new student("yash",111);

        yash.display(); 
    }
}
