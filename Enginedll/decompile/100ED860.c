/*
 * func-name: sub_100ED860
 * func-address: 0x100ed860
 * callers: 0x100edc30
 * callees: 0x100ed650
 */

int __thiscall sub_100ED860(void *this, Mesh::SkinWeights *a2, int a3, struct Mesh::SkinWeights *a4)
{
  sub_100ED650(a2, a3, a4);
  return (int)a2 + 124 * a3;
}
