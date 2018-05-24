#include <stdio.h>

int main(){

  int n,r,c[4][13];
  int i=0,k=0;
  char e;


  for(i=0;i<4;++i){
    for(k=0;k<13;++k){
      c[i][k]=0;
    }
  }

  scanf("%d",&n);

  for(i=0;i<n;++i){
    scanf("%c",&e);
    if(e=='\n'){
      scanf("%c",&e);
    }
    scanf("%d",&r);

    if(e=='S') c[0][r-1]=1;
    if(e=='H') c[1][r-1]=1;
    if(e=='C') c[2][r-1]=1;
    if(e=='D') c[3][r-1]=1;
  }
  
  for(i=0;i<4;++i){
    for(k=0;k<13;++k){
      if(c[i][k]==0){
	if(i==0) printf("S %d\n",k+1);
	if(i==1) printf("H %d\n",k+1);
	if(i==2) printf("C %d\n",k+1);
	if(i==3) printf("D %d\n",k+1);
      }
    }
  }
  


  return 0;
}
