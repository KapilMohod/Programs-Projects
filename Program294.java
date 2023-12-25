package FS_JAVA;
import java.util.*;
import java.io.*;
import java.nio.Buffer;

public class Program294
{
    public static void main(String[] args) throws IOException
    {
        System.out.println("____________________________________________________________________");
        System.out.println("__________________Marvellous Packer Unpacker________________________");
        System.out.println("____________________________________________________________________");

        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the name of directory which contains all files that you want to packed : ");
        String DirectoryName = sobj.nextLine();

        System.out.println("Enter the name of packed that you want to create : ");
        String PackedFile = sobj.nextLine();

        File FobjPack = new File(PackedFile);

        bRet = FobjPack.createNewFile();

        if (bRet == false) 
        {
            System.out.println("Unable to create packed file...");
            return;
        }

        System.out.println("Packed file gets successfully created in the current directory..");

        File fobj = new File(DirectoryName); 

        bRet = fobj.isDirectory();

        if (bRet == true) 
        {
            System.out.println("Directory is present...");

            File Arr[] = fobj.listFiles(); // check kaychay files kiti ahe folder madhe 
            
            System.out.println("Number of files in the directory are : "+Arr.length);

            String Header = null;

            FileOutputStream fcombine = new FileOutputStream(PackedFile);
            
            int iRet = 0;
            byte Buffer[] = new byte[1024];

            System.out.println("Packing Activity Started....");

            for(int i  = 0; i<Arr.length; i++)
            {
                // create Header
               Header = Arr[i].getName() + " " + Arr[i].length();

               System.out.println("File Packed with the name : "+Arr[i].getName());
               
               //Add Extra white spaces at the end of header
               for(int j = Header.length(); j<100; j++)
               {
                    Header = Header + " ";
               }

               //convert String into bytes Array
               byte hArr[] = Header.getBytes();

               // write header into packed file
               fcombine.write(hArr,0,100);

               FileInputStream fiobj = new FileInputStream(Arr[i]);

                while ((iRet = fiobj.read(Buffer)) != -1) 
                {
                    fcombine.write(Buffer,0,iRet);
                }
               
                fiobj.close();
            }

            System.out.println("Packing Activity completed..");
            System.out.println("Total files packed successfully : "+Arr.length);

            System.out.println("______________________________________________________________");
            System.out.println("Thank you for using Marvellous Packer Unpacker");
            System.out.println("_______________________________________________________________");
            
            fcombine.close();
               
            }
        
        else
        {
            System.out.println("There is no such directory...");
        }

        sobj.close();
    }
    
    }
