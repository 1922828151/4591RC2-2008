/*
 * func-name: sub_1005E7D0
 * func-address: 0x1005e7d0
 * callers: 0x1005ed30
 * callees: 0x1001a3d0, 0x100574a0, 0x10057f20, 0x1005d5b0, 0x1005dd80, 0x1016bae0, 0x101a2500
 */

int __thiscall sub_1005E7D0(int this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int (__thiscall ***v6)(_DWORD, _DWORD); // ebx
  unsigned int v7; // eax
  int (__thiscall ***v8)(_DWORD, _DWORD); // eax
  int v9; // eax
  unsigned int v10; // eax
  CREControl *v11; // edi
  unsigned int v12; // eax

  if ( (_DWORD *)this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 52) == 0 )
  {
    sub_1005DD80((int *)this);
    return this;
  }
  v6 = *(int (__thiscall ****)(_DWORD, _DWORD))(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 52;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 52;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (CREControl *)(a2[1] + 52 * sub_1001A3D0((_DWORD *)this));
      sub_1005D5B0(a2[1], (int)v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_1016BAE0(v11, a2[2], *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10057F20(v6, *(int (__thiscall ****)(_DWORD, _DWORD))(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1001A3D0(a2);
    if ( sub_100574A0((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_1016BAE0((CREControl *)a2[1], a2[2], *(_DWORD *)(this + 4));
    return this;
  }
  v8 = (int (__thiscall ***)(_DWORD, _DWORD))sub_1005D5B0(a2[1], a2[2], *(_DWORD *)(this + 4));
  sub_10057F20(v8, *(int (__thiscall ****)(_DWORD, _DWORD))(this + 8));
  v9 = a2[1];
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 52 * ((a2[2] - v9) / 52);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
