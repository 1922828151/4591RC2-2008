/*
 * func-name: ?FoundInRegistry@Factory@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1000e0c0
 * callers: 0x1000e1b0, 0x10011d80, 0x10011e50
 * callees: 0x1000b770
 */

char __cdecl Factory::FoundInRegistry(char a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v5; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v6; // [esp+14h] [ebp-10h]
  int v7; // [esp+20h] [ebp-4h]

  v1 = &_registry;
  v2 = *(_DWORD **)dword_10285888;
  v7 = 0;
  v5 = &_registry;
  v6 = v2;
  while ( 1 )
  {
    v3 = dword_10285888;
    if ( !v1 || v1 != (_DWORD *)&_registry )
      invalid_parameter_noinfo();
    if ( v2 == v3 )
      break;
    if ( !v1 )
      invalid_parameter_noinfo();
    if ( v2 == (_DWORD *)v1[1] )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v2[10] + 8, &a1) )
    {
      v7 = -1;
      std::string::~string(&a1);
      return 1;
    }
    sub_1000B770(&v5);
    v2 = v6;
    v1 = v5;
  }
  v7 = -1;
  std::string::~string(&a1);
  return 0;
}
