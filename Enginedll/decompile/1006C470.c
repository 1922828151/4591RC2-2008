/*
 * func-name: sub_1006C470
 * func-address: 0x1006c470
 * callers: 0x1001d0e0, 0x1001d3a0, 0x10021590, 0x100250d0, 0x10025310, 0x10025440, 0x10026190, 0x10026280, 0x10026350, 0x100265d0, 0x1006cc90, 0x1006ffd0, 0x100d2120, 0x1011a5d0
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1006C470(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x28 )
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
  return operator new(40 * v1);
}
