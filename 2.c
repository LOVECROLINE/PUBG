#include<stdio.h>
int main(){
    int i;
    double lirun;
    double a;
    double jiangjin = 0;
    float ticheng[] = {0,0.1, 0.075, 0.05, 0.03, 0.015, 0.01};    
    printf("您好，请问您的净利润是多少？\n");
    scanf("%lf", &lirun);
    a=lirun;
    float fanwei[] = {0,100000, 200000, 400000, 600000, 1000000, a};
    for (i=1;i<7;i++) {
        if (a < fanwei[i]){
        jiangjin += lirun * ticheng[i];
            break;        
        }       
        else   
        {       
            jiangjin += (fanwei[i]-fanwei[i-1]) * ticheng[i];  
            lirun -= fanwei[i];    
        }
    }  
    printf("奖金是%.2lf\n", jiangjin);

    return 0;
}
