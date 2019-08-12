#include <stdio.h>
#include <stdlib.h>

/*function prototype*/
int encryption(int);
int decryption(int);
int checkFourDigit(int);
int originalDigit(int);

int main(){
    int fourdigit;
    int en_fourdigit;
    int de_fourdigit;
    
    printf("Enter a four-digit integer :");
    scanf("%d\n", &fourdigit);
    
    en_fourdigit = encryption(fourdigit);
    
    printf("Before encryption, the four-digit integer was :%d\n"
           "After encryption, the new four-digit integer is : %d\n", fourdigit, en_fourdigit);
    
    de_fourdigit = decryption(en_fourdigit);
    
    printf("Before decryption, the encrypted four-digit integer was :%d\n"
           "After decryption, the decryptioned four-digit integer is : %d\n", en_fourdigit, de_fourdigit);
    
    return 0;
}

int encryption(int de){
    int one, two ,three, four;
    int en;
    
    //check four-digit of integer for input
    if(checkFourDigit(de)){
       
       one   = ((de/1000)%10+7)%10;
       two   = ((de/100)%10+7)%10;
       three = ((de/10)%10+7)%10;
       four  = ((de%10)+7)%10;
    }
    
    //swap positions for each digits 
    en = two+one*10+four*100+three*1000;
    
    return en;
}

int decryption(int en){
    int one, two, three, four;
    int de;
    
    //check four-digit of integer for input
    if(checkFourDigit(en)){
       
       one   = (de/1000)%10;
       two   = (de/100)%10;
       three = (de/10)%10;
       four  = (de%10);
       
       one   = originalDigit(one);
       two   = originalDigit(two);
       three = originalDigit(three);
       four  = originalDigit(four);
    }

    //swap positions for each digits
    de = two+one*10+four*100+three*1000;
    
    return de;
}

int checkFourDigit(int d){
    
    if((d/1000)<10 && (d/1000) >=0){
        return 1;
    }else{
        return 0;
    }
}

int originalDigit(int digit){
    
    if(digit>=0 && digit <=6){
        digit+=10;
        digit-=7;
    }else{
        digit -=7;
    }
    
    digit%=10;
    
    return digit;
}
