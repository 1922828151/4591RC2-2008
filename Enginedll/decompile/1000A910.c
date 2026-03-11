/*
 * func-name: sub_1000A910
 * func-address: 0x1000a910
 * callers: 0x1000c4f0, 0x1000fe50, 0x100640a0
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1000A910(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x8C )
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
  return operator new(140 * v1);
}
