/*
 * first come first served algorithm
 *
 * the program takes a list of processes and their burst time.
 * the output is a Grantt Chart in tabular format.
 */

#include<stdio.h>

int main(){

int i,n,bt[50],t=0;

printf("enter the process number:");
scanf("%d",&n);
printf("enter the burst  time:\n");
    for(i=0;i<n;i++){
    printf("P%d:",i+1);
    scanf("%d",&bt[i]);
      }
printf("-----Gantt Chart-----\n");
 for(i=0;i<n;i++){
    t+=bt[i];
    if(i==0){
        bt[i]=0;
        printf( " %d--->%d\n",-bt[i],t);
     }
    else
        printf(" %d--->%d\n",(t-bt[i]),t);
 }
return 0;
}
