/*
 * func-name: ?FindMaterial@MaterialManager@@QAEPAVMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e2f30
 * callers: 0x10003a50, 0x1003a4c0, 0x10040990, 0x1016e310
 * callees: none
 */

int __thiscall MaterialManager::FindMaterial(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int i; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // edi

  for ( i = 0; ; ++i )
  {
    v10 = this[2];
    if ( !v10 || i >= (this[3] - v10) >> 2 )
    {
      std::string::~string(&a2);
      return 0;
    }
    if ( (unsigned __int8)std::operator==<char>(&a2, *(_DWORD *)(this[2] + 4 * i) + 184) )
      break;
  }
  v11 = this[2];
  if ( !v11 || i >= (this[3] - v11) >> 2 )
    invalid_parameter_noinfo();
  v12 = *(_DWORD *)(this[2] + 4 * i);
  std::string::~string(&a2);
  return v12;
}
