/*
 * func-name: sub_1006FC60
 * func-address: 0x1006fc60
 * callers: 0x10070240
 * callees: 0x1006f220, 0x101a2534
 */

_DWORD *__thiscall sub_1006FC60(int this, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // ebx
  unsigned int v5; // edi
  _DWORD *result; // eax

  if ( (*(_BYTE *)(this + 12) & 3) == 0 && *(_DWORD *)(this + 8) <= (unsigned int)(*(_DWORD *)(this + 16) + 4) >> 2 )
    sub_1006F220(this, 1u);
  v3 = *(_DWORD *)(this + 12);
  if ( !v3 )
    v3 = 4 * *(_DWORD *)(this + 8);
  v4 = v3 - 1;
  v5 = v4 >> 2;
  if ( !*(_DWORD *)(*(_DWORD *)(this + 4) + 4 * (v4 >> 2)) )
    *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v5) = operator new(0x10u);
  result = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v5) + 4 * (v4 & 3));
  if ( result )
    *result = *a2;
  ++*(_DWORD *)(this + 16);
  *(_DWORD *)(this + 12) = v4;
  return result;
}
