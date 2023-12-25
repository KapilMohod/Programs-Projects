package FS_JAVA;

import java.util.*;
import java.io.*;

public class Program314 
{
    public static void main(String[] args) throws Exception
    {
        System.out.println("_________________________________________________________________");
        System.out.println("__________________Marvellous Packer Unpacker________________________");
        System.out.println("__________________________________________________________________");

        byte Header[] = new byte[100];
        int FileSize = 0;
        String str = null;
        int iRet = 0;
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the name of packed file that you want to unpacked : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);
        FileInputStream fiobj = new FileInputStream(fobj); // for reading 

        
        while ((iRet = fiobj.read(Header,0,100)) > 0)
        {
            
            String Hstr = new String(Header);

            System.out.println(Hstr);

            str = Hstr.trim();

            String Tokens [] = str.split(" "); // don string la mala todaycha ahe

            File NewFile = new File(Tokens[0]);
            NewFile.createNewFile();

            FileSize = Integer.parseInt(Tokens[1]); // Solution

            byte Buffer[] = new byte[FileSize]; // Solution

            fiobj.read(Buffer, 0, FileSize);

            FileOutputStream foobj = new FileOutputStream(NewFile); //je file create keliy tyamadhe lihaych ahe na aplyala  tr NewFile
            foobj.write(Buffer,0,FileSize);

            System.out.println(NewFile + " Unpacked Successfully");

            iCnt++;
        }
        
        System.out.println("Unpacking activity completed..");
        System.out.println("Total file unpacked succesfully : "+iCnt);

        System.out.println("________________________________________________________________________________________");
        System.out.println("__________________Thank You for using Marvellous Packer Unpacker________________________");
        System.out.println("_________________________________________________________________________________________");

    }
    
}