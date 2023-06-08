// a self contained lisp interpreter
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _LISP_DEBUG

static void* memdup(void* src, size_t length) {
  return memcpy(malloc(length), src, length);
}
#define ALLOC(type, ...) \
  (type *)memdup((type []){__VA_ARGS__}, sizeof(type))

typedef struct token {} Token;
typedef struct node {} Node;
typedef struct object {} Object;

int main(int argc, char** argv) {

  return 0;
}
