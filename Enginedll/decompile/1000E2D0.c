/*
 * func-name: ?GetIndex@Factory@@SAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1000e2d0
 * callers: none
 * callees: 0x1000b770
 */

int __cdecl Factory::GetIndex(char a1)
{
  int v1; // ebp
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  _DWORD *v6; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v1 = 0;
  v2 = &_registry;
  v3 = *(_DWORD **)dword_10285888;
  v8 = 0;
  v6 = &_registry;
  v7 = v3;
  while ( 1 )
  {
    v4 = dword_10285888;
    if ( !v2 || v2 != (_DWORD *)&_registry )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v3 == (_DWORD *)v2[1] )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v3[10] + 8, &a1) )
    {
      v8 = -1;
      std::string::~string(&a1);
      return v1;
    }
    ++v1;
    sub_1000B770(&v6);
    v3 = v7;
    v2 = v6;
  }
  v8 = -1;
  std::string::~string(&a1);
  return -1;
}
