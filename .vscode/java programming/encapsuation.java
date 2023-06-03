
class bank{
    public String name;
    private String password;
    private String email;
    
    public void setpass(String password){
        this.password=password;

    }
    public void getpassword(){
        this.password=password;
        System.out.println(this.password);
    }
}

public class encapsuation {
    public static void main(String args[]){
        bank yash=new bank();
        yash.name="yash borate";
        yash.setpass("yash@2112");
        yash.getpassword();
        
    }
}
