/*
 * func-name: sub_10127910
 * func-address: 0x10127910
 * callers: 0x10125020
 * callees: 0x10126b30, 0x10127850
 */

_BYTE *__thiscall sub_10127910(_DWORD *this, _BYTE *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  CREControl *v5; // edi
  _BYTE *result; // eax
  _BYTE *v7; // edi
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
    result = sub_10126B30(v5, 1, a2);
    this[2] = (char *)v5 + 60;
  }
  else
  {
    v7 = (_BYTE *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10127850(this, &v8, this, v7, a2);
  }
  return result;
}
