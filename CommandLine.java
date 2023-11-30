class CommandLine 
{
    public static void main(String arg []) 
    {
        System.out.println("Number Of Command Line arguments are : "+arg.length);

        System.out.println("Command Line Arguments are : ");

        for (int i = 0; i<arg.length; i++)
        {
            System.out.println(arg[i]);
        }
    }
}
