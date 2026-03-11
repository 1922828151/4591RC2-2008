/*
 * func-name: sub_10115D40
 * func-address: 0x10115d40
 * callers: 0x1010e120, 0x10115f20, 0x10115f70, 0x10116020
 * callees: 0x1010ebb0, 0x101154d0, 0x10115520, 0x10115640, 0x101156e0, 0x10115b50, 0x101a2500
 */

int __thiscall sub_10115D40(int this, int a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int *v6; // ecx
  unsigned int v7; // eax
  int *v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  unsigned int v15; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) >> 5) == 0 )
  {
    sub_10115B50((int *)this);
    return this;
  }
  v6 = *(int **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) >> 5;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    v8 = (int *)sub_101154D0(v3, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    sub_10115520(v8, *(int **)(this + 8));
    v9 = *(_DWORD *)(a2 + 4);
    if ( v9 )
      v10 = *(_DWORD *)(this + 4) + 32 * ((*(_DWORD *)(a2 + 8) - v9) >> 5);
    else
      v10 = *(_DWORD *)(this + 4);
    *(_DWORD *)(this + 8) = v10;
    return this;
  }
  if ( v6 )
    v11 = (*(_DWORD *)(this + 12) - (int)v6) >> 5;
  else
    v11 = 0;
  if ( v4 > v11 )
  {
    if ( v6 )
    {
      sub_101156E0(v6, *(int **)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v14 = *(_DWORD *)(a2 + 4);
    if ( v14 )
      v15 = (*(_DWORD *)(a2 + 8) - v14) >> 5;
    else
      v15 = 0;
    if ( sub_1010EBB0((_DWORD *)this, v15) )
      *(_DWORD *)(this + 8) = sub_10115640(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(CREControl **)(this + 4));
    return this;
  }
  if ( v6 )
    v12 = (*(_DWORD *)(this + 8) - (int)v6) >> 5;
  else
    v12 = 0;
  v13 = v3 + 32 * v12;
  sub_101154D0(v3, v13, *(_DWORD *)(this + 4));
  *(_DWORD *)(this + 8) = sub_10115640(v13, *(_DWORD *)(a2 + 8), *(CREControl **)(this + 8));
  return this;
}
