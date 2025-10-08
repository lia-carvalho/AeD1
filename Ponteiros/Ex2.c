#include <stdio.h> 

int main(){
    int x,y;

    if(&x>&y){
        printf("O maior endereço é x: %p > %p",&x,&y);
    }
    else 
     printf("O maior endereço é y: %p > %p",&y,&x);

     return 0;
}