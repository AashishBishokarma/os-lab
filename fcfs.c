#include <stdio.h>
#define max 10
int main()
{
    int n,at[max],bt[max],wt[max],tat[max],ct[max],sum,i,j,k;
    float totaltat=0, totalwt=0;
    printf('enter the total number of processes');
    scanf("%d",&n);
    printf('\nEnter the Process Arrival Time & Burst Time \n');
    for (i = 0; i < n; i++)
    {
        printf("Enter the Arrival Time of Process %d :",i+1);
        scanf("%d",&at[i]);
        
        printf("Enter the burst Time of Process %d :",i+1);
        scanf("%d",&bt[i]);

    }
    
    // calculate completion time of processes
    sum = at[0];
    for(j=0;j<n;j++)
    {
        
    }

}