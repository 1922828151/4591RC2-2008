/*
 * func-name: ?resize@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXIVEditorVar@@@Z
 * func-address: 0x10011a10
 * callers: 0x10006780, 0x10012bf0
 * callees: 0x10009550, 0x1000f820, 0x1000f8d0
 */

void __thiscall std::vector<EditorVar>::resize(
        int *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26)
{
  unsigned int v27; // ecx
  int v28; // edi
  unsigned int v29; // eax
  struct EditorVar *v30; // ebp
  unsigned int v31; // edi
  unsigned int v32; // ebp
  unsigned int v33; // ebx
  bool v34; // cc
  _DWORD v35[2]; // [esp+10h] [ebp-14h] BYREF
  int v36; // [esp+20h] [ebp-4h]

  v27 = this[1];
  v28 = 0;
  v36 = 0;
  if ( v27 )
    v29 = (int)(this[2] - v27) / 96;
  else
    v29 = 0;
  if ( v29 >= a2 )
  {
    if ( v27 )
    {
      v31 = this[2];
      if ( a2 < (int)(v31 - v27) / 96 )
      {
        if ( v27 > v31 )
          invalid_parameter_noinfo();
        v32 = this[1];
        if ( v32 > this[2] )
          invalid_parameter_noinfo();
        v33 = 96 * a2 + v32;
        v34 = v33 <= this[2];
        v35[1] = v32;
        if ( !v34 || v33 < this[1] )
          invalid_parameter_noinfo();
        std::vector<EditorVar>::erase(this, v35, (int)this, v33, (int)this, v31);
      }
    }
  }
  else
  {
    if ( v27 )
      v28 = (int)(this[2] - v27) / 96;
    v30 = (struct EditorVar *)this[2];
    if ( v27 > (unsigned int)v30 )
      invalid_parameter_noinfo();
    std::vector<EditorVar>::_Insert_n((int)this, (int)this, v30, a2 - v28, (struct EditorVar *)&a3);
  }
  v36 = -1;
  EditorVar::~EditorVar((EditorVar *)&a3);
}
