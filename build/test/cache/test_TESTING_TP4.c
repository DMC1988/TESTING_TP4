#include "build/test/mocks/mock_sapi.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "src/font.h"
#include "src/PCD8544.h"


extern uint8_t cacheMemLcd[(6 * 84)];



void setUp(void){



    gpioWrite_CMockIgnore();

    gpioInit_CMockIgnore();

    spiConfig_CMockIgnore();

    delay_CMockIgnore();

    spiWrite_CMockIgnore();



}



void tearDown(void){



}











void test_writeToPCD8544_isData(void){



    int ret;



    ret = writeToPCD8544(0x21, 1);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((ret)), (

   ((void *)0)

   ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_UINT8);

}











void test_writeToPCD8544_isCMD(void){



    int ret;



    ret = writeToPCD8544(0x21, 0);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((ret)), (

   ((void *)0)

   ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_UINT8);

}











void test_initPCD8544(void){

    int ret;



    ret = initPCD8544();



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((ret)), (

   ((void *)0)

   ), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_UINT8);



}











void test_clearPCD8544(void){

    uint16_t i = 0;



    clearPCD8544();



    for(i = 0; i < (6 * 84); i++){



         UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((cacheMemLcd[i])), (

        ((void *)0)

        ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_UINT8);



   }



}











void test_clearPCD8544_ret(void){

    

   _Bool 

        ret;



    ret = clearPCD8544();



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((ret)), (

   ((void *)0)

   ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_UINT8);



}











void test_wrtStrPCD8544(void){

    char str[] = "TEST";

    uint8_t nChar = 0;



    nChar = wrtStrPCD8544(str);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((sizeof(str))), (UNITY_INT)(UNITY_UINT8 )((nChar)), (

   ((void *)0)

   ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_UINT8);

}
