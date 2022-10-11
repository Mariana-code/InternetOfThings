#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con;

void holaMundo(int signalNumber){
    if(signalNumber == 10){
        printf("Es la señal 10\n");
        con = 2;
    }
    else{
        printf("Es otra señal\n");
    }
    
}

void noMeMatas(int sigStop){
    printf("Im still working, proccess is not killed\n");
}

int main(){
    signal(12,holaMundo);
    signal(10,holaMundo);
    signal(2,noMeMatas);
    con = 1;
    while(con == 1){
        printf("Im working\n");
        sleep(1);
    }
    printf("Never arrives\n");
    return 0;
}