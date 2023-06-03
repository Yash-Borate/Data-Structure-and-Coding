

class student{
    int id;
    String name;

    student(){

    }
    student(student s1){
        this.name=s1.name;
        this.id=s1.id;
    }
    public void display(){
        System.out.println("name"+this.name);
        System.out.println("id :"+this.id);
    }

}

public class copyConstructor{
    public static void main(String args[]){
        student yash=new student();
        yash.name="yash";
        yash.id=11;


        student s1=new student(yash);
        s1.display();
    }
}