#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){
  char str[50];
  while(1){
    fputs(">",stdout);
    fgets(str,sizeof(str),stdin);
    puts(str);
    
  }
}
