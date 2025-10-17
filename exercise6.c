/*Kullanıcı tarafından başlangıç ve bitiş zamanları saat, dakika ve saniye şeklinde girilmektedir.
Buna göre aşağıda kullanılan yapı ve fonksiyonu kullanarak iki zaman dilimi arasındaki farkı
hesaplayan C programını yazınız.

    struct zaman{
        int saniye;
        int dakika;
        int saat;
    };
    void fark (struct zaman t1, struct zaman t2, struct zaman *farki);
*/
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

    printf("Baslangic zamanini giriniz(saat,dakika,saniye): ");
    scanf("%d%d%d",&time1.hour,&time1.minute,&time1.second);
    printf("Bitis zamanini giriniz(saat,dakika,saniye): ");
    scanf("%d%d%d",&time2.hour,&time2.minute,&time2.second);


    timeDifference(time1,time2,&difference);
    printf("Zaman farki:%dhh %dmm %dss",difference.hour,difference.minute,difference.second);
}