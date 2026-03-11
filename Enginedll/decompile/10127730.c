/*
 * func-name: sub_10127730
 * func-address: 0x10127730
 * callers: 0x10124e50
 * callees: 0x10126930, 0x10127300
 */

_DWORD *__thiscall sub_10127730(_DWORD *this, char *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  char *v7; // edi
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
    result = (_DWORD *)sub_10126930(v5, 1, a2);
    this[2] = (char *)v5 + 32;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10127300(this, &v8, this, v7, a2);
  }
  return result;
}
