#include "unity.h"
#include "expression.h"
#include "mock_tokenizer.h"
#include "mock_tokenizerstring.h"
#include "CException.h"
#include "Exception.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_computeExpression_given_2_plus_3_should_return_5(void){
  int result;
  char *str = "256 + 38";
  TokenizerString tokStr = {str , 0};  //being mock
  TokenInt firstval =  {INT_NUM,256};   //being mock
  
  //                                  input    , expect_output
  tokenizeStringCrete_ExpectAndReturn (str     ,     tokStr);
  tokenize_ExpectAndReturn            (&tokStr ,   (Token *)&firstval);
  
  result  = computeExpression(str);
  TEST_ASSERT_EQUAL(294 , result);
    
}
