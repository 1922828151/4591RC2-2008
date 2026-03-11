/*
 * func-name: sub_1001D730
 * func-address: 0x1001d730
 * callers: 0x10004910, 0x1001a980, 0x10023940
 * callees: 0x100090a0, 0x1001de20, 0x1001e7b0, 0x10029d92
 */

_DWORD *__thiscall sub_1001D730(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  unsigned int v5; // esi
  int v6; // eax
  _DWORD v8[6]; // [esp+0h] [ebp-40h] BYREF
  _DWORD *v9; // [esp+18h] [ebp-28h]
  _DWORD *v10; // [esp+20h] [ebp-20h]
  _DWORD *v11; // [esp+28h] [ebp-18h]
  unsigned int v12; // [esp+2Ch] [ebp-14h]
  _DWORD *v13; // [esp+30h] [ebp-10h]
  int v14; // [esp+3Ch] [ebp-4h]

  v13 = v8;
  v3 = this[1];
  if ( v3 )
    v4 = (this[2] - v3) / 12;
  else
    v4 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( v4 && (unsigned __int8)sub_1001DE20() )
  {
    v14 = 0;
    v12 = this[2];
    v10 = 0;
    if ( this[1] > v12 )
      invalid_parameter_noinfo();
    v10 = this;
    v5 = this[1];
    v9 = 0;
    if ( v5 > this[2] )
      invalid_parameter_noinfo();
    v9 = this;
    v6 = a2[1];
    v8[4] = v10;
    v8[5] = v12;
    v11 = this;
    v12 = v5;
    LOBYTE(v12) = 0;
    a2[2] = sub_1001E7B0(v5, v6);
    v14 = -1;
  }
  return a2;
}
