/*
 * func-name: sub_10008A90
 * func-address: 0x10008a90
 * callers: 0x10007170
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

char __usercall sub_10008A90@<al>(unsigned int a1@<eax>, _DWORD *a2@<edi>, int a3, int a4)
{
  unsigned int v6; // ecx
  char *v7; // eax
  _BYTE pExceptionObject[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 > 0x25ED097 )
    return sub_10009AF0(a3, a4);
  v6 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x6C )
    {
      sub_100035E0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = (char *)operator new(108 * v6);
  a2[1] = v7;
  a2[2] = v7;
  a2[3] = &v7[108 * a1];
  return 1;
}
