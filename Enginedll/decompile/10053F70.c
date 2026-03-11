/*
 * func-name: sub_10053F70
 * func-address: 0x10053f70
 * callers: 0x10054100
 * callees: 0x10051d40, 0x10052140, 0x10052e90, 0x10053210, 0x10053240, 0x100535f0, 0x10053b70, 0x10146dd0, 0x101a2500
 */

int __thiscall sub_10053F70(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // edi
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 112) == 0 )
  {
    sub_10053B70(this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 112;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 112;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (char *)(*(_DWORD *)(a2 + 4) + 112 * sub_10051D40((_DWORD *)this));
      sub_10053210(*(char **)(a2 + 4), v11, v6);
      *(_DWORD *)(this + 8) = sub_10146DD0(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_100535F0(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10051D40((_DWORD *)a2);
    if ( sub_10052140((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_10146DD0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  v8 = sub_10052E90(*(char **)(a2 + 4), *(char **)(a2 + 8), v6);
  sub_10053240(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 112 * ((*(_DWORD *)(a2 + 8) - v9) / 112);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
