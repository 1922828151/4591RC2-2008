/*
 * func-name: ?FoundActorClass@Factory@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100120c0
 * callers: none
 * callees: 0x10011fe0, 0x101a2500
 */

char __cdecl Factory::FoundActorClass(char a1)
{
  int v1; // ebx
  unsigned int i; // ebp
  char *v3; // esi
  char *v4; // edi
  char *v5; // esi
  char *v6; // edi
  int v8; // [esp+10h] [ebp-1Ch] BYREF
  void *v9; // [esp+14h] [ebp-18h]
  char *v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+28h] [ebp-4h]

  v1 = 0;
  v12 = 0;
  Factory::GetAllActorClasses(&v8);
  LOBYTE(v12) = 1;
  for ( i = 0; ; ++i )
  {
    v3 = (char *)v9;
    v4 = v10;
    if ( !v9 || i >= (v10 - (_BYTE *)v9) / 28 )
      break;
    if ( (unsigned __int8)std::operator==<char>(&a1, (char *)v9 + v1) )
    {
      v5 = (char *)v9;
      LOBYTE(v12) = 0;
      if ( v9 )
      {
        v6 = v10;
        if ( v9 != v10 )
        {
          do
          {
            std::string::~string(v5);
            v5 += 28;
          }
          while ( v5 != v6 );
          v5 = (char *)v9;
        }
        operator delete(v5);
      }
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = -1;
      std::string::~string(&a1);
      return 1;
    }
    v1 += 28;
  }
  LOBYTE(v12) = 0;
  if ( v9 )
  {
    if ( v9 != v10 )
    {
      do
      {
        std::string::~string(v3);
        v3 += 28;
      }
      while ( v3 != v4 );
      v3 = (char *)v9;
    }
    operator delete(v3);
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  std::string::~string(&a1);
  return 0;
}
