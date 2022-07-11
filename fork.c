#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<wait.h>
int main()
{
    int pid;
    pid=fork();
    if(pid==0)
    {
        while(fork())
        {execlp("ls", "ls","-l", NULL);}
        printf("je suis fils\n");
        sleep(5);
    }
    else
    {
        if(pid==-1)
        {
            perror("fork");
            exit(0);
        }
        else
        {
            wait(0);
            printf("je suis pere\n");
        }
    }
    return 0;
}