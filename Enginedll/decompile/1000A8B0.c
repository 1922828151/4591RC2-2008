/*
 * func-name: sub_1000A8B0
 * func-address: 0x1000a8b0
 * callers: 0x1000c450, 0x1000d780, 0x10078950, 0x1007df50, 0x10109510, 0x1010ec00, 0x101107e0
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1000A8B0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x40 )
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
  return operator new(v1 << 6);
}
