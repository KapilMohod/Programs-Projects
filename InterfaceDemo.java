package JAVA;

public class InterfaceDemo 
{
    
    public static void main(String[] args) 
    {
        
        Marvellous mobj = new Marvellous();

        int iret = 0;
        iret = mobj.Addition(11, 10);
        System.out.println("Addition is : "+iret);

        iret = mobj.Substraction(11, 10);
        System.out.println("Substraction is : "+iret);
        
    }
}

interface Mathematics
{
    public int Addition (int A, int B);
    public int Substraction (int A, int B);
}

class Marvellous implements Mathematics
{
    public int Addition (int A, int B)
    {
        return A + B;
    }

     public int Substraction (int A, int B)
    {
        return A - B;
    }
}