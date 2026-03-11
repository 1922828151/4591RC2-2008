/*
 * func-name: sub_1000A7E0
 * func-address: 0x1000a7e0
 * callers: 0x1000c260, 0x1000f8d0, 0x1001da00, 0x10025760, 0x10025860, 0x10025920, 0x1002c700, 0x100e8310
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1000A7E0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x60 )
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
  return operator new(96 * v1);
}
