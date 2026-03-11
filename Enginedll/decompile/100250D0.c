/*
 * func-name: ?_Construct_n@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEXIABVBBox@@@Z
 * func-address: 0x100250d0
 * callers: 0x1002b710, 0x1002b770, 0x1002b790
 * callees: 0x10019d00, 0x1001ecd0, 0x100203c0, 0x1006c470, 0x101a2522
 */

_DWORD *__thiscall std::vector<BBox>::_Construct_n(_DWORD *this, unsigned int a2, _DWORD *a3)
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
    if ( a2 > 0x6666666 )
      std::vector<BBox>::_Xlen();
    v5 = (_DWORD *)sub_1006C470(a2);
    v7 = 40 * a2;
    this[3] = &v5[10 * a2];
    this[1] = v5;
    this[2] = v5;
    v9 = 0;
    sub_1001ECD0(v5, a2, a3);
    result = &v5[v7 / 4u];
    this[2] = &v5[v7 / 4u];
  }
  return result;
}
