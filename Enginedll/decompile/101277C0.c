/*
 * func-name: sub_101277C0
 * func-address: 0x101277c0
 * callers: 0x10125a30
 * callees: 0x101269d0, 0x10127390
 */

_DWORD *__thiscall sub_101277C0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  unsigned int v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 5;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 5 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_101269D0(v5, 1, (int)a2);
    this[2] = (char *)v5 + 32;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_10127390(this, &v8, this, v7, a2);
  }
  return result;
}
