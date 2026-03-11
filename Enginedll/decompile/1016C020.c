/*
 * func-name: sub_1016C020
 * func-address: 0x1016c020
 * callers: 0x10168a40
 * callees: 0x1016b9a0, 0x1016bf70
 */

_DWORD *__thiscall sub_1016C020(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  CREControl *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 52;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 52 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1016B9A0(v5, 1, a2);
    this[2] = (char *)v5 + 52;
  }
  else
  {
    v7 = (CREControl *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_1016BF70(this, &v8, this, v7, a2);
  }
  return result;
}
