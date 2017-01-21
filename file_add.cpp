#include <iostream>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    
    int numberArray[5];
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%1d", &numberArray[i]);
    }

	
    for (i = 0; i < 5; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
    
	for (i = 0; i < 5; i++){
        sum += numberArray[i];
        
    }
    printf("the sum is: %d\n\n", sum);
    
}
