/*
 * func-name: sub_1000ACF0
 * func-address: 0x1000acf0
 * callers: 0x10009c30, 0x10022aa0, 0x10022fa0
 * callees: 0x1000b350, 0x1000b380, 0x1000b770, 0x1000bc90, 0x1004f112
 */

_DWORD *__stdcall sub_1000ACF0(_DWORD *a1)
{
  _DWORD v2[3]; // [esp-18h] [ebp-48h] BYREF
  _DWORD v3[3]; // [esp-Ch] [ebp-3Ch] BYREF
  _DWORD v4[3]; // [esp+0h] [ebp-30h] BYREF
  int v5; // [esp+Ch] [ebp-24h] BYREF
  _DWORD *v6; // [esp+1Ch] [ebp-14h]
  int *v7; // [esp+20h] [ebp-10h]
  int v8; // [esp+2Ch] [ebp-4h]

  v7 = &v5;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  v8 = 0;
  v6 = v4;
  sub_1000B380();
  v6 = v3;
  sub_1000B350();
  v6 = v2;
  sub_1000B350();
  sub_1000BC90(a1, v2[0], v2[1], v2[2], v3[0], v3[1], v3[2], v4[0], v4[1], v4[2]);
  return a1;
}
