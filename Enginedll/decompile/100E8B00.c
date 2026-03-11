/*
 * func-name: sub_100E8B00
 * func-address: 0x100e8b00
 * callers: 0x100e6600
 * callees: 0x100e7d70, 0x100e89c0
 */

_DWORD *__thiscall sub_100E8B00(_DWORD *this, _DWORD *a2)
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
    result = (_DWORD *)sub_100E7D70(v5, 1, (int)a2);
    this[2] = (char *)v5 + 32;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_100E89C0(this, &v8, this, v7, a2);
  }
  return result;
}
