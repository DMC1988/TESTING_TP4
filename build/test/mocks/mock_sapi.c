/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_sapi.h"

static const char* CMockString_cmock_arg1 = "cmock_arg1";
static const char* CMockString_cmock_arg2 = "cmock_arg2";
static const char* CMockString_cmock_arg3 = "cmock_arg3";
static const char* CMockString_delay = "delay";
static const char* CMockString_gpioInit = "gpioInit";
static const char* CMockString_gpioWrite = "gpioWrite";
static const char* CMockString_spiConfig = "spiConfig";
static const char* CMockString_spiWrite = "spiWrite";

typedef struct _CMOCK_gpioWrite_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_cmock_arg1;
  _Bool Expected_cmock_arg2;

} CMOCK_gpioWrite_CALL_INSTANCE;

typedef struct _CMOCK_gpioInit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_cmock_arg1;
  _Bool Expected_cmock_arg2;

} CMOCK_gpioInit_CALL_INSTANCE;

typedef struct _CMOCK_spiConfig_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_cmock_arg1;

} CMOCK_spiConfig_CALL_INSTANCE;

typedef struct _CMOCK_delay_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_cmock_arg1;

} CMOCK_delay_CALL_INSTANCE;

typedef struct _CMOCK_spiWrite_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  int Expected_cmock_arg1;
  char* Expected_cmock_arg2;
  int Expected_cmock_arg3;

} CMOCK_spiWrite_CALL_INSTANCE;

static struct mock_sapiInstance
{
  char gpioWrite_IgnoreBool;
  char gpioWrite_CallbackBool;
  CMOCK_gpioWrite_CALLBACK gpioWrite_CallbackFunctionPointer;
  int gpioWrite_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE gpioWrite_CallInstance;
  char gpioInit_IgnoreBool;
  char gpioInit_CallbackBool;
  CMOCK_gpioInit_CALLBACK gpioInit_CallbackFunctionPointer;
  int gpioInit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE gpioInit_CallInstance;
  char spiConfig_IgnoreBool;
  char spiConfig_CallbackBool;
  CMOCK_spiConfig_CALLBACK spiConfig_CallbackFunctionPointer;
  int spiConfig_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE spiConfig_CallInstance;
  char delay_IgnoreBool;
  char delay_CallbackBool;
  CMOCK_delay_CALLBACK delay_CallbackFunctionPointer;
  int delay_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE delay_CallInstance;
  char spiWrite_IgnoreBool;
  char spiWrite_CallbackBool;
  CMOCK_spiWrite_CALLBACK spiWrite_CallbackFunctionPointer;
  int spiWrite_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE spiWrite_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_sapi_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.gpioWrite_CallInstance;
  if (Mock.gpioWrite_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_gpioWrite);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.gpioWrite_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.gpioInit_CallInstance;
  if (Mock.gpioInit_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_gpioInit);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.gpioInit_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.spiConfig_CallInstance;
  if (Mock.spiConfig_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_spiConfig);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.spiConfig_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.delay_CallInstance;
  if (Mock.delay_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_delay);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.delay_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.spiWrite_CallInstance;
  if (Mock.spiWrite_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_spiWrite);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.spiWrite_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_sapi_Init(void)
{
  mock_sapi_Destroy();
}

void mock_sapi_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void gpioWrite(int cmock_arg1, _Bool cmock_arg2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_gpioWrite_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_gpioWrite);
  cmock_call_instance = (CMOCK_gpioWrite_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.gpioWrite_CallInstance);
  Mock.gpioWrite_CallInstance = CMock_Guts_MemNext(Mock.gpioWrite_CallInstance);
  if (Mock.gpioWrite_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.gpioWrite_CallbackBool &&
      Mock.gpioWrite_CallbackFunctionPointer != NULL)
  {
    Mock.gpioWrite_CallbackFunctionPointer(cmock_arg1, cmock_arg2, Mock.gpioWrite_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_gpioWrite,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_gpioWrite,CMockString_cmock_arg2);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_cmock_arg2), (void*)(&cmock_arg2), sizeof(_Bool), cmock_line, CMockStringMismatch);
  }
  if (Mock.gpioWrite_CallbackFunctionPointer != NULL)
  {
    Mock.gpioWrite_CallbackFunctionPointer(cmock_arg1, cmock_arg2, Mock.gpioWrite_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_gpioWrite(CMOCK_gpioWrite_CALL_INSTANCE* cmock_call_instance, int cmock_arg1, _Bool cmock_arg2);
void CMockExpectParameters_gpioWrite(CMOCK_gpioWrite_CALL_INSTANCE* cmock_call_instance, int cmock_arg1, _Bool cmock_arg2)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
  memcpy((void*)(&cmock_call_instance->Expected_cmock_arg2), (void*)(&cmock_arg2),
         sizeof(_Bool[sizeof(cmock_arg2) == sizeof(_Bool) ? 1 : -1])); /* add _Bool to :treat_as_array if this causes an error */
}

void gpioWrite_CMockIgnore(void)
{
  Mock.gpioWrite_IgnoreBool = (char)1;
}

void gpioWrite_CMockStopIgnore(void)
{
  Mock.gpioWrite_IgnoreBool = (char)0;
}

void gpioWrite_CMockExpect(UNITY_LINE_TYPE cmock_line, int cmock_arg1, _Bool cmock_arg2)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_gpioWrite_CALL_INSTANCE));
  CMOCK_gpioWrite_CALL_INSTANCE* cmock_call_instance = (CMOCK_gpioWrite_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.gpioWrite_CallInstance = CMock_Guts_MemChain(Mock.gpioWrite_CallInstance, cmock_guts_index);
  Mock.gpioWrite_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_gpioWrite(cmock_call_instance, cmock_arg1, cmock_arg2);
}

