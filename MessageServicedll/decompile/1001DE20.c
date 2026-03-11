/*
 * func-name: sub_1001DE20
 * func-address: 0x1001de20
 * callers: 0x1001d730
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

char __usercall sub_1001DE20@<al>(_DWORD *a1@<edi>, unsigned int a2@<esi>, int a3, int a4)
{
  unsigned int v4; // ecx
  char *v5; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a2 > 0x15555555 )
    sub_10009AF0(a3, a4);
  v4 = a2;
  if ( a2 )
  {
    if ( 0xFFFFFFFF / a2 < 0xC )
    {
      sub_100035E0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = (char *)operator new(12 * v4);
  a1[1] = v5;
  a1[2] = v5;
  a1[3] = &v5[12 * a2];
  return 1;
}
