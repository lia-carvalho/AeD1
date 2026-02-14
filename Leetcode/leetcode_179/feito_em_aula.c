char* largestNumber(int* nums, int numsSize) {
    //Converter para String
    char StringNum =  malloc( numsSize *sizeof(*char));
    
    
    char xy[];   // x + y
    char yx[];   // y + x
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // Imprime as duas possibilidades
            printf(xy, "%s%s", StringNum[i], StringNum[j]); // string i + string j
            printf(yx, "%s%s", StringNum[j], StringNum[i]); // string j + string i
            
            // Se j + i for MAIOR que i + j, troca de lugar 
            if (strcmp(yx, xy) > 0) {
                char *tempStr = StringNum[i];
                StringNum[i] = StringNum[j];
                StringNum[j] = tempStr;
            }
        }
    }

}