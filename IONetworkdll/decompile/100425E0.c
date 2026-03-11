/*
 * func-name: sub_100425E0
 * func-address: 0x100425e0
 * callers: 0x10022d00, 0x10042370
 * callees: 0x1000ada0, 0x10024f00, 0x10025540, 0x100490f0, 0x10049b20
 */

int __usercall sub_100425E0@<eax>(int a1@<edi>, int a2@<esi>)
{
  int *v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-4h]

  if ( a2 != a1 )
    sub_100490F0(a2, a1);
  if ( a2 + 40 != a1 + 40 )
  {
    v3 = *(int **)(a1 + 44);
    v4 = *v3;
    sub_10024F00(a2 + 40);
    sub_10025540((_DWORD *)(a2 + 40), (int)v3, a2 + 40, **(_DWORD **)(a2 + 44), a1 + 40, v4, a1 + 40, (int)v3);
  }
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 60) = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( a2 + 76 != a1 + 76 )
    sub_10049B20(a2 + 76, a1 + 76);
  *(_DWORD *)(a2 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a1 + 120);
  sub_1000ADA0(a1 + 124, a2 + 124);
  *(_DWORD *)(a2 + 144) = *(_DWORD *)(a1 + 144);
  *(_WORD *)(a2 + 148) = *(_WORD *)(a1 + 148);
  *(_WORD *)(a2 + 150) = *(_WORD *)(a1 + 150);
  *(_WORD *)(a2 + 152) = *(_WORD *)(a1 + 152);
  *(_WORD *)(a2 + 154) = *(_WORD *)(a1 + 154);
  return a2;
}
