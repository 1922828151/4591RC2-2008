/*
 * func-name: sub_100252E0
 * func-address: 0x100252e0
 * callers: 0x10015330, 0x1003dba0
 * callees: 0x10008ae0, 0x1004e98e, 0x1004f112
 */

int __fastcall sub_100252E0(unsigned int a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 8 )
    {
      sub_10008AE0((std::exception *)pExceptionObject, 0);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(8 * a1);
}
