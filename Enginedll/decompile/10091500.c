/*
 * func-name: sub_10091500
 * func-address: 0x10091500
 * callers: 0x10088cd0
 * callees: 0x10090030, 0x10091180
 */

_DWORD *__thiscall sub_10091500(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 24;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 24 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v8) = 0;
    result = sub_10090030((_DWORD *)v8, v5, 1, a2);
    this[2] = v5 + 6;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10091180(this, &v8, this, v7, a2);
  }
  return result;
}
