/*
 * func-name: sub_10148DB0
 * func-address: 0x10148db0
 * callers: 0x101484b0
 * callees: 0x101488d0, 0x10148d00
 */

CollisionInfo *__thiscall sub_10148DB0(_DWORD *this, struct CollisionInfo *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CollisionInfo *v5; // edi
  CollisionInfo *result; // eax
  struct CollisionInfo *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 104;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 104 )
  {
    v5 = (CollisionInfo *)this[2];
    LOBYTE(v8) = 0;
    result = sub_101488D0(v5, 1, a2);
    this[2] = (char *)v5 + 104;
  }
  else
  {
    v7 = (struct CollisionInfo *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (CollisionInfo *)sub_10148D00(this, &v8, this, v7, a2);
  }
  return result;
}
