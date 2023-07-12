//
// Created by PLO D on 2023/06/10.
//

#include <cstdio>
#include <cstdlib>
// string.h 라이브러리는 문자열을 다루는 다양한 함수를 제공
#include <string.h>

/*
 * FIXME
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
 * FIXME
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
         * strdup : fosix 표준에 속하는 라이브러리 허나 대부분의 c 컴파일러는 strdup를 지원한다. 허나 c 표준에 속해있지 않기 때문에 사용을 자제할 것 (posix standard)
            * 매개 변수로 하나의 문자열을 입력받아 문자열의 복제본을 생성 후 복제본의 주소를 리턴한다.
        *//*
        words[n] = strdup(buffer);
        n++;
    };
    for (int i = 0; i<4; i++)
        printf("%s\n" , words[i]);
}
 */

//#####################################################################################################################

/*
 * FIXME
    * 3.strdup 직접 구현하기
*/
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
 * FIXME
    * 4.txt 파일을 읽고 써보자
*/

/*
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
    FILE * fp = fopen("/Users/plod/Desktop/2_PloStudy/30_DataStructureInC/02_InflearnProject/input.txt" , "r");
    char buffer[100];
    while (fscanf(fp , "%s" , buffer) != EOF)
        printf("%s \n" , buffer);
    fclose(fp);
}
*/

//#####################################################################################################################

/*
 * FIXME
    * 5.문자열 예제 [ 1 ]
*/
/*
int read_line ( char str[] , int limit );
#define BUFFER_SIZE 20
int main(void)
{
    char buffer[BUFFER_SIZE];
    while (1) {
        printf("$ ");
        */
/*
         * 1
            scanf("%s")
            * 사용자가 입력한 문장을 공백 단위로 끊어서 입력받음 그렇기에 공백을 포함하는 로직에서 부적절하다.
            * scanf("%s" , buffer);
         *//*


        */
/*
         * 2
            gets(buffer)
            * 사용자가 입력한 문장을 줄바꿈 단위로 끊어서 입력받음 (buffer 사이즈 상관 X)
            * warning: this program uses gets(), which is unsafe.
            * buffer 사이즈 이상의 문자열을 입력해도 출력이 가능하다.
            * gets(buffer);
         *//*


        */
/*
         * 3
            fgets(buffer , BUFFER_SIZE , stdin)
            * 임의의 파일로부터 데이터를 입력받을 수 있는 함수 ( new line char (\n) 까지 읽어서 buffer에 저장한다. )
            * BUFFER_SIZE 만큼 읽고 한번 더 반복되어 나머지 글자를 한번 더 읽는다.
            * buffer        : 저장될 객체
            * BUFFER_SIZE   : 해당 BUFFER_SIZE 만큼만 데이터를 입력받는다.
            * stdin         : 표준 입력파일에 대한 포인터 (키보드로 입력받는 것에 대한 포인터)

            '''C++
                fgets(buffer , BUFFER_SIZE , stdin);
                // new line char (\n)을 null char로 바꾼다.
                // '\0' : null char
                buffer[strlen(buffer) -1 ] = '\0';

                // %s -> 사용자가 입력한 문장을 출력 [ (buffer) ]
                // %d -> 사용자가 입력한 문장의 길이를 출력 [ strlen(buffer) ]
                printf("%s:%d\n" , buffer , strlen(buffer));
            '''
         *//*



        // %s -> 사용자가 입력한 문장을 출력 [ (buffer) ]
        // %d -> 사용자가 입력한 문장의 길이를 출력 [ strlen(buffer) ]
        int len = read_line(buffer , BUFFER_SIZE);
        printf("%s:%d\n" , buffer , len);
    }
    return 0;
}
// string의 lenth를 리턴하는 함수를 직접 만들어 사용한다.
int read_line(char str[] , int limit) {
    int ch, i = 0;  // ch는 현재 입력된 문자를 저장하는 변수, i는 문자열의 인덱스 변수
    // getchar 함수를 사용하여 개행 문자를 만날 때까지 입력을 받음
    while ((ch = getchar()) != '\n')
        // 문자열의 길이가 제한을 넘지 않은 경우에만 실행
        if (i < limit -1)
            str[i++] = ch;  // 입력된 문자를 문자열에 저장하고 인덱스를 증가시킴

    str[i] = '\0';  // 문자열의 마지막에 널 문자를 추가하여 문자열을 종료
    return i;  // 입력된 문자열의 길이를 반환
}
 */

//#####################################################################################################################

/*
* FIXME
    * 6.문자열 예제 [ 2 ]
*/
int read_line_with_compression ( char compressed[] , int limit);
#include <ctype.h>
int main(void)
{
    char line[80];
    while (1) {
        printf("$ ");
        int length = read_line_with_compression(line , 80);
        printf("%s:%d\n" , line , length);
    }
}

int read_line_with_compression(char compressed[], int limit) {
    int ch, i = 0;  // ch는 현재 입력된 문자를 저장하는 변수, i는 압축된 문자열의 인덱스 변수

    // getchar 함수를 사용하여 개행 문자를 만날 때까지 입력을 받음
    while ((ch = getchar()) != '\n') {
        // i가 limit-1보다 작고, 공백 문자가 아니거나 i가 0보다 크고 이전 문자가 공백 문자가 아닌 경우에 실행
        if (i < limit - 1 && (!isspace(ch) || (i > 0 && !isspace(compressed[i - 1]))))
            compressed[i++] = ch;  // 입력된 문자를 압축된 문자열에 저장하고 인덱스를 증가시킴
    }

    // 압축된 문자열의 마지막 문자가 공백 문자인 경우 i를 감소시킴
    if (i > 0 && isspace(compressed[i - 1]))
        i--;

    compressed[i] = '\0';  // 압축된 문자열의 마지막에 널 문자를 추가하여 문자열을 종료
    return i;  // 압축된 문자열의 길이를 반환
}


