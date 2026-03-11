/*
 * func-name: ??4?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEAAV01@ABV01@@Z
 * func-address: 0x1002bc70
 * callers: 0x1002d760, 0x1002da40, 0x1002dd40, 0x100306d0, 0x10030cb0
 * callees: 0x1000a280, 0x1000b840, 0x1000b980, 0x1000c260, 0x1000cc00, 0x1000d720, 0x1000dfb0, 0x1000f890, 0x101a2500
 */

int __thiscall std::vector<EditorVar>::operator=(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  struct EditorVar *v11; // edi
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 96) == 0 )
  {
    std::vector<EditorVar>::clear((int *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 96;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 96;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (struct EditorVar *)(*(_DWORD *)(a2 + 4) + 96 * std::vector<EditorVar>::size((_DWORD *)this));
      sub_1000B980(*(_DWORD *)(a2 + 4), (int)v11, v6);
      *(_DWORD *)(this + 8) = sub_1000DFB0(v11, *(struct EditorVar **)(a2 + 8), *(EditorVar **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      std::vector<EditorVar>::_Destroy(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = std::vector<EditorVar>::size((_DWORD *)a2);
    if ( std::vector<EditorVar>::_Buy((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_1000DFB0(
                                *(struct EditorVar **)(a2 + 4),
                                *(struct EditorVar **)(a2 + 8),
                                *(EditorVar **)(this + 4));
    return this;
  }
  v8 = sub_1000B840(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), v6);
  sub_1000CC00(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 96 * ((*(_DWORD *)(a2 + 8) - v9) / 96);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
