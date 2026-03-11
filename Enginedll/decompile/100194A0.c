/*
 * func-name: ?_Xran@?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@KAXXZ
 * func-address: 0x100194a0
 * callers: 0x1001cc30, 0x1004edb0, 0x10050870, 0x10083e50, 0x100853c0, 0x10088400, 0x1008e080
 * callees: 0x101a2522
 */

void __noreturn std::vector<Actor *>::_Xran()
{
  _BYTE v0[28]; // [esp+0h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+1Ch] [ebp-34h] BYREF
  _BYTE v2[36]; // [esp+28h] [ebp-28h] BYREF
  int v3; // [esp+4Ch] [ebp-4h]

  std::string::string(v0, "invalid vector<T> subscript");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::out_of_range::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}
