/*
 * Shortest Job First scheduling algorithm
 *
 * The program takes a list of processes and their burst time.
 * The algorithm selects the job with shortest burst time and then process it.
 * The output is a Grantt Chart in tabular format.
 */

#include<stdio.h>

int main(){

int i,j,n,bt[50],p[50],temp,pos=0,t=0;

printf("enter the process number:");
scanf("%d",&n);
printf("enter the burst  time:\n");
    for(i=0;i<n;i++){
    printf("P%d:",i+1);
    scanf("%d",&bt[i]);
            p[i]=i+1;
    }

 for(i=0;i<n;i++){
       pos=i;
        for(j=i+1;j<n;j++){
            if(bt[j]<bt[pos]){
                pos=j;
            }
        }

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
