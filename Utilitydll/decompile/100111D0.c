/*
 * func-name: sub_100111D0
 * func-address: 0x100111d0
 * callers: none
 * callees: 0x10017970, 0x100179f0, 0x10018cf2
 */

int __thiscall sub_100111D0(_DWORD **this, int a2, int a3)
{
  const CHAR *v4; // eax
  int v5; // esi
  const WCHAR *v7; // eax
  wchar_t *v8; // [esp+28h] [ebp+8h]
  char *v9; // [esp+28h] [ebp+8h]

  if ( *(_DWORD *)(a3 + 24) < 0x10u )
    v4 = (const CHAR *)(a3 + 4);
  else
    v4 = *(const CHAR **)(a3 + 4);
  v8 = Outpop::Utility::Ascii_To_Wide::convert(v4);
  v5 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*this[2] + 12))(this[2], v8);
  operator delete(v8);
  if ( v5 )
  {
    v7 = (const WCHAR *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    v9 = Outpop::Utility::Wide_To_Ascii::convert(v7);
    std::string::string(a2, v9);
    operator delete(v9);
  }
  else
  {
    std::string::string(a2, Locale);
  }
  return a2;
}
