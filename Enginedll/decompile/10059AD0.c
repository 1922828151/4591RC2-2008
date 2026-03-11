/*
 * func-name: sub_10059AD0
 * func-address: 0x10059ad0
 * callers: 0x10055990, 0x1005a2a0, 0x1005a850, 0x1005b6b0
 * callees: 0x10059150, 0x101a2534
 */

_DWORD *__thiscall sub_10059AD0(int this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  _DWORD *result; // eax

  v3 = *(_DWORD *)(this + 16);
  if ( (((_BYTE)v3 + *(_BYTE *)(this + 12)) & 3) == 0 && *(_DWORD *)(this + 8) <= (unsigned int)(v3 + 4) >> 2 )
    sub_10059150(this, 1u);
  v4 = *(_DWORD *)(this + 8);
  v5 = *(_DWORD *)(this + 16) + *(_DWORD *)(this + 12);
  v6 = v5 >> 2;
  if ( v4 <= v5 >> 2 )
    v6 -= v4;
  if ( !*(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v6) )
    *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v6) = operator new(0x10u);
  result = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v6) + 4 * (v5 & 3));
  if ( result )
    *result = *a2;
  ++*(_DWORD *)(this + 16);
  return result;
}
