/*
 * func-name: ?push_back@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXABVEditorVar@@@Z
 * func-address: 0x10012c20
 * callers: 0x10006780, 0x100300f0, 0x10038ca0, 0x10045740, 0x1004f700, 0x10051b50, 0x100544f0, 0x100da530, 0x100de140, 0x100e4800, 0x100e8d80, 0x10116c70, 0x1013a9b0, 0x1015bcd0, 0x10162f00, 0x101655b0, 0x10165f10, 0x1016e600
 * callees: 0x1000cc70, 0x10011b30
 */

EditorVar *__thiscall std::vector<EditorVar>::push_back(_DWORD *this, struct EditorVar *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  EditorVar *v5; // edi
  EditorVar *result; // eax
  struct EditorVar *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 96;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 96 )
  {
    v5 = (EditorVar *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1000CC70(v5, 1, a2);
    this[2] = (char *)v5 + 96;
  }
  else
  {
    v7 = (struct EditorVar *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (EditorVar *)std::vector<EditorVar>::insert(this, &v8, this, v7, a2);
  }
  return result;
}
