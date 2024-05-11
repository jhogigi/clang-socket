#include <stdio.h>
#include <assert.h>


int main(void) {
    int array[] = {10,11,12,13,14}; // 数値型なので各valueの大きさは4バイト
    int *p;
    p = array; // 配列の場合はポインタ定数のあので &array にしなくてもアドレスを返す
    for (int i = 0; i < 5; i++) {
        // 配列の参照の仕方
        assert(*p == array[i]); // 値の参照: ポインタ変数, ポインタ定数
        assert(p == &array[i]); // アドレスの参照: ポインタ変数, ポインタ定数
        p++;
    }
    puts("OK");
}