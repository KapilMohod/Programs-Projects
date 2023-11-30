package JAVA;


class Oveririding {
    public static void main(String[] args) 
    {
        Base bobj = new Derived(); //Upcasting

        bobj.fun(); //Derived Fun will call
        bobj.gun(); //Base gun will call
        bobj.sun(); //Derived gun will call
        bobj.run(); //Base run will call
        //bobj.run(11); //not call because in Base class not contains the parameter, so its will not shift to the Derived class 
        //bobj.mun(); // Not call ..... Not available in Base class

        
    }
    
}

class Base
{
    public void fun() //1000
    {
        System.out.println("Inside Base fun");
    }

    public void gun() //2000
    {
        System.out.println("Inside Base gun");
    }

    public void sun() //3000
    {
        System.out.println("Inside Base sun");
    }

    public void run() //4000
    {
        System.out.println("Inside Base run");
    }
}

class Derived extends Base
{
    public void fun() //5000
    {
        System.out.println("Inside Derived fun");
    }

     public void sun() //6000
    {
        System.out.println("Inside Derived sun");
    }

     public void run(int A) //7000
    {
        System.out.println("Inside Derived run with one parameter");
    }

     public void mun() //8000
    {
        System.out.println("Inside Derived mun");
    }

}