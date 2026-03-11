/*
 * func-name: sub_1000EB40
 * func-address: 0x1000eb40
 * callers: 0x10008e30, 0x1000e510
 * callees: 0x100234ce, 0x10023bc6
 */

void *__fastcall sub_1000EB40(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( 0xFFFFFFFF / a1 < 0x28 )
  {
    v2 = 0;
    std::exception::exception((std::exception *)pExceptionObject, &v2);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  return operator new(40 * a1);
}
