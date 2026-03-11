/*
 * func-name: sub_100047D0
 * func-address: 0x100047d0
 * callers: none
 * callees: none
 */

int __stdcall sub_100047D0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  const CHAR *v7; // eax

  v7 = (const CHAR *)std::string::c_str(&a1);
  MessageBoxA(0, v7, "Engine Message", 0x10u);
  return std::string::~string(&a1);
}
