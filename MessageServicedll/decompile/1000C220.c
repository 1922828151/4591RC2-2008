/*
 * func-name: sub_1000C220
 * func-address: 0x1000c220
 * callers: 0x1000c110, 0x100229b0, 0x10022a60, 0x10022e00
 * callees: 0x10003860, 0x10029d92
 */

void __noreturn sub_1000C220()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  std::string::string(v0, "vector<T> too long");
  pExceptionObject[12] = 0;
  sub_10003860(pExceptionObject, (int)v0);
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
