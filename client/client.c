#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    // ソケットを作成
    // args = domain, type, protocol
    // AF_INET = ipv4
    // SOCK_STREAM = TCP
    // 0だと自動的に選択
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        printf("ソケットが作れませんでした〜〜〜！\n");
        exit(0);
    }

    // サーバのホスト名をDNSサーバに問い合わせる
    char url[] = "www.google.com";
    // hostent構造体について https://learn.microsoft.com/ja-jp/windows/win32/api/winsock/ns-winsock-hostent
    struct hostent *server;
    server = gethostbyname(url);
    if (server == NULL) {
        printf("サーバが見つかりませんでした〜〜!\n");
        exit(1);
    }

    // sockaddr構造体について https://learn.microsoft.com/ja-jp/windows/win32/api/ws2def/ns-ws2def-sockaddr_in
    struct sockaddr_in serv_addr;

    serv_addr.sin_family = AF_INET;  // ipv4に設定
    memcpy((char *)&serv_addr.sin_addr.s_addr, (char *)server->h_addr, server->h_length);
    // memcpy(コピー先, コピー元, コピーする長さ)
    // htons でポート番号のバイトオーダーをビッグエンディアンに変換してあげる (ネットワークバイトオーダーに変えてあげる)
    // https://www.youtube.com/watch?v=tVQ0F8S4G-c
    serv_addr.sin_port = htons(80); // ポート番号を設定

    printf("%hu", htons(80));
}