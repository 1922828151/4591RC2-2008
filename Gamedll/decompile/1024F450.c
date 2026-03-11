/*
 * func-name: sub_1024F450
 * func-address: 0x1024f450
 * callers: 0x1001abbd
 * callees: 0x100142db, 0x1001971d, 0x102c9d50
 */

void __cdecl sub_1024F450(_DWORD *a1, int a2, _DWORD **a3, _DWORD *a4, char a5)
{
  _DWORD *v5; // esi
  bool v6; // zf
  _DWORD *v7; // eax
  int v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+4h] [ebp-14h]

  v5 = *a3;
  if ( *a3 )
  {
    v6 = v5[9]-- == 1;
    if ( v6 )
    {
      sub_1001971D(v8, v9);
      operator delete(v5);
    }
  }
  v7 = (_DWORD *)*a1;
  v6 = *a1 == 0;
  *a3 = (_DWORD *)*a1;
  if ( !v6 )
    ++v7[9];
  if ( a4 )
    ++a4[9];
  sub_100142DB((int)a1, 0, (a2 - (int)a1) >> 2, a4, a5);
  if ( a4 )
  {
    v6 = a4[9]-- == 1;
    if ( v6 )
    {
      sub_1001971D(v8, v9);
      operator delete(a4);
    }
  }
}
