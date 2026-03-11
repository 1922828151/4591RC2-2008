/*
 * func-name: ??0?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAE@ABV01@@Z
 * func-address: 0x10022210
 * callers: 0x100296d0, 0x100eaad0
 * callees: 0x1001a060, 0x1006c4d0, 0x100a1cd0, 0x1010fea0, 0x101a2522
 */

_DWORD *__thiscall std::vector<AttributeRange>::vector<AttributeRange>(_DWORD *this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  unsigned int v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 20;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0xCCCCCCC )
      std::vector<AttributeRange>::_Xlen();
    v5 = sub_1006C4D0(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + 20 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    this[2] = sub_100A1CD0(v8, v11, this[1]);
  }
  return this;
}
