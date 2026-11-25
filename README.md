# Implementação VM

Simulador de memória virtual em C: traduz endereços lógicos de 16 bits em endereços físicos, com tabela de páginas, TLB e substituição de páginas.

- Páginas e frames de 256 bytes, 256 páginas, **128 frames** na memória física.
- TLB com 16 entradas, buscada com **uma thread por entrada**.
- Substituição de página e de TLB: `fifo` ou `lru`.

## Compilar

```bash
make
```

Gera o executável `vm`. Para limpar: `make clean`.

## Executar

```bash
./vm <arquivo_de_enderecos> <fifo|lru> <fifo|lru>
```

1º argumento: arquivo de endereços. 2º: algoritmo de substituição de **página**. 3º: algoritmo de substituição da **TLB**.

```bash
./vm addresses.txt lru fifo
```

Requer `BACKING_STORE.bin` na pasta de execução. A saída é escrita em `correct.txt`.

## Erros

Argumentos inválidos ou arquivo de endereços inexistente, ilegível ou mal formatado geram uma mensagem de erro e encerram o programa com código 1.

## Arquivos

- `vm.c`, `vm.h`: código-fonte
- `Makefile`: compilação e limpeza
- `evidencias.log`: evidências de execução
