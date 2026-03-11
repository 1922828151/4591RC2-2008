/*
 * func-name: sub_10010AC0
 * func-address: 0x10010ac0
 * callers: 0x10010a30
 * callees: 0x10001cf0, 0x10018e10, 0x10019586
 */

char __usercall sub_10010AC0@<al>(_DWORD *a1@<edi>, unsigned int a2@<esi>, int a3, int a4)
{
  unsigned int v4; // ecx
  char *v5; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a2 > 0x1FFFFFFF )
    sub_10007ED0(a3, a4);
  v4 = a2;
  if ( a2 )
  {
    if ( 0xFFFFFFFF / a2 < 8 )
    {
      sub_10001CF0((std::exception *)pExceptionObject);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = (char *)operator new(8 * v4);
  a1[1] = v5;
  a1[2] = v5;
  a1[3] = &v5[8 * a2];
  return 1;
}
