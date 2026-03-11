/*
 * func-name: ?RegisterHash@Factory@@SAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10013960
 * callers: 0x10013a60
 * callees: 0x10013230
 */

int __cdecl Factory::RegisterHash(char a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  int v3; // eax
  char *v4; // eax
  char i; // cl
  int v6; // edx
  int v7; // ecx
  char v9; // [esp-20h] [ebp-40h] BYREF
  char v10; // [esp-1Ch] [ebp-3Ch] BYREF
  int v11; // [esp-18h] [ebp-38h]
  int v12; // [esp-14h] [ebp-34h]
  int v13; // [esp-10h] [ebp-30h]
  int v14; // [esp-Ch] [ebp-2Ch]
  int v15; // [esp-8h] [ebp-28h]
  int v16; // [esp-4h] [ebp-24h]
  char *v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-4h]

  v1 = 0;
  v18 = 0;
  if ( dword_10285894 )
    v2 = (dword_10285898 - dword_10285894) >> 5;
  else
    v2 = 0;
  v17 = &v9;
  std::string::string(&v10);
  sub_10013230(&Factory::HashKeys, v2 + 1, v9, v10, v11, v12, v13, v14, v15, v16);
  v3 = dword_10285894;
  if ( !dword_10285894 || v2 >= (dword_10285898 - dword_10285894) >> 5 )
  {
    invalid_parameter_noinfo();
    v3 = dword_10285894;
  }
  std::string::operator=(32 * v2 + v3 + 4, &a1);
  v4 = (char *)std::string::c_str(&a1);
  for ( i = *v4; i; v1 = v6 + 5 * v1 )
  {
    v6 = i;
    i = *++v4;
  }
  v7 = dword_10285894;
  if ( !dword_10285894 || v2 >= (dword_10285898 - dword_10285894) >> 5 )
  {
    invalid_parameter_noinfo();
    v7 = dword_10285894;
  }
  *(_DWORD *)(32 * v2 + v7) = v1;
  v18 = -1;
  return std::string::~string(&a1);
}
