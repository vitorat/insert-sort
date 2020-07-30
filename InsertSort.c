//Author: Vitor tolomelli
//InsertionSort

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
						
void insertionSort(int numbers[], int f2) {
   int elected, i, j;
   for(j=0; j<f2-1; j++){
   for(i=0; i<f2-1; i++){
   	if(numbers[i+1] < numbers[i]){
   		elected = numbers[i];
   		numbers[i] = numbers[i+1];
   		numbers[i+1] = elected;
	   }
   }
}

}

main(){

	int size;
	int z, a, value;
	
	printf("\n----->Type the vector size:");
  	scanf("%d",&size);
	
	int vector[size];
	int f = 0;
	
	for(z=1; z<size+1; z++){
	  	printf("\n----->Type a value:");
  		scanf("%d",&value);
  		vector[z-1] = value;
  		f++;
  		
  		printf("\n#####Vector Image#####\n");
  		for(a=0; a<z; a++){
            printf("\n [%d]  %d\n", a, vector[a] );
        }
        
        if(z>1){		
        insertionSort(vector, f);
    }
  	}
	
	if(z>1){
		insertionSort(vector, f);
	}
	
	printf("\n\n----->Time to sort...\n");
	printf("\n#####Vector Image#####\n");
  		for(a=0; a<size; a++){
            printf("\n [%d]  %d\n", a, vector[a] );
        }
	
            system("pause");
}
