/*
 * func-name: sub_100066B0
 * func-address: 0x100066b0
 * callers: 0x10005ef0, 0x10006130
 * callees: 0x100039f0, 0x100065f0
 */

_DWORD *__thiscall sub_100066B0(_DWORD *this, int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // edi
  _DWORD *result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 28;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 28 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_100039F0(v5, 1, a2);
    this[2] = v5 + 28;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_100065F0(this, &v8, this, v7, a2);
  }
  return result;
}
