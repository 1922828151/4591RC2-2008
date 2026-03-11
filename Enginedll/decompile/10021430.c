/*
 * func-name: ?reserve@?$vector@PAVEditorVar@@V?$allocator@PAVEditorVar@@@std@@@std@@QAEXI@Z
 * func-address: 0x10021430
 * callers: none
 * callees: 0x10019a40, 0x100dd410, 0x101a2500
 */

unsigned int __thiscall std::vector<EditorVar *>::reserve(int this, unsigned int a2)
{
  int v3; // ecx
  unsigned int result; // eax
  char *v5; // eax
  unsigned int v6; // edi
  char *v7; // ebx
  const void *v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // edi

  if ( a2 > 0x3FFFFFFF )
    std::vector<EditorVar *>::_Xlen();
  v3 = *(_DWORD *)(this + 4);
  if ( v3 )
    result = (*(_DWORD *)(this + 12) - v3) >> 2;
  else
    result = 0;
  if ( result < a2 )
  {
    v5 = (char *)sub_100DD410(a2);
    v6 = *(_DWORD *)(this + 8);
    v7 = v5;
    if ( *(_DWORD *)(this + 4) > v6 )
      invalid_parameter_noinfo();
    v8 = *(const void **)(this + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(this + 8) )
      invalid_parameter_noinfo();
    v9 = (int)(v6 - (_DWORD)v8) >> 2;
    if ( v9 )
      memmove_s(v7, 4 * v9, v8, 4 * v9);
    v10 = *(_DWORD *)(this + 4);
    if ( v10 )
      v11 = (*(_DWORD *)(this + 8) - v10) >> 2;
    else
      v11 = 0;
    if ( v10 )
      operator delete(*(void **)(this + 4));
    result = a2;
    *(_DWORD *)(this + 4) = v7;
    *(_DWORD *)(this + 12) = &v7[4 * a2];
    *(_DWORD *)(this + 8) = &v7[4 * v11];
  }
  return result;
}
