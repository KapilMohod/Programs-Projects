package JAVA;

class AbstractDemo {

    public static void main(String[] args) {
        
        System.out.println("Inside Main");

        // Demo dobj = new Demo();..... we cannot create the object  

    }
    
}

abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Constructer");
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

