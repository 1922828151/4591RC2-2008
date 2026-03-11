/*
 * func-name: sub_10115E90
 * func-address: 0x10115e90
 * callers: 0x1010c190
 * callees: 0x10114af0, 0x10115b90
 */

_DWORD *__thiscall sub_10115E90(_DWORD *this, void *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  CREControl *v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 4;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 4 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_10114AF0(v5, 1, (int)a2);
    this[2] = (char *)v5 + 16;
  }
  else
  {
    v7 = (CREControl *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10115B90(this, &v8, this, v7, a2);
  }
  return result;
}
