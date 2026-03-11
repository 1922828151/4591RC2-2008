/*
 * func-name: sub_1008FA90
 * func-address: 0x1008fa90
 * callers: 0x100124c0, 0x1001d910, 0x1001d960, 0x1001da50, 0x1002c530, 0x1002c620, 0x1002c800, 0x10090820, 0x100e8600, 0x1010ebb0, 0x10115a30, 0x10126d70, 0x10127000
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1008FA90(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x20 )
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
  return operator new(32 * v1);
}
