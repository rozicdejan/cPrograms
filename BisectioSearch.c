#include <stdio.h>
int main(void)
{
  //read 10 integers
  int ai=0,
      bi=0,
      mid=0,
      n=0;
n=10;
int list[]={10,9,8,7,6,5,4,3,2,1};
int i = 0;

ai=0;   //start of array index
bi=n-1; //array start with 0 index
int found = 0;
int searchnb = 2;

  while(!found && ai < bi){
    mid = (ai + bi) /2 ;
    printf("%d\n",list[mid]);
    if(list[mid] == searchnb){
      //printf("%d\n",list[mid]);
      found = 1;
    }else if(list[mid] < searchnb ){
    //  printf("%d\n",list[mid]);
      bi = mid-1;
      i++;
    }else{
      //printf("%d\n",list[mid]);
      ai = mid +1;
      i++;
    }
  }

  if(found){
      printf("Found at %d", i);
  }else{
    printf("NOT FOUND!");
  }



    return 0;
}
