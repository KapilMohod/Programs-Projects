class FinalizedDemo2
{
    public static void main(String [] arg)
    {
        Employee eobj = new Employee("Amit", 78000, "Kave Road Pune",28 );
        eobj.Display();
        Employee eobj2 = eobj; 
        //Employee eobj3 = eobj; 

        System.out.println("Hash COde eobj is : "+eobj.hashCode());
        System.out.println("Hash COde eobj is : "+eobj2.hashCode());
        eobj=null;
        System.gc(); //gc means Garbage Collecter
    
    }
}
class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, String Addr, int A)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = Addr;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalized Method .....");
    }

    void Display()
    {
        System.out.println("Employee Name : "+this.Name);
        System.out.println("Employee Age : "+this.Age);
        System.out.println("Employee Salary : "+this.Salary);
        System.out.println("Employee Address : "+this.Address);
    }
}