import java.io.*;

/**
 * CreateFile
 */
public class WriteFile 
{
    public static void main(String arg[])
    {
        try 
        {
           String Data = "Marvellous Infosystems";
           byte Arr[] = Data.getBytes();

            FileOutputStream fobj = new FileOutputStream("PPA.txt");
            fobj.write(Arr);

            System.out.println("We write something in the existing created file : "+fobj);
        } 
        catch (Exception obj) 
        {
           
        }
        
    }
    
}                                                                    