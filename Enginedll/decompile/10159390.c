/*
 * func-name: sub_10159390
 * func-address: 0x10159390
 * callers: 0x10014bf0, 0x1001d760, 0x100319f0, 0x1015a010, 0x1015a400, 0x1015a570
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_10159390(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x54 )
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
  return operator new(84 * v1);
}
