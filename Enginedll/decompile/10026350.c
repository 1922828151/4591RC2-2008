/*
 * func-name: ?reserve@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEXI@Z
 * func-address: 0x10026350
 * callers: none
 * callees: 0x1001a200, 0x1001e710, 0x100229d0, 0x1006c470, 0x101a2500, 0x101a2522
 */

unsigned int __thiscall std::vector<VertexManager::VFormat>::reserve(int *this, unsigned int a2)
{
  unsigned int result; // eax
  void *v4; // eax
  _DWORD *v5; // ebx
  bool v6; // cc
  _DWORD *v7; // edi
  int v8; // ebx
  int v9; // edi
  _BYTE v10[16]; // [esp+0h] [ebp-24h] BYREF
  void *v11; // [esp+10h] [ebp-14h]
  _BYTE *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v12 = v10;
  if ( a2 > 0x6666666 )
    std::vector<VertexManager::VFormat>::_Xlen();
  result = this[1];
  if ( result )
    result = (int)(this[3] - result) / 40;
  if ( result < a2 )
  {
    v4 = (void *)sub_1006C470(a2);
    v5 = (_DWORD *)this[2];
    v6 = this[1] <= (unsigned int)v5;
    v11 = v4;
    v13 = 0;
    if ( !v6 )
      invalid_parameter_noinfo();
    v7 = (_DWORD *)this[1];
    if ( (unsigned int)v7 > this[2] )
      invalid_parameter_noinfo();
    v10[12] = 0;
    sub_1001E710(v7, v5, (CREControl *)v11);
    v8 = this[1];
    v13 = -1;
    if ( v8 )
      v9 = (this[2] - v8) / 40;
    else
      v9 = 0;
    if ( v8 )
    {
      std::vector<VertexManager::VFormat>::_Destroy(v8, this[2]);
      operator delete((void *)this[1]);
    }
    result = (unsigned int)v11;
    this[3] = (int)v11 + 40 * a2;
    this[2] = result + 40 * v9;
    this[1] = result;
  }
  return result;
}
