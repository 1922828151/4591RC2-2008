/*
 * func-name: sub_1001DBF0
 * func-address: 0x1001dbf0
 * callers: none
 * callees: 0x10014800
 */

char __thiscall sub_1001DBF0(_DWORD *this, _DWORD *a2, unsigned int a3, int a4)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  unsigned int v7; // edi

  v5 = a2;
  if ( !a2 || !a3 )
    return 0;
  v6 = (_DWORD *)(this[18] + 24 * *a2);
  *(_DWORD *)a4 = *v6;
  *(_DWORD *)(a4 + 4) = v6[1];
  *(_DWORD *)(a4 + 8) = v6[2];
  *(_DWORD *)(a4 + 12) = v6[3];
  *(_DWORD *)(a4 + 16) = v6[4];
  v7 = 1;
  *(_DWORD *)(a4 + 20) = v6[5];
  if ( a3 > 1 )
  {
    while ( 1 )
    {
      sub_10014800((float *)a4, (float *)(this[18] + 24 * v5[v7++]));
      if ( v7 >= a3 )
        break;
      v5 = a2;
    }
  }
  return 1;
}
