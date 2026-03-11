/*
 * func-name: ?GetHashKey@Factory@@SAKV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1000b400
 * callers: none
 * callees: none
 */

int __cdecl Factory::GetHashKey(char a1)
{
  int v1; // edi
  unsigned int i; // esi
  int v3; // ecx
  int v4; // esi

  v1 = 0;
  for ( i = 0; ; ++i )
  {
    if ( !dword_10285894 || i >= (dword_10285898 - dword_10285894) >> 5 )
    {
      std::string::~string(&a1);
      return 0;
    }
    if ( (unsigned __int8)std::operator==<char>(v1 + dword_10285894 + 4, &a1) )
      break;
    v1 += 32;
  }
  v3 = dword_10285894;
  if ( !dword_10285894 || i >= (dword_10285898 - dword_10285894) >> 5 )
  {
    invalid_parameter_noinfo();
    v3 = dword_10285894;
  }
  v4 = *(_DWORD *)(32 * i + v3);
  std::string::~string(&a1);
  return v4;
}
