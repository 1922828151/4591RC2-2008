/*
 * func-name: sub_10011650
 * func-address: 0x10011650
 * callers: none
 * callees: 0x100179f0, 0x10018cf2
 */

char __thiscall sub_10011650(_DWORD **this, int a2)
{
  const CHAR *v3; // eax
  int v4; // edi
  const wchar_t *v6; // eax
  wchar_t *v7; // [esp+1Ch] [ebp+4h]

  if ( *(_DWORD *)(a2 + 24) < 0x10u )
    v3 = (const CHAR *)(a2 + 4);
  else
    v3 = *(const CHAR **)(a2 + 4);
  v7 = Outpop::Utility::Ascii_To_Wide::convert(v3);
  v4 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*this[2] + 12))(this[2], v7);
  operator delete(v7);
  if ( !v4 )
    return 0;
  v6 = (const wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  return wtoi(v6);
}
