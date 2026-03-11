/*
 * func-name: sub_10057650
 * func-address: 0x10057650
 * callers: 0x10059470, 0x10131b30
 * callees: 0x100571b0, 0x101a2500, 0x101a2522, 0x101a2534
 */

_DWORD *__stdcall sub_10057650(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-24h] BYREF
  CREControl *v8; // [esp+Ch] [ebp-18h]
  void *v9; // [esp+10h] [ebp-14h]
  int *v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = &v7;
  v5 = operator new(0x38u);
  v9 = v5;
  v11 = 1;
  v8 = (CREControl *)v5;
  if ( v5 )
    sub_100571B0(v5, a1, a2, a3, a4, a5);
  return v5;
}
