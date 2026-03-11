/*
 * func-name: sub_1006C4D0
 * func-address: 0x1006c4d0
 * callers: 0x1001d290, 0x10022210, 0x10022300, 0x100223c0, 0x10022540, 0x1006cce0, 0x1006cd80, 0x1006e9a0, 0x100760a0, 0x100a1e60, 0x100a2120, 0x100d14d0, 0x100d5290, 0x100f6900
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1006C4D0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x14 )
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
  return operator new(20 * v1);
}
