#include <stdio.h>
#include <stdlib.h>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7


int main(void){
    
    //given value
    int nth_week;
    int DAY;

    //derived value
    int nth_Day;
    int K;
    char* day;
    
    printf("Enter the first day on the week day\n"
           "1:MON\n"
           "2:TUE\n"
           "3:WED\n"
           "4:THU\n"
           "5:FRI\n"
           "6:SAT\n"
           "7:SUN\n"
           );
    scanf("%d", &DAY);
    
    printf("Enter the nth-week:");
    scanf("%d", &nth_week);

    switch(DAY){
        case(MON):
        
            K = -1;
            day = "MON";
            break;
        
        case(TUE):
            
            K = 0;
            day = "TUE";
            break;
        
        case(WED):
        
            K = 1;
            day = "WED";
            break;
        
        case(THU):
        
            K = 2;
            day = "THU";
            break;
        
        case(FRI):
        
            K = 3;
            day = "FRI";
            break;
        
        case(SAT):
        
            K = -3;
            day = "SAT";
            break;
        
        case(SUN):
        
            K = -2;
            day = "SUN";
            break;
        
        defalut:
            printf("error");
    }
    
    nth_Day = nth_week*7-(K);
    
    printf("The first day on %s \n"
           "%d-th week Monday is the %d day of month.\n", day, nth_week, nth_Day);

    return 0;
}