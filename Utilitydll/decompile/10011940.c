/*
 * func-name: sub_10011940
 * func-address: 0x10011940
 * callers: none
 * callees: none
 */

int __thiscall sub_10011940(_DWORD **this, int a2)
{
  int v2; // eax
  int result; // eax
  const wchar_t *v4; // eax

  if ( *(_DWORD *)(a2 + 24) < 8u )
    v2 = a2 + 4;
  else
    v2 = *(_DWORD *)(a2 + 4);
  result = (*(int (__thiscall **)(_DWORD *, int))(*this[2] + 12))(this[2], v2);
  if ( result )
  {
    v4 = (const wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
    return wtoi64(v4);
  }
  return result;
}
