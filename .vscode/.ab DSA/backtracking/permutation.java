public class permutation {

    public static void PrintPermutation(String yash,String per,int index){

        if(yash.length()==0){
            System.out.println(per);
            return;
        }


        for(int i=0;i<yash.length();i++){
            char currChar = yash.charAt(i);
            String newStr = yash.substring(0,i) + yash.substring(i+1);
            PrintPermutation(newStr, per+currChar, index+1);
        }
    }

    public static void main(String args[]){
        String yash="ABC";
        String per="";
        PrintPermutation(yash, per, 0 );
        
       
    }
    
}
