/*
 * func-name: sub_102A1CC0
 * func-address: 0x102a1cc0
 * callers: 0x1000f8f8
 * callees: 0x10002f86
 */

_DWORD *__thiscall sub_102A1CC0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *result; // eax
  void *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = (_DWORD *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (void *)this[2];
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    return (_DWORD *)sub_10002F86((int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
