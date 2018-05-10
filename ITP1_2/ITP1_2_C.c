#include<stdio.h>
#include<math.h>


int main(){

  int array[3],i,k,work;

  scanf("%d %d %d", &array[0], &array[1], &array[2]);

  for(i=0;i<3-1;++i){
    for(k=i+1;k<3;++k){
      if(array[i]>array[k]){
	work = array[i];
	array[i] = array[k];
	array[k] = work;
      }
    }
  }

  printf("%d %d %d\n", array[0], array[1], array[2]);
  

  return 0;
}
