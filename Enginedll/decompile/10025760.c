/*
 * func-name: ??0?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAE@ABV01@@Z
 * func-address: 0x10025760
 * callers: 0x100292f0, 0x100296d0, 0x10029dd0, 0x1002e7f0, 0x10030270
 * callees: 0x1000a2a0, 0x1000a7e0, 0x1000f7e0, 0x1001e530, 0x101a2522
 */

int __thiscall std::vector<EditorVar>::vector<EditorVar>(int this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  char *v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  struct EditorVar *v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 96;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x2AAAAAA )
      std::vector<EditorVar>::_Xlen();
    v5 = (char *)sub_1000A7E0(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = &v5[96 * v4];
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(struct EditorVar **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1001E530(v8, (struct EditorVar *)v11, *(EditorVar **)(this + 4));
  }
  return this;
}
