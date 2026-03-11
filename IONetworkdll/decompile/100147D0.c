/*
 * func-name: sub_100147D0
 * func-address: 0x100147d0
 * callers: 0x1000e250
 * callees: 0x10014e40, 0x1003ba70, 0x1003c570, 0x1004f112
 */

_DWORD *__thiscall sub_100147D0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  unsigned int v5; // esi
  int v6; // eax
  _DWORD v8[5]; // [esp+0h] [ebp-40h] BYREF
  unsigned int v9; // [esp+14h] [ebp-2Ch]
  _DWORD *v10; // [esp+18h] [ebp-28h]
  _DWORD *v11; // [esp+20h] [ebp-20h]
  _DWORD *v12; // [esp+28h] [ebp-18h]
  unsigned int v13; // [esp+2Ch] [ebp-14h]
  _DWORD *v14; // [esp+30h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-4h]

  v14 = v8;
  v3 = this[1];
  if ( v3 )
    v4 = (this[2] - v3) >> 2;
  else
    v4 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( v4 && (unsigned __int8)sub_10014E40() )
  {
    v15 = 0;
    v13 = this[2];
    v11 = 0;
    if ( this[1] > v13 )
      invalid_parameter_noinfo();
    v11 = this;
    v5 = this[1];
    v10 = 0;
    if ( v5 > this[2] )
      invalid_parameter_noinfo();
    v10 = this;
    v6 = a2[1];
    v8[4] = v11;
    v9 = v13;
    v12 = this;
    v13 = v5;
    LOBYTE(v13) = 0;
    a2[2] = sub_1003C570(v5, v9, v6);
    v15 = -1;
  }
  return a2;
}
