int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    
    int i = 0;
    int j = numbersSize - 1;

    while ( i < j ) { 
        int sum = numbers[i] + numbers[j];
        if (sum == target) {
            int *result = (int*) malloc (2* sizeof(int));
            result[0] = i + 1;
            result[1] = j + 1;

            *returnSize = 2;    

        return result;
        } 
        if (sum > target) {
            j -- ;
        } else{
            i ++ ;
        }
    }

  return NULL;
}
