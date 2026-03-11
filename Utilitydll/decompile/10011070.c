/*
 * func-name: sub_10011070
 * func-address: 0x10011070
 * callers: none
 * callees: none
 */

int __thiscall sub_10011070(_DWORD **this, int a2)
{
  int v3; // esi
  int v4; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this[1] + 4))(this[1]) )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this[1] + 4))(this[1]);
    v3 = a2;
    std::wstring::wstring(a2, v4);
  }
  else
  {
    v3 = a2;
    std::wstring::wstring(a2, &Locale[3]);
  }
  return v3;
}
