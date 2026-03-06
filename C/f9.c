#include<stdio.h>
float result(float a, float b,float c){
  float  m = (a+b+c)/3;
    return m;
}
void conceito(float m){
    if(m>=9){
        printf("conceito A\n");
    }else if(m>=7 && m>9){
        printf("conceito B\n");
    }else if(m>=6 && m<7){
        printf("conceito C\n");
    }else if(m>=4 && m<6 ){
        printf("conceito D\n");
    }else if(m<4){
        printf("conceito E\n");
    }

    }
    int main(){
    float a,b,c,m;
    
    printf("digite as 3 notas:\n");
    scanf("%2f%2f%2f",&a,&b,&c);
    m=result(a,b,c); 
    conceito(m);
    printf("sua media foi %2f",m);
    return 0;  
    }
