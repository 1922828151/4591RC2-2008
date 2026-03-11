/*
 * func-name: sub_10025C40
 * func-address: 0x10025c40
 * callers: 0x10031350, 0x100f4f00
 * callees: 0x1001d580, 0x1001dce0, 0x10023a40, 0x1003e3d0, 0x10061300, 0x101a2500
 */

int __thiscall sub_10025C40(int this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) >> 4) == 0 )
  {
    sub_10023A40((_DWORD *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) >> 4;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_10061300(v3, *(_DWORD *)(a2 + 8), v6);
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 16 * ((*(_DWORD *)(a2 + 8) - v8) >> 4);
    else
      *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
    return this;
  }
  if ( v6 )
    v9 = (*(_DWORD *)(this + 12) - v6) >> 4;
  else
    v9 = 0;
  if ( v4 > v9 )
  {
    if ( v6 )
      operator delete(*(void **)(this + 4));
    v12 = *(_DWORD *)(a2 + 4);
    if ( v12 )
      v13 = (*(_DWORD *)(a2 + 8) - v12) >> 4;
    else
      v13 = 0;
    if ( sub_1001D580((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_1003E3D0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  if ( v6 )
    v10 = (*(_DWORD *)(this + 8) - v6) >> 4;
  else
    v10 = 0;
  v11 = v3 + 16 * v10;
  sub_1001DCE0(*(_DWORD *)(a2 + 4), v11, *(_DWORD *)(this + 4));
  *(_DWORD *)(this + 8) = sub_1003E3D0(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
  return this;
}
