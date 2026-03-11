/*
 * func-name: sub_100E8A50
 * func-address: 0x100e8a50
 * callers: 0x100e5360, 0x100e5d70
 * callees: 0x100e7ce0, 0x100e8900
 */

_DWORD *__thiscall sub_100E8A50(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  CREControl *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 96;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 96 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100E7CE0(v5, 1, (int)a2);
    this[2] = (char *)v5 + 96;
  }
  else
  {
    v7 = (CREControl *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_100E8900(this, &v8, this, v7, a2);
  }
  return result;
}
