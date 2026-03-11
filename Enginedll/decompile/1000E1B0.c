/*
 * func-name: ?IsInsertable@Factory@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1000e1b0
 * callers: 0x10083340
 * callees: 0x1000b770, 0x1000e0c0
 */

char __cdecl Factory::IsInsertable(char a1)
{
  char *v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
  char v4; // bl
  char v6[44]; // [esp-1Ch] [ebp-40h] BYREF
  char *v7; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v7 = v6;
  v9 = 0;
  std::string::string(v6, &a1);
  if ( Factory::FoundInRegistry(v6[0]) )
  {
    v1 = (char *)&_registry;
    v2 = *(_DWORD **)dword_10285888;
    v7 = (char *)&_registry;
    v8 = v2;
    while ( 1 )
    {
      v3 = dword_10285888;
      if ( !v1 || v1 != (char *)&_registry )
        invalid_parameter_noinfo();
      if ( v2 == v3 )
        break;
      if ( !v1 )
        invalid_parameter_noinfo();
      if ( v2 == *((_DWORD **)v1 + 1) )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(v2[10] + 8, &a1) )
      {
        if ( v2 == *((_DWORD **)v1 + 1) )
          invalid_parameter_noinfo();
        v4 = *(_BYTE *)(v2[10] + 5);
        v9 = -1;
        std::string::~string(&a1);
        return v4;
      }
      sub_1000B770(&v7);
      v2 = v8;
      v1 = v7;
    }
  }
  v9 = -1;
  std::string::~string(&a1);
  return 0;
}
