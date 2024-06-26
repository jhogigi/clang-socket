#include "stdio.h"
#include "stdlib.h"

int main(void) {
    int x;
    int *p; // 整数型のポインタ変数
    x = 10;

    p = &x; // xのアドレス参照 pにxのアドレスを入れてあげる

    // 0xffffe9d7bb2c が表示される 　変数xのアドレス
    printf("p の中身は (%p) です\n", p);
    //　0xffffe9d7bb2c が表示される
    printf("x のアドレスは（%p）です\n", &x);

    // 10 が表示される。 ポインタ変数が指しているアドレスの値 = xの値
    printf("p の格納先の値は（%d）です\n", *p);
    // 10が表示される
    printf("x のなかみは（%d）です\n", x);

    // **********************************************************************
    // ポイント
    // &x はxが格納されているメモリ上のアドレスを16新数で返す
    // *p は整数型のポインタ変数を宣言する
    // ポインタ変数には、16進数のアドレス自体を代入できるので、p = &x
    // ポインタ変数のアドレスを参照するには p
    // ポインタ変数のアドレス先の値を参照するには *p

    // longやfloatなど8バイトメモリを消費するような値と比べると
    // ポインタ変数は4バイトのメモリしか消費しないので、メモリの節約になる
    // **********************************************************************
}