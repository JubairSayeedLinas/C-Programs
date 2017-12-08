#include<stdio.h>

int main(){

int i,j,n,bt[50],p[50],pr[50],temp,pos=0,t=0;

printf("enter the process number:");
scanf("%d",&n);
printf("Process: burst-time priority:\n");
    for(i=0;i<n;i++){
    printf("P%d:\t\t",i+1);
    scanf("%d",&bt[i]);

    scanf("%d",&pr[i]);
            p[i]=i+1;
    }

 for(i=0;i<n;i++){
       pos=i;
        for(j=i+1;j<n;j++){
            if(pr[j]<pr[pos]){
                pos=j;
            }
        }
            temp=pr[i];
            pr[i]=pr[pos];
            pr[pos]=temp;

            temp=bt[i];
            bt[i]=bt[pos];
            bt[pos]=temp;

            temp=p[i];
            p[i]=p[pos];
            p[pos]=temp;

}




printf("-----Gantt Chart-----\n");
 for(i=0;i<n;i++){
    t+=bt[i];
    if(i==0){
        bt[i]=0;
        printf( "P%d: %d--->%d\n",p[i],bt[i],t);
     }
    else
        printf("P%d: %d--->%d\n",p[i],(t-bt[i]),t);
 }


return 0;
}
