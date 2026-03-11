/*
 * func-name: sub_10014E40
 * func-address: 0x10014e40
 * callers: 0x100147d0, 0x100148c0
 * callees: 0x10008ae0, 0x1004e98e, 0x1004f112
 */

char __usercall sub_10014E40@<al>(_DWORD *a1@<edi>, unsigned int a2@<esi>)
{
  unsigned int v2; // ecx
  int v3; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( a2 > 0x3FFFFFFF )
    sub_1000BC30();
  v2 = a2;
  if ( a2 )
  {
    if ( 0xFFFFFFFF / a2 < 4 )
    {
      sub_10008AE0((std::exception *)pExceptionObject, 0);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v2 = 0;
  }
  v3 = operator new(4 * v2);
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = v3 + 4 * a2;
  return 1;
}
