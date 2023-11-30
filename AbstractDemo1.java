package JAVA;

class AbstractDemo1 {

    public static void main(String[] args) {
        
        System.out.println("Inside Main");

        // Demo dobj = new Demo();..... we cannot create the object  

        Hello hobj = new Hello();

        hobj.fun();
        hobj.gun();

    
    }
    
}

abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Demo Constructer");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun(); // syntax for java

    //virtual void fun() = 0; ... syntax for c++
    
    void gun()
    {
        System.out.println("Inside Gun");
    }
}

class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello Constructer");
    }

    public void fun()
    {
        System.out.println("Inside fun of Hello");
    }
}