void gpioWrite_AddCallback(CMOCK_gpioWrite_CALLBACK Callback)
{
  Mock.gpioWrite_IgnoreBool = (char)0;
  Mock.gpioWrite_CallbackBool = (char)1;
  Mock.gpioWrite_CallbackFunctionPointer = Callback;
}

void gpioWrite_Stub(CMOCK_gpioWrite_CALLBACK Callback)
{
  Mock.gpioWrite_IgnoreBool = (char)0;
  Mock.gpioWrite_CallbackBool = (char)0;
  Mock.gpioWrite_CallbackFunctionPointer = Callback;
}

void gpioInit(int cmock_arg1, _Bool cmock_arg2)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_gpioInit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_gpioInit);
  cmock_call_instance = (CMOCK_gpioInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.gpioInit_CallInstance);
  Mock.gpioInit_CallInstance = CMock_Guts_MemNext(Mock.gpioInit_CallInstance);
  if (Mock.gpioInit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.gpioInit_CallbackBool &&
      Mock.gpioInit_CallbackFunctionPointer != NULL)
  {
    Mock.gpioInit_CallbackFunctionPointer(cmock_arg1, cmock_arg2, Mock.gpioInit_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_gpioInit,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_gpioInit,CMockString_cmock_arg2);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_cmock_arg2), (void*)(&cmock_arg2), sizeof(_Bool), cmock_line, CMockStringMismatch);
  }
  if (Mock.gpioInit_CallbackFunctionPointer != NULL)
  {
    Mock.gpioInit_CallbackFunctionPointer(cmock_arg1, cmock_arg2, Mock.gpioInit_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_gpioInit(CMOCK_gpioInit_CALL_INSTANCE* cmock_call_instance, int cmock_arg1, _Bool cmock_arg2);
void CMockExpectParameters_gpioInit(CMOCK_gpioInit_CALL_INSTANCE* cmock_call_instance, int cmock_arg1, _Bool cmock_arg2)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
  memcpy((void*)(&cmock_call_instance->Expected_cmock_arg2), (void*)(&cmock_arg2),
         sizeof(_Bool[sizeof(cmock_arg2) == sizeof(_Bool) ? 1 : -1])); /* add _Bool to :treat_as_array if this causes an error */
}

void gpioInit_CMockIgnore(void)
{
  Mock.gpioInit_IgnoreBool = (char)1;
}

void gpioInit_CMockStopIgnore(void)
{
  Mock.gpioInit_IgnoreBool = (char)0;
}

void gpioInit_CMockExpect(UNITY_LINE_TYPE cmock_line, int cmock_arg1, _Bool cmock_arg2)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_gpioInit_CALL_INSTANCE));
  CMOCK_gpioInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_gpioInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.gpioInit_CallInstance = CMock_Guts_MemChain(Mock.gpioInit_CallInstance, cmock_guts_index);
  Mock.gpioInit_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_gpioInit(cmock_call_instance, cmock_arg1, cmock_arg2);
}

