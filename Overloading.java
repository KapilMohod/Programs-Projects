package JAVA;

class Overloading
{
    public static void main(String args[])
    {
        Arithmatic aobj = new Arithmatic();
        
        double dRet = 0.0;
        int iret = 0;

        iret = aobj.Addition(10, 11);
        System.out.println("Additon is : "+iret);

        iret = aobj.Addition(10, 11, 21);
        System.out.println("Additon is : "+iret);

        dRet = aobj.Addition(10.8,11.7);
        System.out.println("Additon is : "+dRet);
    }
}

class Arithmatic
{
    public int Addition(int a, int b)
    {
        return a+b;
    }

    public int Addition(int a, int b, int c)
    {
        return a+b+c;
    }

    public double Addition(double a, double b)
    {
        return a+b;
    }
}