//
// Created by PLO D on 2023/06/10.
//

#include <cstdio>
#include <cstdlib>
// string.h 라이브러리는 문자열을 다루는 다양한 함수를 제공
#include <string.h>

/*
 * 1.문자열
    * 문자열은 char Type 배열에 하나씩 저장됨
*/
/*
int main() {
    char str[6];
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0'; // null character('\0')은 문자열의 끝을 표시하는 역할을 한다, 즉 배열의 크기가 문자열의 길이보다 적어도 1만큼 길어야한다.

    *//* c 언어는 문자열을 생성하는 편리한 방법을 제공한다.
         * 하지만 아래와 같이 정의된 문자열은 수정이 불가능하다는 점에서 위의 두 방법과 다르다 이것을 String literal 이라고 부른다.
         * 문자열의 끝을 지정해줌으로써 얼마만큼의 메모리를 실제 데이터가 차지하고 있으며 dummy 메모리를 차지하고 있지는 않은지 확인이 가능하다.
         * 실제로 printf 등의 라이브러리는 null character가 존재함을 전제로 개발되어 있다.
    *//*
    char str1[] = "hello";
    // char *str1 = "hello"; => 불가능하다.
    printf("%s" , str1);
}
*/

//#####################################################################################################################

/*
 * 2.여러개의 단어들을 포인터를 이용하여 저장해보자
*/
/*
# define BUFFER_SIZE 100
int main(){
    char * words[100];
    int n = 0; // number of strings
    char buffer[BUFFER_SIZE];
    // words 배열이 실제 char data를 저장하고 있는 포인터 배열이기 때문에
    // scanf : 키보드로 입력되는 변수를 읽는다.
    // End Of File : 파일의 끝에 도달하기 전까지 (사용자가 입력한 문자 끝에 도달하기 전까지)
    // scanf("%d" , &a) a의 주소를 출력
    // * 사용자가 키보드로 입력한 문자를 word의 n번째에 저장하라
    while (n < 4 && scanf("%s" , buffer) != EOF){
        *//*words[n] = buffer;
         * 두개의 포인터 변수간에 취합문이기 때문에 buffer의 포인터 값을 words[n]번째에 저장하며 buffer도 포인터 변수이며 buffer가 가르키고 있는 메모리 주소는 변하지 않는다.
         * buffer는 포인터 변수이기에 buffer에 저장되는 값은 사용자가 입력할 때 마다 입력하는 문자열로 덮어씌워진다.
         * 입력 받는 모든 문자열이 buffer가 가르키고 있는 메모리 주소에 저장되며 words의 n번째에는 buffer가 가르키고 있는 메모리 주소가 저장되기 때문에 결과적으로 words는 마지막으로 입력된 문자가 저장된다.
        *//*
        // words[n] = buffer;

        *//*
         * 위와 같은 문제를 해결하기 위해 buffer에 입력된 문자열을 카피하여 words의 n번째에 저장한다.
         * strcpy(array1 , array2) || strcpy(str1 , str2)
         * strdup : fosix 표준에 속하는 라이브러리 허나 대부분의 c 컴파일러는 strdup를 지원한다. 허나 c 표준에 속해있지 않기 때문에 사용을 자제할 것
            * 매개 변수로 하나의 문자열을 입력받아 문자열의 복제본을 생성 후 복제본의 주소를 리턴한다.
        *//*
        words[n] = strdup(buffer);
        n++;
    };
    for (int i = 0; i<4; i++)
        printf("%s\n" , words[i]);
}
 */
// strdup 직접 구현하기
/*
char * strdup(char *s){
    char *p;
    p = (char *)malloc(strlen(s) + 1);
    if (p != NULL)
        strcpy(p,s);
    return p;
}*/

//#####################################################################################################################
/*
 * 3.txt 파일을 읽고 써보자
*/

int main(){
    //input.txt 를 output.txt에 쓰기
    FILE *in_fp = fopen("/Users/plod/Desktop/2_PloStudy/30_DataStructureInC/02_InflearnProject/input.txt" , "r");
    FILE *out_fp = fopen("/Users/plod/Desktop/2_PloStudy/30_DataStructureInC/02_InflearnProject/output.txt" , "w");
    char buffer[100];
    while (fscanf(in_fp, "%s", buffer) != EOF) {
        fprintf(out_fp, "%s \n", buffer);
    }
    fclose(in_fp);
    fclose(out_fp);

    // 파일 읽기
//     FILE * fp = fopen("/Users/plod/Desktop/2_PloStudy/30_DataStructureInC/02_InflearnProject/input.txt" , "r");
//     char buffer[100];
//     while (fscanf(fp , "%s" , buffer) != EOF)
//         printf("%s \n" , buffer);
//     fclose(fp);
}