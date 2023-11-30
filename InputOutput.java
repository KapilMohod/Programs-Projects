package JAVA;
import java.util.*;


class InputOutput {
    
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        int No2 = sobj.nextInt();

        int Ans = 0;
        Ans = No1 + No2;

        System.out.println("Addition is :"+Ans);

        sobj.close();


    }
    
}

