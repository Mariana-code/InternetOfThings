#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo y me voy a convertir en ls\n");
        //execl("/workspace/tc10004b.513/exec","exec",NULL);
        execl("/workspace/InternetOfThings/hola","hola",NULL);
        execl("/usr/bin/ls", "ls", "/etc", NULL);
        printf("No debe de ejecutarse");
    }
    else{
        printf("Soy el proceso padre\n");
    }
    return 0;
}