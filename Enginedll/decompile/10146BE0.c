/*
 * func-name: sub_10146BE0
 * func-address: 0x10146be0
 * callers: 0x10146d50, 0x101475a0
 * callees: 0x10024540, 0x100245a0, 0x101a2522
 */

CollisionInfo *__cdecl sub_10146BE0(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  CollisionInfo *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  _DWORD *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = (CREControl *)v3;
    LOBYTE(v10) = 1;
    if ( v3 )
    {
      *v3 = *a3;
      v3[1] = a3[1];
      result = CollisionInfo::CollisionInfo((CollisionInfo *)(v3 + 2), (const struct CollisionInfo *)(a3 + 2));
    }
    --a2;
    v3 += 28;
    LOBYTE(v10) = 0;
  }
  return result;
}
