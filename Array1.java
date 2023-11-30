package JAVA;

class Array1 
{
    public static void main(String[] args) {

        //1....Static memory allocation
        int Arr1[] = {11,21,51,101};

        //2... Dynamic memory allocation
        int Arr2[] = new int[4];
         Arr2[0] = 11;
         Arr2[1] = 21;
         Arr2[2] = 51;
         Arr2[3] = 101;

         System.out.println("Length of Array : " +Arr1.length);

         int icnt = 0;

         for(icnt = 0; icnt<Arr1.length; icnt++)
         {
            System.out.println(Arr1[icnt]);
         }
        
        
    }
}

