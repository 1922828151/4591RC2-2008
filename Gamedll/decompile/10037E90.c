/*
 * func-name: sub_10037E90
 * func-address: 0x10037e90
 * callers: 0x100081b6
 * callees: 0x10010820
 */

int __fastcall sub_10037E90(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edx
  int result; // eax
  _DWORD *v5; // edx
  int v6; // edx
  _DWORD *v7; // eax

  v3 = (_DWORD *)a1[2];
  result = (int)(a1 + 30);
  if ( v3 == a1 + 30 )
  {
    v7 = a3;
    a1[86] = *a3;
    a1[87] = v7[1];
    result = v7[2];
    a1[88] = result;
  }
  else if ( v3 == a1 + 60 )
  {
    v5 = a3;
    a1[86] = *a3;
    a1[87] = v5[1];
    v6 = v5[2];
    a1[3] = result;
    a3 = a1 + 30;
    a1[88] = v6;
    return sub_10010820((int)&a3);
  }
  return result;
}
