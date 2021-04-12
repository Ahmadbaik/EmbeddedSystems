#include <stdio.h>

int power(int base,unsigned int pwr);
int main(){
    int base;
    unsigned int pwr;
    printf("Enter base number: ");
    scanf(" %d",&base);
    printf("Enter Power Number: ");
    scanf(" %d",&pwr);
    printf("%d ^ %d = %d",base,pwr,power(base,pwr));

    return 0;
}

int power(int base,unsigned int pwr){
    
    if(pwr ==0 ){
        return 1;
    }else{
        return base * power(base,--pwr);
    }

}