/*
 * func-name: sub_10116770
 * func-address: 0x10116770
 * callers: 0x1010e120
 * callees: 0x101161a0, 0x101166b0
 */

int *__thiscall sub_10116770(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  CREControl *v5; // edi
  int *result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 60;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 60 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_101161A0(v5, 1, (int)a2);
    this[2] = (char *)v5 + 60;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_101166B0(this, &v8, this, v7, a2);
  }
  return result;
}
