#include "../inc/banking.h"
#include "../unity/unity.h"

void setUp()
{
   
}
void tearDown()
{
} 

void test_phone(void){
    TEST_ASSERT_EQUAL_INT(1,1);     //char
}
void test_ac(void){
    TEST_ASSERT_EQUAL_INT(2,(2));      //char
}
void test_password(void){
    TEST_ASSERT_EQUAL_INT(3,(3));      //char
}
void test_balance(void){
    TEST_ASSERT_EQUAL_INT(4,(4));     //float
}
int main (void){
    UNITY_BEGIN();
    RUN_TEST(test_phone);
    RUN_TEST(test_ac);
    RUN_TEST(test_password);
    RUN_TEST(test_balance);
    return UNITY_END();
}