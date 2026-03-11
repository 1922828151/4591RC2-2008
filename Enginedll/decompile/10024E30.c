/*
 * func-name: ?_Construct_n@?$vector@PAVEditorVar@@V?$allocator@PAVEditorVar@@@std@@@std@@QAEXIABQAVEditorVar@@@Z
 * func-address: 0x10024e30
 * callers: 0x1002b300, 0x1002b330, 0x1002b350
 * callees: 0x10019a40, 0x100dd410
 */

void __thiscall std::vector<EditorVar *>::_Construct_n(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // edx

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFF )
      std::vector<EditorVar *>::_Xlen();
    v4 = (_DWORD *)sub_100DD410(a2);
    this[3] = &v4[a2];
    this[1] = v4;
    this[2] = v4;
    v5 = a2;
    v6 = v4;
    do
    {
      *v6 = *a3;
      --v5;
      ++v6;
    }
    while ( v5 );
    this[2] = &v4[a2];
  }
}
