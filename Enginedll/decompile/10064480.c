/*
 * func-name: sub_10064480
 * func-address: 0x10064480
 * callers: 0x10063d50, 0x10063e40
 * callees: 0x10063fd0, 0x100643c0
 */

_DWORD *__thiscall sub_10064480(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  _DWORD *v5; // edi
  _DWORD *result; // eax
  char *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 140;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 140 )
  {
    v5 = (_DWORD *)this[2];
    LOBYTE(v8) = 0;
    result = sub_10063FD0(v5, 1, a2);
    this[2] = v5 + 35;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_100643C0(this, &v8, this, v7, a2);
  }
  return result;
}
