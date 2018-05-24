#include <stdio.h>

int main(){

  int n,N[100];
  int i=0;

  scanf("%d",&n);

  for(i=0; i<n; ++i){
    scanf("%d",&N[i]);
  }

  for(i=n-1;i>0;--i){
    printf("%d ",N[i]);
  }
  printf("%d\n",N[0]);
  


  return 0;
}
