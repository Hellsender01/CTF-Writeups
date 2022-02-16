//gcc -fno-stack-protector brop.c -o brop -no-pie
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int i;

int check();

int main(void){

    setbuf(stdin,NULL);
    setbuf(stdout,NULL);
    setbuf(stderr,NULL);

    puts("Are you blind my friend?");

    if(!check()){
        puts("Do not dump my memory!");
        }
    else {
        puts("No password for you!");
    }
}

int check(){

    char buf[70];

    read(STDIN_FILENO,buf,1024);

    return strcmp(buf,"aslvkm;asd;alsfm;aoeim;wnv;lasdnvdljasd;flk");
