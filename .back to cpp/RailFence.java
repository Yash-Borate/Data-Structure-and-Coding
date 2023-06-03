import java.util.*;


class RailFence{

    public static String Encryption(String text , int key){
        char res[][]=new char[key][text.length()];

        for(int i=0;i<key;i++)
        Arrays.fill(res[i], '\n');
        
        boolean isDown = false;
        int row=0,col=0;

        for(int i=0;i<text.length();i++){
            if(row==0 || row==key-1) isDown=!isDown;

            res[row][col++]=text.charAt(i);

            if(isDown)row++;
            else row--;
        }
        StringBuilder ans = new StringBuilder();

        for(int i=0;i<key;i++){
            for(int j=0;j<text.length();j++){
                if(res[i][j]!='\n')
                ans.append(res[i][j]);
            }
        }
        return ans.toString();
    }
    public static String decryptRailFence(String cipher,
    int key)
{


char[][] rail = new char[key][cipher.length()];


for (int i = 0; i < key; i++)
Arrays.fill(rail[i], '\n');


boolean dirDown = true;

int row = 0, col = 0;

for (int i = 0; i < cipher.length(); i++) {
if (row == 0)
dirDown = true;
if (row == key - 1)
dirDown = false;


rail[row][col++] = '*';


if (dirDown)
row++;
else
row--;
}


int index = 0;
for (int i = 0; i < key; i++)
for (int j = 0; j < cipher.length(); j++)
if (rail[i][j] == '*'
&& index < cipher.length())
rail[i][j] = cipher.charAt(index++);

StringBuilder result = new StringBuilder();

row = 0;
col = 0;
for (int i = 0; i < cipher.length(); i++) {

if (row == 0)
dirDown = true;
if (row == key - 1)
dirDown = false;

if (rail[row][col] != '*')
result.append(rail[row][col++]);


if (dirDown)
row++;
else
row--;
}
return result.toString();
}

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
       
        System.out.println("Enter the text :");
        String text = sc.nextLine();
        System.out.println("Enter the rail size : ");
        int key = sc.nextInt();
        String ans = Encryption(text, key);
        System.out.println("Encrypted message: ");
        System.out.println(ans);
        String res = decryptRailFence(ans, key);
        System.out.println("Decrypted message :");
        System.out.println(res);
    }

}

