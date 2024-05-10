#include <sys/socket.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    // PF_INET = ipv4プロトコルだよ〜
    // SOCK_STREAM = TCPプロトコルだよ〜　
    // 要するに TCP/IPだよ〜
    int sock = socket(PF_INET,SOCK_STREAM,0);
    if (sock < 0) {
        printf("socket failure!");
        exit(0);
    }
}