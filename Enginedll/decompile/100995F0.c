/*
 * func-name: sub_100995F0
 * func-address: 0x100995f0
 * callers: 0x100520a0, 0x100534c0, 0x10099c90, 0x1009ade0, 0x1009b880, 0x10148a20
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_100995F0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x68 )
    {
      a1 = 0;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a1);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v1 = 0;
  }
  return operator new(104 * v1);
}
