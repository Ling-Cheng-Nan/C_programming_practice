#include<stdio.h>
#include<stdlib.h>

void EnterGasMiles(void);

int main(){
    
    EnterGasMiles();
    return 0;
}

void EnterGasMiles(){
    double gallon = 0, mile = 0, milePerGallon = 0;
    double totalGallons = 0, totalMiles = 0;
    
    do{  
        printf("Enter the gallons used (-1 th end) : ");
        scanf("%lf", &gallon);
        if(gallon == -1){
            break;
        }
        else{
        
            printf("Enter the miles driven : ");
            scanf("%lf", &mile);
        
            milePerGallon = mile/gallon;
            printf("the miles per gallon for this tank was : %lf miles/gallon \n", milePerGallon);
            
            //accumulate amount of miles driven & gas used
            totalGallons += gallon;
            totalMiles   += mile;
        }
    }while(gallon != -1);
    
    if(totalGallons == 0 ){
        milePerGallon = 0;
    }
    else{    
        milePerGallon = totalMiles/totalGallons;
    }
    
    printf("the total miles is : %lf\n"
           "the total gallons of gas is : %lf\n"
           "the average of overall miles per gallon is : %lf miles/gallon\n"
           , totalMiles, totalGallons, milePerGallon);
}
