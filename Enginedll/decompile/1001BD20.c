/*
 * func-name: ??8ScriptData@@QAE_NAAU0@@Z
 * func-address: 0x1001bd20
 * callers: none
 * callees: none
 */

BOOL __thiscall ScriptData::operator==(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax

  if ( !(unsigned __int8)std::operator==<char>(this, a2) )
    return 0;
  v3 = this[33];
  v4 = v3 ? (this[34] - v3) / 28 : 0;
  v5 = *(_DWORD *)(a2 + 132);
  if ( v5 )
    v5 = (*(_DWORD *)(a2 + 136) - v5) / 28;
  return v4 == v5;
}
