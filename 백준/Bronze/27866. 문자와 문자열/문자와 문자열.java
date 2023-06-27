import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String[] a=input.next().split("");
        int b= input.nextInt();
        
        System.out.println(a[b-1]);
    }
}