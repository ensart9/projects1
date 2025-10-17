// A program that calculates the difference between the start and end times entered
#include <stdio.h>
#include <stdlib.h>

struct time
{
    int second;
    int minute;
    int hour;
};

void timeDifference(struct time t1,struct time t2,struct time *diff)
{
    if(t1.second>t2.second)
    {
        t2.minute--;
        t2.second+=60;
    }

    diff->second=t2.second-t1.second;

    if(t1.minute>t2.minute)
    {
        t2.hour--;
        t2.minute+=60;
    }

    diff->minute=t2.minute-t1.minute;

    diff->hour=t2.hour-t1.hour;   
}


int main()
{
    struct time time1,time2,difference;

    printf("Enter the start time (hh mm ss): ");
    scanf("%d%d%d",&time1.hour,&time1.minute,&time1.second);
    printf("Enter the end time (hh mm ss): ");
    scanf("%d%d%d",&time2.hour,&time2.minute,&time2.second);

    timeDifference(time1,time2,&difference);
    printf("Zaman farki:%dhh %dmm %dss",difference.hour,difference.minute,difference.second);

}

