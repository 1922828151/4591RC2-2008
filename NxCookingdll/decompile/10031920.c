/*
 * func-name: sub_10031920
 * func-address: 0x10031920
 * callers: 0x10031c00
 * callees: 0x100370b9, 0x100373df, 0x10037449
 */

void *__cdecl sub_10031920(char *a1)
{
  char *v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( !(0xFFFFFFFF / (unsigned int)a1) )
    {
      a1 = 0;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a1);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v1 = 0;
  }
  return operator new((size_t)v1);
}
