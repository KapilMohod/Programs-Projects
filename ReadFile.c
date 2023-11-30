#include<stdio.h> //for printf & scanf
#include<fcntl.h> //file control :- for controling the file
#include<unistd.h> //Universal Standard
#include<string.h>

int main()
{
    int fd = 0; //file descripter
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    Ret = Read(fd,Arr,10); //(Kashatun wachaych ahe, kashat wachachay, kiti wachachay)

    printf("%d bytes gets read from the file \n",Ret);
    printf("Data is : %s\n",Arr);

    close(fd);
    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR : Read + Write

