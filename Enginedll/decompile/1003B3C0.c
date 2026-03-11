/*
 * func-name: sub_1003B3C0
 * func-address: 0x1003b3c0
 * callers: 0x1003b480, 0x1003c9c0, 0x100ed940, 0x1015cb30
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1003B3C0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x50 )
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
  return operator new(80 * v1);
}
