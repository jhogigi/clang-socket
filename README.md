# C言語でソケット通信をやってみるやつ

# 実行方法
- 環境構築 -> コンパイル -> 実行 の手順
```
# イメージのビルド
docker build . -t clang

# コンテナ起動
docker run -v "$PWD/sample_program:/home"  --rm -it clang /bin/ash

# コンパイル
gcc -o hello hello.c 

# 実行
./hello
```