/*
 * func-name: ?FindLight@World@@QAEPAVLight@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10137c40
 * callers: none
 * callees: none
 */

int __thiscall World::FindLight(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int i; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // edi

  for ( i = 0; ; ++i )
  {
    v10 = this[810];
    if ( !v10 || i >= (this[811] - v10) >> 2 )
    {
      std::string::~string(&a2);
      return 0;
    }
    if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(this[810] + 4 * i) + 444, &a2) )
      break;
  }
  v11 = this[810];
  if ( !v11 || i >= (this[811] - v11) >> 2 )
    invalid_parameter_noinfo();
  v12 = *(_DWORD *)(this[810] + 4 * i);
  std::string::~string(&a2);
  return v12;
}
