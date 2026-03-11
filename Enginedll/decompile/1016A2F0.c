/*
 * func-name: sub_1016A2F0
 * func-address: 0x1016a2f0
 * callers: 0x10061e30, 0x10062030, 0x1016ad30
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1016A2F0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 2 )
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
  return operator new(2 * v1);
}
