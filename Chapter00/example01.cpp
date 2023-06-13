//
// Created by PLO D on 2023/06/12.
//

#include <cstdio>
#include <cstdlib>

/*
 * 1. Pointer & Array
    * parameter int array [] 인 경우 : array는 배열의 첫번째 칸의 메모리 주소를 저장하고 있는 변수가 할당됨.
    * parameter int * array인 경우   : 배열의 첫번째 칸의 메모리 주소를 저장하고 있는 포인터 변수가 할당됨.
    * 위 두가지 경우는 동일함
*/
int caculate_sum(int *array) {
    int sum, i;
    sum = 0;
    for (i = 0; i < 10; i++)
        sum += array[i];

    return sum;
}

/*int main() {
    int sum, i, average;

    int num[10]; // 배열의 첫번째 칸의 메모리 주소를 저장하는 포인터 변수이다.

    for (i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    sum = caculate_sum(num);

    average = sum / 10;
    printf("%d\n", average);
    return 0;
}*/

/*
 * 2. Pointer Arithmetic
    * 포인터 변수가 가르키는 메모리 주소 다음의 메모리 주소 ex) *(a+1)
*/

/*int main() {
    // int형 배열
    int data1[] = {1 ,2 ,3 };
    // char형 배열
    char data2[] = {'1' ,'2' ,'3' };
    // long long형 배열
    long long data3[] = {1 ,2 ,3 };

    int *p = &data1[0];
    char *q = &data2[0];
    long long *r = &data3[0];

    // 8진수 = %o , 10진수 = %d , 16진수 = %x
    printf("int형 배열의 메모리 주소 할당 확인\n");
    printf("%d %x\n" , p ,p );
    printf("%d %x\n" , p+1 ,p+1);
    printf("%d %x\n" , p+2 ,p+2);

    printf("char형 배열의 메모리 주소 할당 확인\n");
    printf("%d %x\n" , q , q);
    printf("%d %x\n" , q+1 ,q+1);
    printf("%d %x\n" , q+2 ,q+2);

    printf("long long형 배열의 메모리 주소 할당 확인\n");
    printf("%d %x\n" , r ,r );
    printf("%d %x\n" , r+1 , r+1);
    printf("%d %x\n" , r+2 ,r+2);
}*/

/*
 * 3. 동적 메모리 할당
    * 변수를 선언하는 대신 프로그램의 요청으로 메모리를 할당할 수 있다. 이것을 동적 메모리 할당(dynamic memory allocation)이라고 부른다.
    * Malloc 함수를 호출하여 동적 메모리 할당을 요청하면 요구하는 크기의 메모리를 할당하고 그 시작 주소를 반환한다.
*/

/*int main() {
    char *p;
    // malloc library 사용하여 char data 40개 크기의 빈 배열 생성
    p = (char *) malloc(40);
    if (p == NULL) {
        printf("동적 메모리 할당 실패");
    }

    p[0] = '1';
    p[1] = '2';
    // Pointer Arithmetic을 활용한 배열의 원소 할당
    *(p + 2) = '3';
    *(p + 3) = '4';

    for (int i = 0; i < 4; i++) {
        printf("%c", p[i]);
    }
}*/

/*
 * 4. 동적 배열
    *
*/
int main(){

}