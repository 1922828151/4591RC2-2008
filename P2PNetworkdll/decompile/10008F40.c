/*
 * func-name: sub_10008F40
 * func-address: 0x10008f40
 * callers: 0x10008500, 0x10009360
 * callees: 0x100234ce, 0x10023bc6
 */

void *__fastcall sub_10008F40(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 8 )
    {
      v2 = 0;
      std::exception::exception((std::exception *)pExceptionObject, &v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(8 * a1);
}
