#include<stdio.h>
//PROTOTYPING FUNCTIONS
int min(int a, int b);


int main(){

int nbOfInt, item;
int listInt[100];
int smallestInt = 0;
int odd = 0;
scanf("%d", &nbOfInt);
//defining array
int listInt1[nbOfInt];

for(int i=0; i<nbOfInt; i++){
  //printf("Vnesi stevilo \n");
  scanf("%d", &listInt1[i]);
}

if(nbOfInt % 2 ==0){
  odd = 1;
}else{
  odd = 0;
}

smallestInt = listInt1[0];

//printf(" %d \n" smallestInt);

for(int i=0; i<nbOfInt-odd; i++){
  //find min value with function, return smoller value;
  //printf("Compare items: %d AND %d\n ", listInt1[i], listInt1[i+1]);
  item = min(listInt1[i],listInt1[i+1]);
  if(item < smallestInt){
    smallestInt = item;
  }
}

printf("%d", smallestInt);

    return 0;
}

int min(int a, int b){
    int smaller;
    if(a<b){
      smaller = a;
    }else{
      smaller = b;
    }
    return smaller;
}