void gpioInit_AddCallback(CMOCK_gpioInit_CALLBACK Callback)
{
  Mock.gpioInit_IgnoreBool = (char)0;
  Mock.gpioInit_CallbackBool = (char)1;
  Mock.gpioInit_CallbackFunctionPointer = Callback;
}

void gpioInit_Stub(CMOCK_gpioInit_CALLBACK Callback)
{
  Mock.gpioInit_IgnoreBool = (char)0;
  Mock.gpioInit_CallbackBool = (char)0;
  Mock.gpioInit_CallbackFunctionPointer = Callback;
}

void spiConfig(int cmock_arg1)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_spiConfig_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_spiConfig);
  cmock_call_instance = (CMOCK_spiConfig_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.spiConfig_CallInstance);
  Mock.spiConfig_CallInstance = CMock_Guts_MemNext(Mock.spiConfig_CallInstance);
  if (Mock.spiConfig_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.spiConfig_CallbackBool &&
      Mock.spiConfig_CallbackFunctionPointer != NULL)
  {
    Mock.spiConfig_CallbackFunctionPointer(cmock_arg1, Mock.spiConfig_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_spiConfig,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, CMockStringMismatch);
  }
  if (Mock.spiConfig_CallbackFunctionPointer != NULL)
  {
    Mock.spiConfig_CallbackFunctionPointer(cmock_arg1, Mock.spiConfig_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_spiConfig(CMOCK_spiConfig_CALL_INSTANCE* cmock_call_instance, int cmock_arg1);
void CMockExpectParameters_spiConfig(CMOCK_spiConfig_CALL_INSTANCE* cmock_call_instance, int cmock_arg1)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
}

void spiConfig_CMockIgnore(void)
{
  Mock.spiConfig_IgnoreBool = (char)1;
}

void spiConfig_CMockStopIgnore(void)
{
  Mock.spiConfig_IgnoreBool = (char)0;
}

void spiConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, int cmock_arg1)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_spiConfig_CALL_INSTANCE));
  CMOCK_spiConfig_CALL_INSTANCE* cmock_call_instance = (CMOCK_spiConfig_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.spiConfig_CallInstance = CMock_Guts_MemChain(Mock.spiConfig_CallInstance, cmock_guts_index);
  Mock.spiConfig_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_spiConfig(cmock_call_instance, cmock_arg1);
}

void spiConfig_AddCallback(CMOCK_spiConfig_CALLBACK Callback)
{
  Mock.spiConfig_IgnoreBool = (char)0;
  Mock.spiConfig_CallbackBool = (char)1;
  Mock.spiConfig_CallbackFunctionPointer = Callback;
}

void spiConfig_Stub(CMOCK_spiConfig_CALLBACK Callback)
{
  Mock.spiConfig_IgnoreBool = (char)0;
  Mock.spiConfig_CallbackBool = (char)0;
  Mock.spiConfig_CallbackFunctionPointer = Callback;
}

void delay(int cmock_arg1)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_delay_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_delay);
  cmock_call_instance = (CMOCK_delay_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.delay_CallInstance);
  Mock.delay_CallInstance = CMock_Guts_MemNext(Mock.delay_CallInstance);
  if (Mock.delay_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.delay_CallbackBool &&
      Mock.delay_CallbackFunctionPointer != NULL)
  {
    Mock.delay_CallbackFunctionPointer(cmock_arg1, Mock.delay_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_delay,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, CMockStringMismatch);
  }
  if (Mock.delay_CallbackFunctionPointer != NULL)
  {
    Mock.delay_CallbackFunctionPointer(cmock_arg1, Mock.delay_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_delay(CMOCK_delay_CALL_INSTANCE* cmock_call_instance, int cmock_arg1);
void CMockExpectParameters_delay(CMOCK_delay_CALL_INSTANCE* cmock_call_instance, int cmock_arg1)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
}

void delay_CMockIgnore(void)
{
  Mock.delay_IgnoreBool = (char)1;
}

void delay_CMockStopIgnore(void)
{
  Mock.delay_IgnoreBool = (char)0;
}

void delay_CMockExpect(UNITY_LINE_TYPE cmock_line, int cmock_arg1)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_delay_CALL_INSTANCE));
  CMOCK_delay_CALL_INSTANCE* cmock_call_instance = (CMOCK_delay_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.delay_CallInstance = CMock_Guts_MemChain(Mock.delay_CallInstance, cmock_guts_index);
  Mock.delay_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_delay(cmock_call_instance, cmock_arg1);
}

