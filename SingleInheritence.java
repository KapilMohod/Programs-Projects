package JAVA;

class SingleInheritence {

    public static void main(String[] args) {
        
        Derived dobj = new Derived();
        dobj.fun();
        dobj.gun();

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