/*
 * func-name: sub_10008D90
 * func-address: 0x10008d90
 * callers: 0x10007360
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

char __usercall sub_10008D90@<al>(_DWORD *a1@<edi>, unsigned int a2@<esi>, int a3, int a4)
{
  unsigned int v5; // ecx
  char *v6; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a2 > 0x3FFFFFFF )
    return sub_10009AF0(a3, a4);
  v5 = a2;
  if ( a2 )
  {
    if ( 0xFFFFFFFF / a2 < 4 )
    {
      sub_100035E0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v5 = 0;
  }
  v6 = (char *)operator new(4 * v5);
  a1[1] = v6;
  a1[2] = v6;
  a1[3] = &v6[4 * a2];
  return 1;
}
