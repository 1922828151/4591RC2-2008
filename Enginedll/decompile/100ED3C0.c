/*
 * func-name: sub_100ED3C0
 * func-address: 0x100ed3c0
 * callers: 0x100ed910, 0x100edc30
 * callees: 0x1000fc00, 0x100243f0, 0x101a2522
 */

CREControl *__cdecl sub_100ED3C0(struct Mesh::SkinWeights *a1, struct Mesh::SkinWeights *a2, Mesh::SkinWeights *a3)
{
  CREControl *v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  Mesh::SkinWeights *v8; // [esp+10h] [ebp-14h]
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
      Mesh::SkinWeights::SkinWeights(v3, a1);
    v3 = (CREControl *)((char *)v3 + 124);
    LOBYTE(v10) = 0;
    a1 = (struct Mesh::SkinWeights *)((char *)a1 + 124);
  }
  return v3;
}
