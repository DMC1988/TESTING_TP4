
#include "PCD8544.h"
#include "font.h"
#include "unity.h"
#include "mock_sapi.h" 

extern uint8_t cacheMemLcd[SIZEMEM];

void setUp(void){
    
    gpioWrite_Ignore();
    gpioInit_Ignore();
    spiConfig_Ignore();
    delay_Ignore();
    spiWrite_Ignore();

}

void tearDown(void){

}


/*
/brief  Testeo de escritura de dato en el display.
*/
void test_writeToPCD8544_isData(void){
    
    int ret;

    ret = writeToPCD8544(0x21, isDATA);

    TEST_ASSERT_EQUAL_UINT8(SUCCESS, ret);
}


/*
/brief  Testeo de escritura de comando en el display.
*/
void test_writeToPCD8544_isCMD(void){
    
    int ret;
   
    ret = writeToPCD8544(0x21, isCMD);

    TEST_ASSERT_EQUAL_UINT8(SUCCESS, ret);
}


/*
/brief  Testeo de inicialización de display.
*/
void test_initPCD8544(void){
    int ret;

    ret = initPCD8544();

    TEST_ASSERT_EQUAL_UINT8(SUCCESS, ret);

}


/*
/brief  Testeo de borrado de pantalla.
*/
void test_clearPCD8544(void){
    uint16_t i = 0;

    clearPCD8544();

    for(i = 0; i < SIZEMEM; i++){

         TEST_ASSERT_EQUAL_UINT8(0, cacheMemLcd[i]);
   
   }

}


/*
/brief  Testeo de borrado de pantalla.
*/
void test_clearPCD8544_ret(void){
    bool ret;

    ret = clearPCD8544();

    TEST_ASSERT_EQUAL_UINT8(SUCCESS, ret);

}


/*
/brief  Testeo de escritura de string.
*/
void test_wrtStrPCD8544(void){
    char str[] = "TEST";
    uint8_t nChar = 0;

    nChar =  wrtStrPCD8544(str);

    TEST_ASSERT_EQUAL_UINT8(sizeof(str), nChar);
}
