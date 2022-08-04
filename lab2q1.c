int array_calculation(int* array1, int* array2, int size){
    int i;
    int result=0;
    for(i=0; i<size; i++) {
        result = result + (array1[i] * array2[i]);
    }
    return result;
} 
