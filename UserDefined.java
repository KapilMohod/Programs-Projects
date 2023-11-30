package JAVA;
import java.util.*;

public class UserDefined {

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Age : ");
        int iAge = sobj.nextInt();

        try 
        {
            if (iAge<18) 
        {
            AgeInvalid aobj = new AgeInvalid("Your Age is below 18");
            throw aobj;
            
        } 

        else
        {
            System.out.println("Login Successfull ...");
        }
            
        } 
        catch (AgeInvalid obj) 
        {
            System.out.println("Inside Catch Block ");
            System.out.println(obj);
        }
        
        sobj.close();
    }
    
}

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}
