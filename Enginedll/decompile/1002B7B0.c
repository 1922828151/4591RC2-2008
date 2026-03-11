/*
 * func-name: ?resize@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEXIVBBox@@@Z
 * func-address: 0x1002b7b0
 * callers: 0x1002ed10, 0x1012fb50
 * callees: 0x10021730, 0x10025440, 0x1017a0b0
 */

int __thiscall std::vector<BBox>::resize(
        int *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  unsigned int v13; // ecx
  int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // ebp
  unsigned int v19; // ebx
  bool v20; // cc
  _DWORD v22[2]; // [esp+10h] [ebp-14h] BYREF
  int v23; // [esp+20h] [ebp-4h]

  v13 = this[1];
  v14 = 0;
  v23 = 0;
  if ( v13 )
    v15 = (int)(this[2] - v13) / 40;
  else
    v15 = 0;
  if ( v15 >= a2 )
  {
    if ( v13 )
    {
      v17 = this[2];
      if ( a2 < (int)(v17 - v13) / 40 )
      {
        if ( v13 > v17 )
          invalid_parameter_noinfo();
        v18 = this[1];
        if ( v18 > this[2] )
          invalid_parameter_noinfo();
        v19 = v18 + 40 * a2;
        v20 = v19 <= this[2];
        v22[1] = v18;
        if ( !v20 || v19 < this[1] )
          invalid_parameter_noinfo();
        std::vector<BBox>::erase(this, v22, (int)this, v19, (int)this, v17);
      }
    }
  }
  else
  {
    if ( v13 )
      v14 = (int)(this[2] - v13) / 40;
    v16 = this[2];
    if ( v13 > v16 )
      invalid_parameter_noinfo();
    std::vector<BBox>::_Insert_n(this, (int)this, v16, a2 - v14, &a3);
  }
  v23 = -1;
  return sub_1017A0B0(&a3);
}
