/*
 * func-name: ?reserve@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXI@Z
 * func-address: 0x10025920
 * callers: none
 * callees: 0x1000a2a0, 0x1000a7e0, 0x1000c0c0, 0x1000cc00, 0x101a2500, 0x101a2522
 */

EditorVar *__thiscall std::vector<EditorVar>::reserve(int this, unsigned int a2)
{
  EditorVar *result; // eax
  EditorVar *v4; // eax
  struct EditorVar *v5; // ebx
  bool v6; // cc
  struct EditorVar *v7; // edi
  int v8; // ebx
  int v9; // edi
  char *v10; // edx
  _BYTE v11[16]; // [esp+0h] [ebp-24h] BYREF
  EditorVar *v12; // [esp+10h] [ebp-14h]
  _BYTE *v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+20h] [ebp-4h]

  v13 = v11;
  if ( a2 > 0x2AAAAAA )
    std::vector<EditorVar>::_Xlen();
  result = *(EditorVar **)(this + 4);
  if ( result )
    result = (EditorVar *)((*(_DWORD *)(this + 12) - (int)result) / 96);
  if ( (unsigned int)result < a2 )
  {
    v4 = (EditorVar *)sub_1000A7E0(a2);
    v5 = *(struct EditorVar **)(this + 8);
    v6 = *(_DWORD *)(this + 4) <= (unsigned int)v5;
    v12 = v4;
    v14 = 0;
    if ( !v6 )
      invalid_parameter_noinfo();
    v7 = *(struct EditorVar **)(this + 4);
    if ( (unsigned int)v7 > *(_DWORD *)(this + 8) )
      invalid_parameter_noinfo();
    v11[12] = 0;
    sub_1000C0C0(v7, v5, v12);
    v8 = *(_DWORD *)(this + 4);
    v14 = -1;
    if ( v8 )
      v9 = (*(_DWORD *)(this + 8) - v8) / 96;
    else
      v9 = 0;
    if ( v8 )
    {
      sub_1000CC00(v8, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    result = v12;
    v10 = (char *)v12 + 96 * v9;
    *(_DWORD *)(this + 12) = (char *)v12 + 96 * a2;
    *(_DWORD *)(this + 8) = v10;
    *(_DWORD *)(this + 4) = result;
  }
  return result;
}
