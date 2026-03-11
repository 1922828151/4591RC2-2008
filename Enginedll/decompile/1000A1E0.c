/*
 * func-name: ?_Xlen@?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@KAXXZ
 * func-address: 0x1000a1e0
 * callers: 0x1000c210, 0x1000d680, 0x1000f620, 0x100214e0, 0x10025060
 * callees: 0x101a2522
 */

void __noreturn std::vector<Material *>::_Xlen()
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
