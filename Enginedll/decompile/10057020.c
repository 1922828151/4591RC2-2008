/*
 * func-name: sub_10057020
 * func-address: 0x10057020
 * callers: 0x1001d490, 0x1002bae0, 0x100574a0, 0x1005e6e0, 0x1016bc60
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_10057020(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x34 )
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
  return operator new(52 * v1);
}
