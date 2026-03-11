/*
 * func-name: sub_1016B870
 * func-address: 0x1016b870
 * callers: 0x10162160
 * callees: 0x1016b400
 */

_DWORD *__thiscall sub_1016B870(_DWORD *this, _WORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _WORD *v5; // eax
  _DWORD *result; // eax
  _WORD *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 1;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 1 )
  {
    v5 = (_WORD *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (_WORD *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_1016B400(this, &v8, this, v7, (int)a2);
  }
  return result;
}
