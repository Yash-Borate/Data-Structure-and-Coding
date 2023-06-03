

//INHERITANCE


class college{
    int studentns;
    String name;

    public void display(int students,String name){
        this.studentns=students;
        this.name=name;
        System.out.println("college class");
    }
}

class student extends college
{
    public void print(){
        System.out.println(this.name+" "+this.studentns);
    }
}



public class inheritance {
    public static void main(String args[]){

        student yash=new student();

        yash.name="boorate";
        yash.studentns=111;
        yash.display(yash.studentns,yash.name);
        yash.print();

    }
    
}
