/*
 * func-name: ?_Construct_n@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXIABVEditorVar@@@Z
 * func-address: 0x10025860
 * callers: 0x1002bbd0, 0x1002bc30, 0x1002bc50
 * callees: 0x1000a2a0, 0x1000a7e0, 0x1000cc70, 0x1000f7e0, 0x101a2522
 */

int __thiscall std::vector<EditorVar>::_Construct_n(_DWORD *this, unsigned int a2, struct EditorVar *a3)
{
  int result; // eax
  EditorVar *v5; // edi
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
    if ( a2 > 0x2AAAAAA )
      std::vector<EditorVar>::_Xlen();
    v5 = (EditorVar *)sub_1000A7E0(a2);
    v7 = 96 * a2;
    this[3] = (char *)v5 + 96 * a2;
    this[1] = v5;
    this[2] = v5;
    v9 = 0;
    sub_1000CC70(v5, a2, a3);
    result = (int)v5 + v7;
    this[2] = (char *)v5 + v7;
  }
  return result;
}
