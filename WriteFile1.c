#include<stdio.h> //for printf & scanf
#include<fcntl.h> //file control :- for controling the file
#include<unistd.h> //Universal Standard
#include<string.h>

int main()
{
    int fd = 0; //file descripter
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,strlen(Arr)); //(Kashamadhe Lihaych ahe, kay Lihaychay, kiti Lihachay)

    printf("%d bytes gets written in the file \n",Ret);

    close(fd);
    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR : Read + Write

