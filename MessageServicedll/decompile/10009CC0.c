/*
 * func-name: sub_10009CC0
 * func-address: 0x10009cc0
 * callers: 0x1000c110, 0x10012bd0, 0x10022a60
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

void *__fastcall sub_10009CC0(unsigned int a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 4 )
    {
      sub_100035E0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(4 * a1);
}
