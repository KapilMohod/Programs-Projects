#include<stdio.h> //for printf & scanf
#include<fcntl.h> //file control :- for controling the file
#include<unistd.h> //Universal Standard

int main()
{
    int fd = 0; //file descripter

    fd = open("Marvellous.txt",O_RDWR);

    if(fd!=0)
    {
        printf("File is successfully Opened with FD : %d\n",fd);
    }
    
    close(fd);
    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR : Read + Write

