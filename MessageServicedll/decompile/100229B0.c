/*
 * func-name: sub_100229B0
 * func-address: 0x100229b0
 * callers: 0x100228c0
 * callees: 0x100035e0, 0x100295c0, 0x10029d92
 */

char __usercall sub_100229B0@<al>(_DWORD *a1@<edi>, unsigned int a2@<esi>)
{
  unsigned int v2; // ecx
  char *v3; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a2 > 0x3FFFFFFF )
    sub_1000C220();
  v2 = a2;
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
    v2 = 0;
  }
  v3 = (char *)operator new(4 * v2);
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = &v3[4 * a2];
  return 1;
}
