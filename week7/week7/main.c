//
//  main.c
//  week7
//
//  Created by 정민형 on 10/16/25.
//

#include <stdio.h>

int inc(int counter);

int main(void) {
    
    int i = 0;
    printf("함수 호출 전 i = %d\n",i);
    i= inc(i);
    printf("함수 호출 후 i = %d\n",i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter; //반환값을 이용해서 외부에서 사용
}
