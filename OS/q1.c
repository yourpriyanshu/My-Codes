#include <stdio.h>

int main()
{
    int n, i, j, wt[20], tat[20], total_wt = 0, total_tat = 0;
    float avg_wt, avg_tat;
    int at[20], bt[20], ct[20];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d:\n", i + 1);
        printf("Arrival time: ");
        scanf("%d", &at[i]);
        printf("Burst time: ");
        scanf("%d", &bt[i]);
    }

    ct[0] = at[0] + bt[0];
    for (i = 1; i < n; i++)
    {
        if (at[i] > ct[i - 1])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i - 1] + bt[i];
    }

    for (i = 0; i < n; i++)
    {
        wt[i] = ct[i] - at[i] - bt[i];
        tat[i] = ct[i] - at[i];
        total_wt += wt[i];
        total_tat += tat[i];
    }

    avg_wt = (float)total_wt / n;
    avg_tat = (float)total_tat / n;

    printf("\nProcess\t Arrival Time\t Burst Time\t Completion Time\t Waiting Time\t Turnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t %d\t\t %d\t\t %d\t\t\t %d\t\t %d\n", i + 1, at[i], bt[i], ct[i], wt[i], tat[i]);
    }
    printf("\nAverage waiting time: %.2f\n", avg_wt);
    printf("Average turnaround time: %.2f\n", avg_tat);

    return 0;
}
