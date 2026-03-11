/*
 * func-name: ?FindPostProcessEffect@PostProcess@@QAEPAVPostProcessEffect@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
 * func-address: 0x101065a0
 * callers: 0x1012f5d0, 0x10131750
 * callees: none
 */

int __thiscall PostProcess::FindPostProcessEffect(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  unsigned int i; // edi
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // edi

  for ( i = 0; ; ++i )
  {
    v17 = this[17];
    if ( !v17 || i >= (this[18] - v17) >> 2 )
    {
      std::string::~string(&a2);
      std::string::~string(&a9);
      return 0;
    }
    if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(this[17] + 4 * i) + 20, &a2) )
    {
      v18 = this[17];
      if ( !v18 || i >= (this[18] - v18) >> 2 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(this[17] + 4 * i) + 48, &a9) )
        break;
    }
  }
  v19 = this[17];
  if ( !v19 || i >= (this[18] - v19) >> 2 )
    invalid_parameter_noinfo();
  v20 = *(_DWORD *)(this[17] + 4 * i);
  std::string::~string(&a2);
  std::string::~string(&a9);
  return v20;
}
