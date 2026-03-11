/*
 * func-name: sub_10014460
 * func-address: 0x10014460
 * callers: 0x10007c50, 0x1000e080
 * callees: 0x10001cf0, 0x10018e10, 0x10019586
 */

void *__fastcall sub_10014460(unsigned int a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 8 )
    {
      sub_10001CF0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(8 * a1);
}
