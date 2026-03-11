/*
 * func-name: ?_Construct_n@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEXIABUVFormat@VertexManager@@@Z
 * func-address: 0x10026280
 * callers: 0x1002bfc0, 0x1002c030, 0x1002c050
 * callees: 0x1001a200, 0x1001ed40, 0x10022a00, 0x1006c470, 0x101a2522
 */

char *__thiscall std::vector<VertexManager::VFormat>::_Construct_n(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  char *result; // eax
  CREControl *v5; // edi
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
      std::vector<VertexManager::VFormat>::_Xlen();
    v5 = (CREControl *)sub_1006C470(a2);
    v7 = 40 * a2;
    this[3] = (char *)v5 + 40 * a2;
    this[1] = v5;
    this[2] = v5;
    v9 = 0;
    sub_1001ED40(v5, a2, a3);
    result = (char *)v5 + v7;
    this[2] = (char *)v5 + v7;
  }
  return result;
}
