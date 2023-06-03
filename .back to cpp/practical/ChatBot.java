import java.util.*;

public class ChatBot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input;

        System.out.println("Hello! I am a chat bot. How can I help you?");

        while (true) {
            input = scanner.nextLine();
            if ((input == null) || (input.length() < 1))
                input = "Please say something.";

            else if (input.equalsIgnoreCase("bye")){
                System.out.println("Bot : byy");
                break;
            }
                
            else if (input.equalsIgnoreCase("Good Morning"))
                System.out.println("Bot : Good Morning");
            else if (input.equalsIgnoreCase("goood night"))
                System.out.println("Bot : Good night");
            else if (input.equalsIgnoreCase("how are you"))
                System.out.println("Bot : I am fine");
            else if (input.equalsIgnoreCase("what is your name"))
                System.out.println("Bot : my name if fluffy");
            else if (input.equalsIgnoreCase("nice to meet you"))
                System.out.println("Bot : nuce to meet you buddy");
            
            else
                System.out.println("Bot : " + getResponse(input));
        }
    }

    private static String getResponse(String input) {
        // you can customize this method to generate different responses based on the user's input
        return "I don't understand. Can you please rephrase that?";
    }
}