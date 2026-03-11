/*
 * func-name: sub_10053140
 * func-address: 0x10053140
 * callers: 0x10146dd0, 0x10147110
 * callees: 0x10024540, 0x100245a0, 0x101a2522
 */

_DWORD *__cdecl sub_10053140(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  _DWORD *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  v10 = 0;
  while ( a1 != a2 )
  {
    v7 = (CREControl *)v3;
    LOBYTE(v10) = 1;
    if ( v3 )
    {
      *v3 = *a1;
      v3[1] = a1[1];
      CollisionInfo::CollisionInfo((CollisionInfo *)(v3 + 2), (const struct CollisionInfo *)(a1 + 2));
    }
    v3 += 28;
    LOBYTE(v10) = 0;
    a1 += 28;
  }
  return v3;
}
