/*
 * func-name: ?Register@@YGXP6AXXZ@Z
 * func-address: 0x10080010
 * callers: none
 * callees: none
 */

void __stdcall Register(void (__cdecl *a1)())
{
  *((_DWORD *)Editor::inst + 569) = a1;
  a1();
}
