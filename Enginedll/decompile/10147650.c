/*
 * func-name: sub_10147650
 * func-address: 0x10147650
 * callers: 0x10145cc0
 * callees: 0x10146c80, 0x101474e0
 */

CollisionInfo *__thiscall sub_10147650(_DWORD *this, int *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  _DWORD *v5; // edi
  CollisionInfo *result; // eax
  char *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 112;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 112 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v8) = 0;
    result = sub_10146C80(v5, 1, a2);
    this[2] = v5 + 28;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (CollisionInfo *)sub_101474E0(this, &v8, this, v7, a2);
  }
  return result;
}
