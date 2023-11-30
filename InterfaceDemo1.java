package JAVA;

public class InterfaceDemo1 
{
    
    public static void main(String[] args) 
    {
        
        PPA pobj = new PPA();

        System.out.println("The value of PI is : "+Circle.PI);


        float fret = 0.0f;

        fret = pobj.Area(10.7f);
        System.out.println("The Area is : "+fret);

        fret = pobj.Circumference(10.7f);
        System.out.println("The Circumference is : "+fret);
        
    }
}

interface Circle
{
    float PI = 3.14f;

    public float Area  (float Radius);
    public float Circumference  (float Radius);
}

class PPA implements Circle
{
    public float Area (float Radius)
    {
        return PI*Radius*Radius;
    } 

    public float Circumference (float Radius)
    {
        return 2*Radius*Radius;
    } 
}
