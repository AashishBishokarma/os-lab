#include <stdio.h>
#define max 10
int main()
{
    int n,at[max],bt[max],wt[max],tat[max],ct[max],sum,i,j,k;
    float totaltat=0, totalwt=0;
    printf("Enter the total number of processes: ");
    scanf("%d",&n);
    printf("\n\nEnter the Process Arrival Time & Burst Time \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Arrival Time of Process %d: ",i+1);
        scanf("%d",&at[i]);

        printf("Enter the burst Time of Process %d: ",i+1);
        scanf("%d",&bt[i]);

    }

    // calculate completion time of processes
    sum = at[0];
    for(j=0;j<n;j++)
    {
         sum = sum + bt[j];
         ct[j]=sum;
     }

     //calculating the total turn around time

     for(k=0;k<n;k++){
        tat[k]=ct[k]-at[k];
        totaltat=totaltat+tat[k];
     }

    //calculating the total waiting time

    for(k=0;k<n;k++){
        wt[k]=tat[k]-bt[k];
        totalwt = totalwt+wt[k];
     }

    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT \n\n\n");
    for(i=0;i<n;i++){
        printf("\nP%d\t\t %d\t %d\t %d\t %d\t %d\t\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
    }

    printf("\nAverage Turn Around Time : %.2f\n",totaltat/n);
    printf("Average Waiting Time : %.2f\n",totalwt/n);

    return 0;

}
