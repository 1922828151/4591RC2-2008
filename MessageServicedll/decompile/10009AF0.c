/*
 * func-name: sub_10009AF0
 * func-address: 0x10009af0
 * callers: 0x100087a0, 0x10008a90, 0x10008d90, 0x1000a1e0, 0x1000fc90, 0x10012bd0, 0x10016160, 0x1001dce0, 0x1001de20, 0x1001dfb0, 0x100225b0
 * callees: 0x10003860, 0x10029d92
 */

void __cdecl __noreturn sub_10009AF0(int a1, int a2)
{
  _BYTE v2[28]; // [esp+8h] [ebp-54h] BYREF
  _DWORD pExceptionObject[14]; // [esp+24h] [ebp-38h] BYREF

  std::string::string(v2, "vector<T> too long");
  pExceptionObject[13] = 0;
  sub_10003860(pExceptionObject, (int)v2);
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
