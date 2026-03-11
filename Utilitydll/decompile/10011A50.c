/*
 * func-name: sub_10011A50
 * func-address: 0x10011a50
 * callers: none
 * callees: none
 */

__int16 __thiscall sub_10011A50(_DWORD **this, int a2)
{
  int v2; // eax
  int v3; // eax
  const wchar_t *v5; // eax

  if ( *(_DWORD *)(a2 + 24) < 8u )
    v2 = a2 + 4;
  else
    v2 = *(_DWORD *)(a2 + 4);
  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this[2] + 12))(this[2], v2);
  if ( !v3 )
    return 0;
  v5 = (const wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return wtoi(v5);
}
