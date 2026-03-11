/*
 * func-name: sub_10009B50
 * func-address: 0x10009b50
 * callers: 0x1000fc90
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

void *__fastcall sub_10009B50(unsigned int a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x74 )
    {
      sub_100035E0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(116 * a1);
}