void delay_AddCallback(CMOCK_delay_CALLBACK Callback)
{
  Mock.delay_IgnoreBool = (char)0;
  Mock.delay_CallbackBool = (char)1;
  Mock.delay_CallbackFunctionPointer = Callback;
}

void delay_Stub(CMOCK_delay_CALLBACK Callback)
{
  Mock.delay_IgnoreBool = (char)0;
  Mock.delay_CallbackBool = (char)0;
  Mock.delay_CallbackFunctionPointer = Callback;
}

void spiWrite(int cmock_arg1, char* cmock_arg2, int cmock_arg3)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_spiWrite_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_spiWrite);
  cmock_call_instance = (CMOCK_spiWrite_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.spiWrite_CallInstance);
  Mock.spiWrite_CallInstance = CMock_Guts_MemNext(Mock.spiWrite_CallInstance);
  if (Mock.spiWrite_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.spiWrite_CallbackBool &&
      Mock.spiWrite_CallbackFunctionPointer != NULL)
  {
    Mock.spiWrite_CallbackFunctionPointer(cmock_arg1, cmock_arg2, cmock_arg3, Mock.spiWrite_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_spiWrite,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_spiWrite,CMockString_cmock_arg2);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_cmock_arg2, cmock_arg2, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_spiWrite,CMockString_cmock_arg3);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_cmock_arg3, cmock_arg3, cmock_line, CMockStringMismatch);
  }
  if (Mock.spiWrite_CallbackFunctionPointer != NULL)
  {
    Mock.spiWrite_CallbackFunctionPointer(cmock_arg1, cmock_arg2, cmock_arg3, Mock.spiWrite_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_spiWrite(CMOCK_spiWrite_CALL_INSTANCE* cmock_call_instance, int cmock_arg1, char* cmock_arg2, int cmock_arg3);
void CMockExpectParameters_spiWrite(CMOCK_spiWrite_CALL_INSTANCE* cmock_call_instance, int cmock_arg1, char* cmock_arg2, int cmock_arg3)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
  cmock_call_instance->Expected_cmock_arg2 = cmock_arg2;
  cmock_call_instance->Expected_cmock_arg3 = cmock_arg3;
}

void spiWrite_CMockIgnore(void)
{
  Mock.spiWrite_IgnoreBool = (char)1;
}

void spiWrite_CMockStopIgnore(void)
{
  Mock.spiWrite_IgnoreBool = (char)0;
}

void spiWrite_CMockExpect(UNITY_LINE_TYPE cmock_line, int cmock_arg1, char* cmock_arg2, int cmock_arg3)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_spiWrite_CALL_INSTANCE));
  CMOCK_spiWrite_CALL_INSTANCE* cmock_call_instance = (CMOCK_spiWrite_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.spiWrite_CallInstance = CMock_Guts_MemChain(Mock.spiWrite_CallInstance, cmock_guts_index);
  Mock.spiWrite_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_spiWrite(cmock_call_instance, cmock_arg1, cmock_arg2, cmock_arg3);
}

void spiWrite_AddCallback(CMOCK_spiWrite_CALLBACK Callback)
{
  Mock.spiWrite_IgnoreBool = (char)0;
  Mock.spiWrite_CallbackBool = (char)1;
  Mock.spiWrite_CallbackFunctionPointer = Callback;
}

void spiWrite_Stub(CMOCK_spiWrite_CALLBACK Callback)
{
  Mock.spiWrite_IgnoreBool = (char)0;
  Mock.spiWrite_CallbackBool = (char)0;
  Mock.spiWrite_CallbackFunctionPointer = Callback;
}

