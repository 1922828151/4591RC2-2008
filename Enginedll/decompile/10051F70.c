/*
 * func-name: sub_10051F70
 * func-address: 0x10051f70
 * callers: 0x100520f0, 0x10052140, 0x10053990, 0x10053a80, 0x10146e00, 0x10147110
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_10051F70(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x70 )
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
  return operator new(112 * v1);
}
