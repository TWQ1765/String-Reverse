#include <stdio.h>
#include "expression.h"
#include "tokenizer.h"
#include "CException.h"
#include "Exception.h"

int computeExpression(char *str){
  //Implement code here
 
  TokenizerStirng *tokStr;
  Token *token ;
  tokenInt *tokenInt;

  printf("expr: %s\n",str);
  tokStr = tokenizerStringCreate(str);    //being mock
  token = tokenize(tokStr);               //being mock

   
  if (token->id == INT_NUM){
    tokenInt = (TokenInt *)token);
    printf("the val of the int token is token %d\n" , tokenInt->value);
  }else{
    Throw(createException("First token is not a number",1);
  }
  return 0;
}
