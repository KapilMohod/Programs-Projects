import java.io.*;

/**
 * CreateFile
 */
public class CreateFile 
{
    public static void main(String arg[])
    {
        try 
        {
            File fobj = new File("PPA.txt");
            fobj.createNewFile();

        System.out.println("We create a new file : "+fobj);
        } 
        catch (Exception obj) 
        {
           
        }
        
    }
    
}                                                                    