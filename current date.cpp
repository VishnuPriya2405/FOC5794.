#include <stdio.h>
#include <time.h>
int main() 
{
    time_t currentTime;
    struct tm *localTime;
    char dateFormat[50];
    time(&currentTime); 
    localTime = localtime(&currentTime); 
    strftime(dateFormat, sizeof(dateFormat), "%Y-%m-%d %H:%M:%S", localTime);
    printf("Current Date and Time: %s\n", dateFormat);
    return 0;
}