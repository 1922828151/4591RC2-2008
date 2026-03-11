/*
 * func-name: ?PrintHashKeys@Factory@@SAXXZ
 * func-address: 0x1000b390
 * callers: none
 * callees: 0x100e2550
 */

void __cdecl Factory::PrintHashKeys()
{
  unsigned int v0; // esi
  int i; // edi
  int v2; // eax
  int *v3; // ebx
  const char *v4; // eax
  int v5; // [esp-4h] [ebp-14h]

  v0 = 0;
  for ( i = 0; ; i += 32 )
  {
    v2 = dword_10285894;
    if ( !dword_10285894 || v0 >= (dword_10285898 - dword_10285894) >> 5 )
      break;
    v3 = (int *)(i + dword_10285894);
    if ( !dword_10285894 || v0 >= (dword_10285898 - dword_10285894) >> 5 )
    {
      invalid_parameter_noinfo();
      v2 = dword_10285894;
    }
    v5 = *v3;
    v4 = (const char *)std::string::c_str(i + v2 + 4);
    LogPrintf("Hash code %s : %i", v4, v5);
    ++v0;
  }
}
