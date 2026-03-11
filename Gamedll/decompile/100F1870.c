/*
 * func-name: sub_100F1870
 * func-address: 0x100f1870
 * callers: none
 * callees: none
 */

char __thiscall sub_100F1870(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebx
  unsigned int i; // edi
  int v11; // ecx

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    v11 = this[15];
    if ( !v11 || i >= (this[16] - v11) >> 6 )
      break;
    if ( (unsigned __int8)std::operator==<char>(&a2, v9 + this[15]) )
    {
      std::string::~string(&a2);
      return 1;
    }
    v9 += 64;
  }
  std::string::~string(&a2);
  return 0;
}
