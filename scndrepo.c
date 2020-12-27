#include<stdio.h>
#include<stdlib.h>
#define N 10
 int M[N+1][N+1];
 int factorielle(int nbre){
if (nbre==0)
 return 1;
else
 return nbre*factorielle(nbre-1);
 }
 int triangle(int b){
 	int n,p,k;
 for(n=0;n<b;++n){
  for(p=0;p<=n;++p){
  	 k=factorielle(n)/(factorielle(p)*factorielle(n-p));
  	 printf("%4d\t",k);
  	 M[n][p]=k;}
  	 printf("\n");
  }
 }
 int main(){
 	triangle(N);
 	return 0;
 }
 	

