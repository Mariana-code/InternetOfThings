#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo");
    }
    else{
        printf("Soy el proceso padre\n");
        sleep(10);
        printf("termina");
    }
    return 0;
}