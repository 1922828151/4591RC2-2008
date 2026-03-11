/*
 * func-name: ?GetClassNameA@Factory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@K@Z
 * func-address: 0x1000b4e0
 * callers: 0x10011d80
 * callees: none
 */

int __cdecl Factory::GetClassNameA(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  unsigned int i; // esi

  v2 = dword_10285894;
  v3 = 0;
  for ( i = 0; ; ++i )
  {
    if ( !dword_10285894 || i >= (dword_10285898 - dword_10285894) >> 5 )
    {
      std::string::string(a1, &unk_101BAFFA);
      return a1;
    }
    if ( *(_DWORD *)(v3 + dword_10285894) == a2 )
      break;
    v3 += 32;
  }
  if ( !dword_10285894 || i >= (dword_10285898 - dword_10285894) >> 5 )
  {
    invalid_parameter_noinfo();
    v2 = dword_10285894;
  }
  std::string::string(a1, 32 * i + v2 + 4);
  return a1;
}
