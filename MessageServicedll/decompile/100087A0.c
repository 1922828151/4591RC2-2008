/*
 * func-name: sub_100087A0
 * func-address: 0x100087a0
 * callers: 0x10006ff0
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

char __usercall sub_100087A0@<al>(unsigned int a1@<eax>, _DWORD *a2@<edi>, int a3, int a4)
{
  unsigned int v6; // ecx
  char *v7; // eax
  _BYTE pExceptionObject[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 > 0x234F72C )
    return sub_10009AF0(a3, a4);
  v6 = a1;
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
    v6 = 0;
  }
  v7 = (char *)operator new(116 * v6);
  a2[1] = v7;
  a2[2] = v7;
  a2[3] = &v7[116 * a1];
  return 1;
}
