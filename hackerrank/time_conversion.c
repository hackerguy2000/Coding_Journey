#include <stdio.h>
#include <string.h>

int main()
{
    int hr, min, sec;
    char AM_or_PM[3];
    printf("Enter the Hours,minute & second:::\nENter the Am or Pm as well\n::");
    scanf("%d %d %d %s", &hr, &min, &sec, AM_or_PM);
    if ((hr <= 12) && (hr > 0) && (strcmp(AM_or_PM, "PM") == 0))
        hr = hr + 12;
    else if ((hr = 12) && strcmp(AM_or_PM, "PM"))
        hr = 0;

    printf("%d:%d:%d  %s", hr, min, sec,AM_or_PM);

    return 0;
}