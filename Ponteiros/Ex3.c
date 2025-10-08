#include <stdio.h>

int main(){
    int x, y;

printf("Digite dois numeros inteiros:");
scanf("%d,%d", &x,&y);

if(&x > &y){
    printf("O maior endereço e x:%p\n", &x);
    printf("Conteudo do maior endereço:%d",x);
}
else {
printf("O maior endereço e y:%p\n", &y);
printf("Conteudo do maior endereço(y): %d ",y);}

return 0;
}