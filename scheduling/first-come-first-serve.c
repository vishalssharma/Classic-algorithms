
#include<stdio.h>
#include<stdlib.h>
void findWaitingTime(int processes[], int n, int bt[],int wt[], int at[])
{
    int service_time[n];
    service_time[0] = 0;
    wt[0] = 0;

    int i;
    for ( i = 1; i < n ; i++)
    {

        service_time[i] = service_time[i-1] + bt[i-1];


        wt[i] = service_time[i] - at[i];
        if (wt[i] < 0)
            wt[i] = 0;
    }
}

void findTurnAroundTime(int processes[], int n, int bt[],int wt[], int tat[])
{
    int i;
    for (i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}


void findavgTime(int processes[], int n, int bt[], int at[])
{
    int wt[n], tat[n];
    int i;

    findWaitingTime(processes, n, bt, wt, at);


    findTurnAroundTime(processes, n, bt, wt, tat);


    printf("Processes "   " Burst Time "   " Arrival Time " " Waiting Time "  " Turn-Around Time " " Completion Time ");
    printf("\n");

    int total_wt = 0, total_tat = 0;
    for ( i = 0 ; i < n ; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        int compl_time = tat[i] + at[i];
         printf( "%d\t\t %d\t\t %d\t\t %d \t\t%d\t\t %d", i+1  ,bt[i] ,at[i] ,  wt[i]  ,tat[i]   , compl_time);
        printf("\n");
    }

    printf("Average waiting time = %f" ,(float)total_wt / (float)n);
    printf( "\nAverage turn around time =%f " ,(float)total_tat / (float)n);
}

int main()
{
    int processes[] = {1, 2, 3};
    int n = sizeof processes / sizeof processes[0];

    int burst_time[] = {5, 9, 6};

    int arrival_time[] = {0, 3, 6};

    findavgTime(processes, n, burst_time, arrival_time);

    return 0;
}
