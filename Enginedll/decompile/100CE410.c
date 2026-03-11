/*
 * func-name: sub_100CE410
 * func-address: 0x100ce410
 * callers: 0x1006cec0, 0x100700d0, 0x100cecd0, 0x100ced20, 0x100d2fe0, 0x100d30e0, 0x100d97d0, 0x101586f0, 0x101589f0
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_100CE410(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x24 )
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
  return operator new(36 * v1);
}
