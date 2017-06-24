#ifndef _TOKENIZER_H
#define _TOKENIZER_H

typedef enum{
  
 IDENTIFIER, 
  INT_NUM,
FLOAT_NUM,
OPERATOR,
Token_type;
}

//Generic token
typedef struct Token Token;
struct Token {
  TokenType id;
  void *data;
};

/
typedef struct TokenId TokenId;
struct TokenId {
  TokenType id;
  char* name;
};
typedef struct TokenInt TokenInt;
struct TokenInt {
  TokenType id;
  int value;
};
typedef struct TokenFloat TokenFloat;
struct TokenFloat {
  TokenType id;
  double value;
};  
typedef struct TokenOp TokenOp;
struct TokenOp {
  TokenType id;
  Token *left;
  Token *right;
};  
typedef struct String TokenizerString;
struct TokenizerString {
  char *data;
  int index;
};  
#endif // _TOKENIZER_H
