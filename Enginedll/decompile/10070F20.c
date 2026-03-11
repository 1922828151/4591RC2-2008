/*
 * func-name: sub_10070F20
 * func-address: 0x10070f20
 * callers: 0x10075d00, 0x100d4100, 0x100d50e0
 * callees: 0x100096e0, 0x1006d160, 0x1006d9a0, 0x1006fd60, 0x100709d0, 0x100d2980, 0x101a2500
 */

int __thiscall sub_10070F20(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v6; // ebx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // edi
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 44) == 0 )
  {
    sub_100709D0(this);
    return this;
  }
  v6 = *(_DWORD **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 44;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 44;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (char *)(*(_DWORD *)(a2 + 4) + 44 * sub_100096E0((_DWORD *)this));
      sub_1006D9A0(*(char **)(a2 + 4), v11, v6);
      *(_DWORD *)(this + 8) = sub_100D2980(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1006FD60((int)v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_100096E0((_DWORD *)a2);
    if ( sub_1006D160((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_100D2980(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  v8 = sub_1006D9A0(*(char **)(a2 + 4), *(char **)(a2 + 8), *(_DWORD **)(this + 4));
  sub_1006FD60((int)v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 44 * ((*(_DWORD *)(a2 + 8) - v9) / 44);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
