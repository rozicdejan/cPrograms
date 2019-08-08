#include <stdio.h>

//Write your function prototype here
void reverseArray(int arr[]);


int main(void){
    //! showMemory(start=65520)
    int  nbInList=6;
    int intList[nbInList];

   for(int i = 0 ; i < nbInList; i++){
     scanf("%d", &intList[i]);
   }

   reverseArray(intList);

  for(int i=0; i< nbInList; i++){
      printf("%d ", intList[i]);
  }
   return 0;
}
//Write your function here

void reverseArray(int arr[]){

  for(int i = 0; i < 3; i++){
    //printf("arr0 and arr6 %d, %d\n\n", arr[0], arr[5]);
    int temp=0;
    temp= arr[i];
    arr[i] = arr[5-i];
    arr[5-i] = temp;
  }

}
