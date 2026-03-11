/*
 * func-name: sub_10007170
 * func-address: 0x10007170
 * callers: 0x10003bf0, 0x10012e10
 * callees: 0x10008a90, 0x10008b00, 0x1000a4d0, 0x10029d92
 */

_DWORD *__thiscall sub_10007170(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [esp+0h] [ebp-34h] BYREF
  _DWORD *v8; // [esp+10h] [ebp-24h]
  _DWORD *v9; // [esp+18h] [ebp-1Ch]
  unsigned int v10; // [esp+20h] [ebp-14h]
  int *v11; // [esp+24h] [ebp-10h]
  int v12; // [esp+30h] [ebp-4h]

  v11 = &v7;
  v3 = this[1];
  if ( v3 )
    v4 = (this[2] - v3) / 108;
  else
    v4 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( v4 && (unsigned __int8)sub_10008A90() )
  {
    v12 = 0;
    v10 = this[2];
    v9 = 0;
    if ( this[1] > v10 )
      invalid_parameter_noinfo();
    v9 = this;
    v5 = this[1];
    v8 = 0;
    if ( v5 > this[2] )
      invalid_parameter_noinfo();
    v8 = this;
    a2[2] = sub_1000A4D0(this, v5, v9, v10);
    v12 = -1;
  }
  return a2;
}
