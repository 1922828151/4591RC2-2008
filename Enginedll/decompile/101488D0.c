/*
 * func-name: sub_101488D0
 * func-address: 0x101488d0
 * callers: 0x101489b0, 0x10148db0
 * callees: 0x10024540, 0x100245a0, 0x101a2522
 */

CollisionInfo *__cdecl sub_101488D0(CollisionInfo *a1, int a2, struct CollisionInfo *a3)
{
  CREControl *v3; // esi
  CollisionInfo *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  CollisionInfo *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      result = CollisionInfo::CollisionInfo(v3, a3);
    --a2;
    v3 = (CREControl *)((char *)v3 + 104);
    LOBYTE(v10) = 0;
  }
  return result;
}
