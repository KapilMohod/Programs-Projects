package JAVA;

class Array3 {

    public static void main(String[] args) {

        int Arr[][] = {{10,20,30},{40,50},{60,70,80},{90,100,110,120,130},{140}};
        

        for(int i = 0; i<Arr.length; i++)
    {
        for(int j = 0; j<Arr[i].length; j++)
        {
            System.out.print(Arr[i][j]+"\t");
        }
        System.out.println();
    }

    }
    
}
