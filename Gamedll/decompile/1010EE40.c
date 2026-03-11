/*
 * func-name: sub_1010EE40
 * func-address: 0x1010ee40
 * callers: 0x1001561d
 * callees: 0x100117fc, 0x10017445
 */

int __thiscall sub_1010EE40(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 56;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 56 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100117FC(v5, 1, a2);
    this[2] = v5 + 56;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10017445((int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
