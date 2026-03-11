/*
 * func-name: sub_10011860
 * func-address: 0x10011860
 * callers: none
 * callees: none
 */

int __thiscall sub_10011860(_DWORD **this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax

  if ( *(_DWORD *)(a3 + 24) < 8u )
    v3 = a3 + 4;
  else
    v3 = *(_DWORD *)(a3 + 4);
  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this[2] + 12))(this[2], v3);
  if ( v4 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    v5 = a2;
    std::wstring::wstring(a2, v6);
  }
  else
  {
    v5 = a2;
    std::wstring::wstring(a2, &Locale[3]);
  }
  return v5;
}
