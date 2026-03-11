/*
 * func-name: ?UnSelectCell@CItemHolder@@QAEXHH@Z
 * func-address: 0x10153950
 * callers: none
 * callees: none
 */

void __thiscall CItemHolder::UnSelectCell(CItemHolder *this, int a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  unsigned int v6; // esi

  v4 = a3 * *((_DWORD *)this + 149);
  v5 = *((_DWORD *)this + 135);
  v6 = a2 + v4;
  if ( v5 )
  {
    if ( v6 < (*((_DWORD *)this + 136) - v5) >> 2 )
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * v6) + 104) = 0;
  }
}
