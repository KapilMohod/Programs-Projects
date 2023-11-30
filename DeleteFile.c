#include<stdio.h> //for printf & scanf
#include<fcntl.h> //file control :- for controling the file
#include<unistd.h> //Universal Standard
#include<string.h>

int main()
{
    unlink("Marvellous.txt"); //Unlink we used for delete the file

    printf("File Deleted Successfully...\n");
    
    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR : Read + Write

