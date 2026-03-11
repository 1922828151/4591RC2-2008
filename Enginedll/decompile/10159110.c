/*
 * func-name: sub_10159110
 * func-address: 0x10159110
 * callers: 0x10157870
 * callees: 0x10157c10, 0x10158f40
 */

_DWORD *__thiscall sub_10159110(_DWORD *this, int *a2)
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
    result = (_DWORD *)sub_10157C10(v5, 1, a2);
    this[2] = v5 + 9;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10158F40(this, &v8, this, v7, a2);
  }
  return result;
}
