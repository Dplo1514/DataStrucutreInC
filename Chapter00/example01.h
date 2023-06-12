//
// Created by PLO D on 2023/06/12.
//

#ifndef INC_02_INFLEARNPROJECT_EXAMPLE01_H
#define INC_02_INFLEARNPROJECT_EXAMPLE01_H


#include <cstdio>

class example01 {

    int main() {
        int sum, i, average;

        int num[10]; // 배열의 첫번째 칸의 메모리 주소를 저장하는 포인터 변수이다.

        for (i = 0; i < 10; i++)
            scanf("%d", &num[i]);

        sum = caculate_sum(num);

        average = sum / 10;
        printf("%d\n", average);
        return 0;
    }

    // parameter가 int array [] 인 경우 : array는 배열의 첫번째 칸의 메모리 주소를 저장하고 있는 변수가 할당됨.
    // parameter가 int * array인 경우   : 배열의 첫번째 칸의 메모리 주소를 저장하고 있는 포인터 변수가 할당됨.
    // 위 두가지 경우는 동일함
    int caculate_sum(int *array) {
        int sum, i;
        sum = 0;
        for (i = 0; i < 10; i++)
            sum += array[i];

        return sum;
    }
};

//class pointer_arithmetic {
//
//    int main() {
//        int data[] = {1,2,3};
//        char data2[] = {'a' , 'b' , 'c'};
//        long long data3[] = {1,2,3};
//
//        int *p = &data[0];
//        char *q = &data2[0];
//        long long *r = &data3[0];
//
///*        // int 형 (4byte) 메모리 주소 출력
//        printf("%d %x \n",p,p);
//        printf("%d %x \n",p+1,p+1);
//
//        // char 형 (1byte) 메모리 주소 출력
//        printf("%d %x \n",q,q);
//        printf("%d %x \n",q+1 , q+1);
//
//        // long long 형 (8byte) 메모리 주소 출력
//        printf("%d %x \n",r,r);
//        printf("%d %x \n",r+1,r+1);*/
//
//
//        return 0;
//    }
//};



#endif //INC_02_INFLEARNPROJECT_EXAMPLE01_H
