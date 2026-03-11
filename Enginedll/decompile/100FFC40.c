/*
 * func-name: sub_100FFC40
 * func-address: 0x100ffc40
 * callers: 0x10100010
 * callees: 0x1000e7f0, 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_100FFC40(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v8; // [esp+0h] [ebp-24h] BYREF
  CREControl *v9; // [esp+Ch] [ebp-18h]
  void *v10; // [esp+10h] [ebp-14h]
  int *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]

  v11 = &v8;
  v5 = operator new(0x2Cu);
  v6 = v5;
  v10 = v5;
  v12 = 1;
  v9 = (CREControl *)v5;
  if ( v5 )
  {
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    v5[3] = *a4;
    v5[4] = a4[1];
    v5[5] = a4[2];
    sub_1000E7F0(v5 + 6, (int)(a4 + 3));
    *((_BYTE *)v6 + 40) = a5;
    *((_BYTE *)v6 + 41) = 0;
  }
  return v6;
}
