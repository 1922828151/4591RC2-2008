/*
 * func-name: sub_101382C0
 * func-address: 0x101382c0
 * callers: 0x10001ef1
 * callees: 0x1000259f
 */

int __stdcall sub_101382C0(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v9; // esi

  v7 = *(_DWORD *)sub_1000259F(&a1);
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 56);
    std::string::~string(&a1);
    return v9;
  }
  else
  {
    std::string::~string(&a1);
    return 0;
  }
}
