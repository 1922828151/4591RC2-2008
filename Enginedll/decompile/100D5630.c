/*
 * func-name: sub_100D5630
 * func-address: 0x100d5630
 * callers: 0x100cdb80
 * callees: 0x100d5160, 0x100d5580
 */

_DWORD *__thiscall sub_100D5630(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 20;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 20 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100D5160(v5, 1, (int)a2);
    this[2] = (char *)v5 + 20;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_100D5580(this, &v8, this, v7, a2);
  }
  return result;
}
