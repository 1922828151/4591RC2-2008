/*
 * func-name: sub_10011100
 * func-address: 0x10011100
 * callers: 0x100127d0
 * callees: 0x10017970, 0x10018cf2
 */

int __thiscall sub_10011100(_DWORD **this, int a2)
{
  const WCHAR *v4; // eax
  char *v5; // [esp+10h] [ebp-10h]

  if ( (*(int (__thiscall **)(_DWORD *))(*this[1] + 4))(this[1]) )
  {
    v4 = (const WCHAR *)(*(int (__thiscall **)(_DWORD *))(*this[1] + 4))(this[1]);
    v5 = Outpop::Utility::Wide_To_Ascii::convert(v4);
    std::string::string(a2, v5);
    operator delete(v5);
  }
  else
  {
    std::string::string(a2, Locale);
  }
  return a2;
}
