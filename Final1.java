package JAVA;


class Final1 {
    
    public static void main(String[] args) 
    {
        Demo dobj = new Demo();

        System.out.println("Value os A :"+dobj.A);
        System.out.println("Value os B :"+dobj.B);
        dobj.A++;

        //dobj.B++; .... its shows a error , because its constant/final.
        
        Demo dobj1 = new Demo(51,101);

        System.out.println("Value os A :"+dobj1.A);
        System.out.println("Value os B :"+dobj1.B);
    }
}

class Demo
{
    public int A;
    public final int B;

    Demo()
    {
        A = 11;
        B = 21;
    }

     Demo(int i, int j)
    {
        A = i;
        B = j;
    }


}