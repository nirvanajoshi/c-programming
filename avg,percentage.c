/*WAP to find avarage in 5 sub and percentage*/
#include<stdio.h>
int main()
{
    int eng,sci,math,comp,nep;
    float avg,per;
    printf("Enter marks in English");
    scanf("%d",&eng);
    printf("Enter marks in Science");
    scanf("%d",&sci);
    printf("Enter marks in Math");
    scanf("%d",&math);
    printf("Enter marks in Computer");
    scanf("%d",&comp);
    printf("Enter marks in Nepali");
    scanf("%d",&nep);
    avg = (eng+sci+math+comp+nep)/5;
    printf("Avarage : %f",avg);
    per = ((eng+sci+math+comp+nep)/500)*100;
    printf("percentage : %f",per);
    return 0;

}