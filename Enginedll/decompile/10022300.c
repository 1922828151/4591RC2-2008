/*
 * func-name: ?_Construct_n@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAEXIABUAttributeRange@@@Z
 * func-address: 0x10022300
 * callers: 0x10025d80, 0x10025dc0, 0x10025de0
 * callees: 0x1001a060, 0x1001dde0, 0x1006c4d0, 0x1010fea0, 0x101a2522
 */

_DWORD *__thiscall std::vector<AttributeRange>::_Construct_n(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // edi
  _DWORD v6[4]; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  _DWORD *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  result = 0;
  v8 = v6;
  v6[3] = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0xCCCCCCC )
      std::vector<AttributeRange>::_Xlen();
    v5 = (_DWORD *)sub_1006C4D0(a2);
    v7 = 20 * a2;
    this[3] = &v5[5 * a2];
    this[1] = v5;
    this[2] = v5;
    v9 = 0;
    sub_1001DDE0(v5, a2, a3);
    result = &v5[v7 / 4u];
    this[2] = &v5[v7 / 4u];
  }
  return result;
}
