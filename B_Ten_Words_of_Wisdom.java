import java.util.*;
import java.io.*;

public class B_Ten_Words_of_Wisdom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while (t != 0) {
            int n = sc.nextInt();
            int mx_quality = 0, indx = 0;
            for(int i = 1; i <= n; i++)
            {
                int a = sc.nextInt();
                int b = sc.nextInt();
                if(a <= 10 && b > mx_quality)
                {
                    mx_quality = b;
                    indx = i;
                }

            }

            System.out.println(indx);
            t--;
        }
        sc.close();
    }
}
