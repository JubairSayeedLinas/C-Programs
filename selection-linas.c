#include<stdio.h>

int main(){

int i,j,n,e[50],temp,pos=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++){
   scanf("%d",&e[i]);
}
for(i=0;i<n;i++){
       pos=i;
        for(j=i+1;j<n;j++){
            if(e[j]<e[pos]){
                pos=j;
            }
            }

            temp=e[i];
        e[i]=e[pos];
        e[pos]=temp;
            }


 for(i=0;i<n;i++){
    printf("%d",e[i]);
 }

return 0;
}
