import java.util.*;
public class ChatBot_prog {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input;

        System.out.println("Hello! I am a chat bot. How can I help you?");

        while (true) {
            input = scanner.nextLine();
            if ((input == null) || (input.length() < 1))
                input = "Please say something.";

            if (input.equalsIgnoreCase("bye"))
                break;
            else
                System.out.println("Bot : " + getResponse(input));
        }
    }

    private static String getResponse(String input) {
        // you can customize this method to generate different responses based on the user's input
        return "I don't understand. Can you please rephrase that?";
}
}
