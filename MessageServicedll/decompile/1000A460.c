/*
 * func-name: sub_1000A460
 * func-address: 0x1000a460
 * callers: 0x1000a1e0, 0x100193b0, 0x100225b0, 0x10022e00
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

void *__fastcall sub_1000A460(unsigned int a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 8 )
    {
      sub_100035E0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(8 * a1);
}
