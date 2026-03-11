/*
 * func-name: sub_1011A980
 * func-address: 0x1011a980
 * callers: 0x10119d20
 * callees: 0x1011a120, 0x1011a8d0
 */

_DWORD *__thiscall sub_1011A980(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 40;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 40 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_1011A120(v5, 1, a2);
    this[2] = (char *)v5 + 40;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_1011A8D0(this, &v8, this, v7, a2);
  }
  return result;
}
