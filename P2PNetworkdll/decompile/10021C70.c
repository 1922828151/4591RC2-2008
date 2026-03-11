/*
 * func-name: sub_10021C70
 * func-address: 0x10021c70
 * callers: 0x10020f30
 * callees: 0x10021cd0, 0x10023100
 */

int __usercall sub_10021C70@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<edi>, int a5, _DWORD *a6)
{
  int result; // eax
  _BYTE *v7; // eax

  result = sub_10021CD0(a5, a2, a4, a3, a1, a6);
  if ( !result )
  {
    if ( !a4 && a6[3] != a6[4] )
    {
      v7 = (_BYTE *)(a6[3] - 1);
      if ( *v7 == 32 )
        a6[3] = v7;
    }
    if ( a6[3] == a6[2] && !sub_10023100() )
    {
      return 1;
    }
    else
    {
      *(_BYTE *)a6[3]++ = 0;
      return 0;
    }
  }
  return result;
}
