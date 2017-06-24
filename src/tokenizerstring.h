#ifndef _TOKENIZERSTRING_H
#define _TOKENIZERSTRING_H

typedef struct String TokenizerString;
struct TokenizerString {
  char *data;
  int index;
}; 

TokenizerString *tokenizerStringCreate(char *str);
void tokenizerStringFree(TokenizerString *tokstr);
  
  

#endif // _TOKENIZERSTRING_H
