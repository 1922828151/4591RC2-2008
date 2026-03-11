/*
 * func-name: sub_100021E0
 * func-address: 0x100021e0
 * callers: none
 * callees: none
 */

int __stdcall sub_100021E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  int v9; // esi

  v7 = 0;
  while ( !(unsigned __int8)std::operator==<char>(&a1, (&off_10038000)[2 * v7]) )
  {
    if ( ++v7 >= 108 )
    {
      std::string::~string(&a1);
      return -1;
    }
  }
  v9 = dword_10038004[2 * v7];
  std::string::~string(&a1);
  return v9;
}
