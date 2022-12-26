#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main(void) {
  int i,j,a,dizi[N][N],dizi1[N][N],dizi2[N][N];
  srand(time(NULL));
  for(i=0; i<3; i++){ //A matrix
        for(j=0; j<3; j++){
            dizi[i][j]=rand()%50+1;
            dizi1[i][j]=rand()%50+1;
            dizi2[i][j]=dizi[i][j]+dizi1[i][j];
        }
    }
  
  printf("A matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6d\t",dizi[i][j]);
        }
        printf("\n");
      }
printf("\n");
  
  printf("B matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6d\t",dizi1[i][j]);
        }
        printf("\n");
      }
printf("\n");
  
  printf("top matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%6d\t",dizi2[i][j]);
          
        }
      printf("\n");
      }
        
  return 0;
}

