/*
 * func-name: sub_1006D4E0
 * func-address: 0x1006d4e0
 * callers: 0x1006f0c0, 0x100cf7e0
 * callees: 0x1006c970, 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_1006D4E0(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v8; // [esp+0h] [ebp-24h] BYREF
  CREControl *v9; // [esp+Ch] [ebp-18h]
  void *v10; // [esp+10h] [ebp-14h]
  int *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]

  v11 = &v8;
  v5 = operator new(0x54u);
  v6 = v5;
  v10 = v5;
  v12 = 1;
  v9 = (CREControl *)v5;
  if ( v5 )
  {
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    sub_1006C970(v5 + 3, a4);
    *((_BYTE *)v6 + 80) = a5;
    *((_BYTE *)v6 + 81) = 0;
  }
  return v6;
}
