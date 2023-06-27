import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        for(int i=0;i<t;i++)
        {
            int r= input.nextInt();
            String s = input.next();
            
            for(int j=0;j<s.length();j++)
            {
                for(int k=0;k<r;k++)
                {
                    System.out.print(s.charAt(j));
                }
            }
            System.out.println();
        }
    }
}
