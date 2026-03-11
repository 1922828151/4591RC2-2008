/*
 * func-name: ?_Assign_n@?$vector@PAVEditorVar@@V?$allocator@PAVEditorVar@@@std@@@std@@IAEXIABQAVEditorVar@@@Z
 * func-address: 0x1002b4e0
 * callers: 0x1002ece0
 * callees: 0x10024ea0, 0x100a1d10
 */

int *__thiscall std::vector<EditorVar *>::_Assign_n(_DWORD *this, unsigned int a2, int *a3)
{
  void *v4; // edi
  bool v5; // cf
  bool v6; // zf
  void *v7; // ebx
  char *v8; // edi
  int v10; // [esp+Ch] [ebp-8h] BYREF

  v4 = (void *)this[2];
  v5 = this[1] < (unsigned int)v4;
  v6 = this[1] == (_DWORD)v4;
  a3 = (int *)*a3;
  if ( !v5 && !v6 )
    invalid_parameter_noinfo();
  v7 = (void *)this[1];
  if ( (unsigned int)v7 > this[2] )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((int)&v10, (int)this, v7, (int)this, v4);
  v8 = (char *)this[1];
  if ( (unsigned int)v8 > this[2] )
    invalid_parameter_noinfo();
  return std::vector<EditorVar *>::_Insert_n((int)this, (int)this, v8, a2, (int *)&a3);
}
