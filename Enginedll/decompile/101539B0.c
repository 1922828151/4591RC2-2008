/*
 * func-name: ?ToggleSelectCell@CItemHolder@@QAEXHH@Z
 * func-address: 0x101539b0
 * callers: none
 * callees: none
 */

void __thiscall CItemHolder::ToggleSelectCell(CItemHolder *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // ebx

  v4 = a3 * *((_DWORD *)this + 149);
  v5 = *((_DWORD *)this + 135);
  v6 = a2 + v4;
  if ( v5 && v6 < (*((_DWORD *)this + 136) - v5) >> 2 )
  {
    v7 = *((_DWORD *)this + 135);
    v8 = 4 * v6 + v7;
    if ( !v7 || v6 >= (*((_DWORD *)this + 136) - v7) >> 2 )
      invalid_parameter_noinfo();
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * v6) + 104) = *(_BYTE *)(*(_DWORD *)v8 + 104) == 0;
  }
}
