/*
 * func-name: ?SetSharedInt@ShaderManager@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x10120ab0
 * callers: 0x10121160
 * callees: none
 */

int __thiscall ShaderManager::SetSharedInt(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // edi
  unsigned int i; // ebp
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  void (__stdcall **v15)(_DWORD *, int, int); // edi
  int v16; // eax
  int v18; // [esp-4h] [ebp-24h]
  int v19; // [esp+10h] [ebp-10h]

  v10 = 0;
  for ( i = 0; ; ++i )
  {
    v12 = this[30];
    v19 = v10;
    if ( !v12 || i >= (this[31] - v12) >> 5 )
      break;
    v13 = this[30];
    if ( *(_DWORD *)(*(_DWORD *)(v13 + v10 + 28) + 16) )
    {
      if ( !v13 || i >= (this[31] - v13) >> 5 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD **)(*(_DWORD *)(this[30] + v10 + 28) + 16);
      v18 = a9;
      v15 = (void (__stdcall **)(_DWORD *, int, int))(*v14 + 104);
      v16 = std::string::c_str(&a2);
      (*v15)(v14, v16, v18);
      v10 = v19;
    }
    v10 += 32;
  }
  return std::string::~string(&a2);
}
