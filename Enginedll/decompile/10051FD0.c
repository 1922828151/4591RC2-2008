/*
 * func-name: sub_10051FD0
 * func-address: 0x10051fd0
 * callers: 0x1000c4a0, 0x10022a90, 0x10052190, 0x100523a0, 0x1006cd30, 0x1006e8b0, 0x100786b0, 0x100ceb90, 0x100d0620, 0x100d1230, 0x100ff430, 0x10146700, 0x10157d40
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_10051FD0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0xC )
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
  return operator new(12 * v1);
}
