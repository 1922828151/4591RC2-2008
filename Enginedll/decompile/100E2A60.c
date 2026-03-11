/*
 * func-name: ?FindVar@Material@@QAEPAUShaderVar@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e2a60
 * callers: 0x1003d0f0, 0x100e68a0, 0x1012ffd0, 0x1015fb30
 * callees: none
 */

int __thiscall Material::FindVar(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int i; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // edi

  for ( i = 0; ; ++i )
  {
    v10 = this[70];
    if ( !v10 || i >= (this[71] - v10) >> 2 )
    {
      std::string::~string(&a2);
      return 0;
    }
    if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(this[70] + 4 * i) + 4, &a2) )
      break;
  }
  v11 = this[70];
  if ( !v11 || i >= (this[71] - v11) >> 2 )
    invalid_parameter_noinfo();
  v12 = *(_DWORD *)(this[70] + 4 * i);
  std::string::~string(&a2);
  return v12;
}
