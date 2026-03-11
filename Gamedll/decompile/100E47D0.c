/*
 * func-name: sub_100E47D0
 * func-address: 0x100e47d0
 * callers: 0x1000e859
 * callees: 0x100171c5, 0x102c9d50, 0x102c9d86, 0x102c9d98
 */

_DWORD *__stdcall sub_100E47D0(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD v8[10]; // [esp+0h] [ebp-28h] BYREF

  v8[6] = v8;
  v5 = operator new(0x24u);
  v6 = v5;
  v8[5] = v5;
  v8[9] = 1;
  v8[4] = v5;
  if ( v5 )
  {
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    v5[3] = *a4;
    sub_100171C5((int)(a4 + 1));
    *((_BYTE *)v6 + 32) = a5;
    *((_BYTE *)v6 + 33) = 0;
  }
  return v6;
}
