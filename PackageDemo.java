package JAVA;
import JAVA.Marvellous.Maths;

public class PackageDemo {

    public static void main(String[] args) {
        
        Maths mobj = new Maths();

        int iret = 0;
        iret = mobj.Addition(11, 12);
        System.out.println("Addition is : "+iret);
    }
    
}
