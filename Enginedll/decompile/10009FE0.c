/*
 * func-name: sub_10009FE0
 * func-address: 0x10009fe0
 * callers: 0x1000bd00, 0x10013b10, 0x10048c00, 0x1006d160, 0x1006fe50, 0x100d3260
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_10009FE0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x2C )
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
  return operator new(44 * v1);
}
