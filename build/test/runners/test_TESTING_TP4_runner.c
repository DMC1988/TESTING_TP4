/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "mock_sapi.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_writeToPCD8544_isData(void);
extern void test_writeToPCD8544_isCMD(void);
extern void test_initPCD8544(void);
extern void test_clearPCD8544(void);
extern void test_wrtStrPCD8544(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_sapi_Init();
}
static void CMock_Verify(void)
{
  mock_sapi_Verify();
}
static void CMock_Destroy(void)
{
  mock_sapi_Destroy();
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_TESTING_TP4.c");
  run_test(test_writeToPCD8544_isData, "test_writeToPCD8544_isData", 24);
  run_test(test_writeToPCD8544_isCMD, "test_writeToPCD8544_isCMD", 36);
  run_test(test_initPCD8544, "test_initPCD8544", 48);
  run_test(test_clearPCD8544, "test_clearPCD8544", 61);
  run_test(test_wrtStrPCD8544, "test_wrtStrPCD8544", 91);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}
