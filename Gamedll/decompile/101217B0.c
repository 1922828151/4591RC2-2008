/*
 * func-name: sub_101217B0
 * func-address: 0x101217b0
 * callers: 0x100106ef
 * callees: 0x102c9d86, 0x102c9d98
 */

void *__cdecl sub_101217B0(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 4 )
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
  return operator new(4 * v1);
}
