/*
 * func-name: sub_100EE1B0
 * func-address: 0x100ee1b0
 * callers: 0x100eaad0
 * callees: 0x100ed650, 0x100ee040
 */

Mesh::SkinWeights *__thiscall sub_100EE1B0(_DWORD *this, struct Mesh::SkinWeights *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  Mesh::SkinWeights *v5; // edi
  Mesh::SkinWeights *result; // eax
  struct Mesh::SkinWeights *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 124;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 124 )
  {
    v5 = (Mesh::SkinWeights *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100ED650(v5, 1, a2);
    this[2] = (char *)v5 + 124;
  }
  else
  {
    v7 = (struct Mesh::SkinWeights *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (Mesh::SkinWeights *)sub_100EE040(this, &v8, this, v7, a2);
  }
  return result;
}
