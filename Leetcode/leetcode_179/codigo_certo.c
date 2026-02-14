int compara ( const void *a , const void *b){
    char *stringX = *( char **)a;
    char *stringY = *(char **)b;
 
    char xy[24];  
    char yx[24];

    //Testa X + Y
    sprintf(xy, "%s%s", stringX, stringY);
    // Testa Y + X
    sprintf(yx, "%s%s", stringY,stringX);

    return strcmp(yx,xy);
}

char* largestNumber(int* nums, int numsSize) {
   // Transforma os números em texto
   char **stringNum = (char **)malloc (numsSize * sizeof(char*));
   int totalLen =0;

   for( int i=0; i< numsSize; i++ ){
    stringNum[i] = (char *) malloc (12 * sizeof(char));
    sprintf(stringNum[i], "%d", nums[i]);
    totalLen += strlen(stringNum[i]);
   }

   qsort(stringNum, numsSize, sizeof(char *), compara);

   if (stringNum[0][0] == '0'){
    return "0";
   }

    char *resultado = (char *) malloc ((totalLen +1) * sizeof(char));
    resultado[0]= '\0'; //limpa a string;

    for( int i=0; i<numsSize; i++){
        strcat(resultado, stringNum[i]);
    }
    return resultado;
   }