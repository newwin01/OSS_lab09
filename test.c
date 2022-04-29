#include <stdio.h>

int cal_result(int count){
    int result=0;
    for(int i=1;i<=count;i++){
        result=result+i;
    }
    return result;
}

int main(){
    int count = 0;
    int result = 0;
    printf("카운트까지 모든 숫자를 더합니다. 숫자를 입력하세요!(0부터): ");
    scanf("%d",&count);
    result=cal_result(count);
    printf("%d",result);
    return 0;
}