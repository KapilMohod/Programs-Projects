package JAVA;
import JAVA.JAVA.*;
import JAVA.Maths;
class PackageDemo1
{
    public static void main(String arg[])
    {
        Maths mobj = new Maths();

        int iRet = 0;
        iRet = mobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);
       
    }
}