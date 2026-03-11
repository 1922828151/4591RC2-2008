/*
 * func-name: ?_Xlen@?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@KAXXZ
 * func-address: 0x1000a0f0
 * callers: 0x1000bf50, 0x1000d4b0, 0x1000f460, 0x1001fe20, 0x10024730
 * callees: 0x101a2522
 */

void __noreturn std::vector<Actor *>::_Xlen()
{
  _BYTE v0[28]; // [esp+0h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+1Ch] [ebp-34h] BYREF
  _BYTE v2[36]; // [esp+28h] [ebp-28h] BYREF
  int v3; // [esp+4Ch] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}
