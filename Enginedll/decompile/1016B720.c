/*
 * func-name: sub_1016B720
 * func-address: 0x1016b720
 * callers: 0x10167810
 * callees: 0x1016b0d0
 */

_DWORD *__thiscall sub_1016B720(_DWORD *this, int *a2)
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
      invalid_parameter_noinfo();
    return sub_1016B0D0(this, &v8, this, v7, a2);
  }
  return result;
}
