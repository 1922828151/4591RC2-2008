/*
 * func-name: sub_100ED650
 * func-address: 0x100ed650
 * callers: 0x100ed860, 0x100ee1b0
 * callees: 0x1000fc00, 0x100243f0, 0x101a2522
 */

Mesh::SkinWeights *__cdecl sub_100ED650(Mesh::SkinWeights *a1, int a2, struct Mesh::SkinWeights *a3)
{
  CREControl *v3; // esi
  Mesh::SkinWeights *result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  Mesh::SkinWeights *v8; // [esp+10h] [ebp-14h]
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
      result = Mesh::SkinWeights::SkinWeights(v3, a3);
    --a2;
    v3 = (CREControl *)((char *)v3 + 124);
    LOBYTE(v10) = 0;
  }
  return result;
}
