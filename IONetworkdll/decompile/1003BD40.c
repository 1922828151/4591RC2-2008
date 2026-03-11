/*
 * func-name: sub_1003BD40
 * func-address: 0x1003bd40
 * callers: 0x1000b8d0, 0x10015b70, 0x1003baf0
 * callees: 0x10008ae0, 0x1004e98e, 0x1004f112
 */

int __fastcall sub_1003BD40(unsigned int a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 4 )
    {
      sub_10008AE0((std::exception *)pExceptionObject, 0);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(4 * a1);
}
