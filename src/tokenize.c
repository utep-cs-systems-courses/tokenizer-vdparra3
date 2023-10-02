#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

int space_char(char c){
  if((c == '\t' || c == ' ')&& c != '\0')return 1;
  else return 0;
}
//\0 indicate end of string
int non_space_char(char c){
  if((c == '\t' || c == ' ')&& c == '\0')return 0;
  else return 1;
}
//iterate through given string until we reach nonSpace char
// if space char -> increment by 1 until we find nonSpace char
//str is already a pointer to a char
char *token_start(char *str){
  //int i = 0;
  while(*str != '\0'){
    if(non_space_char(*str)){
      return str;
  }
    str++;
  }
  return NULL;//in case if there is just space char
}
char *token_terminator(char *token){
  while(*token != '\0'){
    if(space_char(*token)){
	return token;
	token++;
      }
      return token;
   }
}
int count_tokens(char *str){
  int counter;
  counter = 0;
 START:
  if(str == token_terminator(str)){
    goto DONE;
  }
  if(str == token_start(str)){
      counter++;
      goto START;
  }
 DONE:
  return counter;
 }
char *copy_str(char *inStr, short len){
  char *str;
  int i;
  
}
char **tokenize(char *str){
  char **tokens;
  int counter, i;
  
}
void print_tokens(char **tokens){
  while(*tokens){
    printf("%s\n",*tokens++);
  }
}
void free_token(char **tokens){
  char **temp;
  for(temp = tokens;*temp;free(*temp++));
  free(tokens);
}

