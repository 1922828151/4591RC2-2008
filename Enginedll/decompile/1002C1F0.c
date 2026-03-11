/*
 * func-name: ?resize@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@QAEXIUVFormat@VertexManager@@@Z
 * func-address: 0x1002c1f0
 * callers: 0x1002ef80
 * callees: 0x10026520, 0x100265d0
 */

int __thiscall std::vector<VertexManager::VFormat>::resize(
        int this,
        unsigned int a2,
        int a3,
        int a4,
        char a5,
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
  char *v16; // ebp
  char *v17; // edi
  unsigned int v18; // ebp
  char *v19; // ebx
  bool v20; // cc
  _DWORD v22[2]; // [esp+10h] [ebp-14h] BYREF
  int v23; // [esp+20h] [ebp-4h]

  v13 = *(_DWORD *)(this + 4);
  v14 = 0;
  v23 = 0;
  if ( v13 )
    v15 = (int)(*(_DWORD *)(this + 8) - v13) / 40;
  else
    v15 = 0;
  if ( v15 >= a2 )
  {
    if ( v13 )
    {
      v17 = *(char **)(this + 8);
      if ( a2 < (int)&v17[-v13] / 40 )
      {
        if ( v13 > (unsigned int)v17 )
          invalid_parameter_noinfo();
        v18 = *(_DWORD *)(this + 4);
        if ( v18 > *(_DWORD *)(this + 8) )
          invalid_parameter_noinfo();
        v19 = (char *)(v18 + 40 * a2);
        v20 = (unsigned int)v19 <= *(_DWORD *)(this + 8);
        v22[1] = v18;
        if ( !v20 || (unsigned int)v19 < *(_DWORD *)(this + 4) )
          invalid_parameter_noinfo();
        std::vector<VertexManager::VFormat>::erase((char **)this, v22, this, v19, this, v17);
      }
    }
  }
  else
  {
    if ( v13 )
      v14 = (int)(*(_DWORD *)(this + 8) - v13) / 40;
    v16 = *(char **)(this + 8);
    if ( v13 > (unsigned int)v16 )
      invalid_parameter_noinfo();
    std::vector<VertexManager::VFormat>::_Insert_n(this, this, v16, a2 - v14, &a3);
  }
  v23 = -1;
  return std::string::~string(&a5);
}
