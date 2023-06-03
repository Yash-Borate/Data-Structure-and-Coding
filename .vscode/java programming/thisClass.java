
class student{
    int roll_no;
    String name;
    public void display(){
        System.out.println(this.name);
        System.out.println(this.roll_no);
    }
}

public class thisClass {
    public static void main(String args[]){

        student yash=new student();

        yash.name="yash borate";
        yash.roll_no=111;

        yash.display();
    }
}
