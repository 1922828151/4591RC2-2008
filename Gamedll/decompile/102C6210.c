/*
 * func-name: sub_102C6210
 * func-address: 0x102c6210
 * callers: 0x102c4300
 * callees: 0x102c5f50
 */

_DWORD *__thiscall sub_102C6210(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int *v5; // eax
  _DWORD *result; // eax
  _DWORD *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = (int *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (_DWORD *)this[2];
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    return sub_102C5F50(this, &v8, this, v7, a2);
  }
  return result;
}
