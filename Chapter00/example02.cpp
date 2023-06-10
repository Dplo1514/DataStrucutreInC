//
// Created by PLO D on 2023/06/10.
//

#include <cstdio>

class array {

    int main() {
        int sum , i , average;

        int num[10]; // 배열의 첫번째 칸의 메모리 주소를 저장하는 포인터 변수이다.

        for ( i = 0 ; i< 10; i++)
            scanf("%d", &num[i]);

        sum = caculate_sum( num );

        average = sum / 10;
        printf("%d\n" , average);
        return 0;
    }

    // parameter가 int array [] 인 경우 : array는 배열의 첫번째 칸의 메모리 주소를 저장하고 있는 변수가 할당됨.
    // parameter가 int * array인 경우   : 배열의 첫번째 칸의 메모리 주소를 저장하고 있는 포인터 변수가 할당됨.
    // 위 두가지 경우는 동일함
    int caculate_sum(int * array)
    {
        int sum, i;
        sum = 0;
        for ( i = 0 ; i< 10; i++)
            sum += *(array+i); // instead of array[i] (pointer_arithmetic)

        return sum;
    }
};
