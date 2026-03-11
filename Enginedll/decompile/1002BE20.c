/*
 * func-name: ?_Assign_n@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@IAEXIABVEditorVar@@@Z
 * func-address: 0x1002be20
 * callers: 0x1002ef70
 * callees: 0x10009550, 0x100095b0, 0x1000f820, 0x1000f8d0
 */

void __thiscall std::vector<EditorVar>::_Assign_n(int *this, unsigned int a2, struct EditorVar *a3)
{
  unsigned int v4; // edi
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // ebx
  struct EditorVar *v8; // edi
  int v9; // [esp+Ch] [ebp-74h] BYREF
  _BYTE v10[96]; // [esp+14h] [ebp-6Ch] BYREF
  int v11; // [esp+7Ch] [ebp-4h]

  EditorVar::EditorVar((EditorVar *)v10, a3);
  v4 = this[2];
  v5 = this[1] < v4;
  v6 = this[1] == v4;
  v11 = 0;
  if ( !v5 && !v6 )
    invalid_parameter_noinfo();
  v7 = this[1];
  if ( v7 > this[2] )
    invalid_parameter_noinfo();
  std::vector<EditorVar>::erase(this, &v9, (int)this, v7, (int)this, v4);
  v8 = (struct EditorVar *)this[1];
  if ( (unsigned int)v8 > this[2] )
    invalid_parameter_noinfo();
  std::vector<EditorVar>::_Insert_n((int)this, (int)this, v8, a2, (struct EditorVar *)v10);
  v11 = -1;
  EditorVar::~EditorVar((EditorVar *)v10);
}
