/*
 * func-name: ?FindLibrary@MaterialManager@@QAEPAVMaterialLibrary@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1001c2e0
 * callers: none
 * callees: 0x1017a670
 */

int __thiscall MaterialManager::FindLibrary(
        _DWORD *this,
        char a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  bool v14; // bl
  int v15; // ecx
  int v16; // edi
  _BYTE v18[28]; // [esp+Ch] [ebp-28h] BYREF
  int v19; // [esp+30h] [ebp-4h]

  v9 = 0;
  v19 = 0;
  v10 = sub_1017A670(v18, &a2);
  LOBYTE(v19) = 1;
  std::string::operator=(&a2, v10);
  LOBYTE(v19) = 0;
  std::string::~string(v18);
  while ( 1 )
  {
    v11 = this[6];
    if ( !v11 || v9 >= (this[7] - v11) >> 2 )
    {
      v19 = -1;
      std::string::~string(&a2);
      return 0;
    }
    v12 = sub_1017A670(v18, *(_DWORD *)(this[6] + 4 * v9) + 16);
    v13 = a3;
    LOBYTE(v19) = 2;
    if ( a8 < 0x10 )
      v13 = &a3;
    v14 = std::string::find(v12, v13, 0, a7) != -1;
    LOBYTE(v19) = 0;
    std::string::~string(v18);
    if ( v14 )
      break;
    ++v9;
  }
  v15 = this[6];
  if ( !v15 || v9 >= (this[7] - v15) >> 2 )
    invalid_parameter_noinfo();
  v16 = *(_DWORD *)(this[6] + 4 * v9);
  v19 = -1;
  std::string::~string(&a2);
  return v16;
}
