/*
 * func-name: sub_10037F00
 * func-address: 0x10037f00
 * callers: 0x10014a92
 * callees: 0x10010820
 */

int __fastcall sub_10037F00(int a1, float a2)
{
  int result; // eax
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // eax

  result = *(_DWORD *)(a1 + 8);
  if ( result != a1 + 160 && result == a1 + 240 )
  {
    v4 = *(_DWORD **)(a1 + 304);
    *(float *)(a1 + 384) = a2;
    v5 = v4[6];
    v4 += 6;
    *(_DWORD *)(a1 + 388) = v5;
    *(_DWORD *)(a1 + 392) = v4[1];
    v6 = v4[2];
    *(_DWORD *)(a1 + 12) = a1 + 160;
    *(_DWORD *)(a1 + 396) = v6;
    *(float *)(a1 + 392) = 0.0;
    LODWORD(a2) = a1 + 160;
    return sub_10010820((int)&a2);
  }
  return result;
}
