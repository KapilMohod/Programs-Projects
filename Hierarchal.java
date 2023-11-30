package JAVA;

class Hierarchal {

    public static void main(String[] args) {

         Derived dobj = new Derived();
         DerivedX dobj1 = new DerivedX();

       
        
    }

   
}
    
class Base
{
    public int A, B;

    public Base()
    {
        System.out.println("Base Constructer");
    }

    public void fun()
    {
        System.out.println("Base Fun");
    }

}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructer");
    }

    public void gun()
    {
        System.out.println("Derived gun");
    }
    
}

class DerivedX extends Base
{
    public int p, q;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructer");
    }

    public void Run()
    {
        System.out.println("DerivedX Run");
    }
}