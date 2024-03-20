import java.util.*;

public class CWordonthePaper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
      //  System.out.println("Enter the number of strings: ");
        int n = sc.nextInt();
        sc.nextLine(); // consume the newline left-over
        while(n != 0)
        {
            String[] array = new String[8];
        // System.out.println("Enter the strings: ");
            for (int i = 0; i < 8; i++) {
                array[i] = sc.nextLine();
            }

        //    System.out.println("You entered: ");
        int found = 0, in = 0;
            for (String str : array) {
                if(found == 0)
                {
                    for (char c : str.toCharArray()) {
                        if(c != '.')
                        {
                            System.out.print(c);
                            found = 1;
                            in = indexOf(c, str);
                            break;
                        }
                    }
                }
                else
                {
                    char c = str.charAt(in);
                    if(c != '.')
                    System.out.print(c);
                }
                
            }
            System.out.println();
            n--;
        }

        sc.close();
    }

    private static int indexOf(char c, String str) {
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == c) {
                return i;
            }
        }
        return -1; // Character not found in the string
    }
}


