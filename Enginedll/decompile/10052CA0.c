/*
 * func-name: sub_10052CA0
 * func-address: 0x10052ca0
 * callers: 0x100531e0, 0x10148a20
 * callees: 0x10024540, 0x100245a0, 0x101a2522
 */

CREControl *__cdecl sub_10052CA0(struct CollisionInfo *a1, struct CollisionInfo *a2, CollisionInfo *a3)
{
  CREControl *v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  CollisionInfo *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  v10 = 0;
  while ( a1 != a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
      CollisionInfo::CollisionInfo(v3, a1);
    v3 = (CREControl *)((char *)v3 + 104);
    LOBYTE(v10) = 0;
    a1 = (struct CollisionInfo *)((char *)a1 + 104);
  }
  return v3;
}
