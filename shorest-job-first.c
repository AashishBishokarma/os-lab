#include<stdio.h>
int main()
{
    int n, bt[10],wt[10],tat[10],ct[10],p[10],sum,i,j,k,temp;
    float totaltat=0,totalwt=0;
    printf("Enter the total number of processes:");
    scanf("%d",&n);
    printf("\nEnter the process number:\n");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("\n Enter the process Burst time\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Burst time fo process [%d]:",i+1);
        scanf("%d",&bt[i]);
    }

    // applying the bubble sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            temp=bt[j];
            bt[j]=bt[j+1];
            bt[j]=temp;

            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }

    // calculate the completion time of processes
    sum=0;
    for(j=0;j<n;j++)
    {
        sum=sum + bt[j];
        ct[j]=sum;
        
    }

    // calculate the turn around time
    for(k=0;k<n;k++)
    {
        tat[k]=ct[k];
        totaltat=totaltat+tat[k];

    }

    // calculate the waititng time
    for(k=0;k<n;k++)
    {
        wt[k]=tat[k]-bt[k];
        totalwt=totalwt+wt[k];

    }

    printf("\n Processes \t BT \n TAT \n WT \n\n");
    for(i=0;i<n;i++)
    {
        printf("\nP%d\t\t %d\t %d\t %d\t",i+1,bt[i],tat[i],wt[i]);
    }

    printf("\n Average Turnaround time :%f\n",totaltat/n);
    printf("\n Average Waiting Time:%f",totalwt/n);

    return 0;

}