/*
 * func-name: sub_10159060
 * func-address: 0x10159060
 * callers: 0x10157440, 0x10157630
 * callees: 0x10157b60, 0x10158e90
 */

_DWORD *__thiscall sub_10159060(_DWORD *this, int *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 36;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 36 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_10157B60(v5, 1, a2);
    this[2] = v5 + 9;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10158E90(this, &v8, this, v7, a2);
  }
  return result;
}
