/*
 * func-name: sub_1010F8C0
 * func-address: 0x1010f8c0
 * callers: 0x10113fb0
 * callees: 0x1010e870, 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_1010F8C0(int a1, CREControl *a2, char *a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-20h] BYREF
  void *v6; // [esp+Ch] [ebp-14h]
  int *v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = &v5;
  v3 = operator new(0x40u);
  v6 = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  LOBYTE(v8) = 1;
  if ( v3 != (_DWORD *)-8 )
    sub_1010E870((int)(v3 + 2), a3);
  return v3;
}
