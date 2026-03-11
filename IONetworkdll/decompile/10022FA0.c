/*
 * func-name: sub_10022FA0
 * func-address: 0x10022fa0
 * callers: 0x10022aa0, 0x10042140
 * callees: 0x1000acf0, 0x100247b0, 0x100485f0, 0x10048660
 */

int __userpurge sub_10022FA0@<eax>(int a1@<ebx>, int a2)
{
  sub_100485F0(a2);
  sub_100247B0(a2 + 40);
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 60) = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  sub_10048660(a2 + 76);
  *(_DWORD *)(a2 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a1 + 120);
  sub_1000ACF0((_DWORD *)(a2 + 124));
  *(_DWORD *)(a2 + 144) = *(_DWORD *)(a1 + 144);
  *(_WORD *)(a2 + 148) = *(_WORD *)(a1 + 148);
  *(_WORD *)(a2 + 150) = *(_WORD *)(a1 + 150);
  *(_WORD *)(a2 + 152) = *(_WORD *)(a1 + 152);
  *(_WORD *)(a2 + 154) = *(_WORD *)(a1 + 154);
  return a2;
}
