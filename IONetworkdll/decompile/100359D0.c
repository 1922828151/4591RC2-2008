/*
 * func-name: sub_100359D0
 * func-address: 0x100359d0
 * callers: 0x10035760, 0x1003baf0
 * callees: 0x1000c980, 0x1004f112
 */

void __noreturn sub_100359D0()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  std::string::string(v0, "vector<T> too long");
  pExceptionObject[12] = 0;
  sub_1000C980(pExceptionObject, (int)v0);
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
