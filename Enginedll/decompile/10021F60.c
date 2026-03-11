/*
 * func-name: sub_10021F60
 * func-address: 0x10021f60
 * callers: 0x10031290
 * callees: 0x1001a670, 0x1001b350, 0x1001e620, 0x1010fea0, 0x101a2522
 */

_DWORD *__thiscall sub_10021F60(_DWORD *this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  char *v5; // eax
  _DWORD *v6; // eax
  bool v7; // cc
  _DWORD *v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  _DWORD *v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) >> 4;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFF )
      sub_1001A670();
    v5 = (char *)sub_1001B350(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = &v5[16 * v4];
    v6 = *(_DWORD **)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= (unsigned int)v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    this[2] = sub_1001E620(v8, v11, (_DWORD *)this[1]);
  }
  return this;
}
