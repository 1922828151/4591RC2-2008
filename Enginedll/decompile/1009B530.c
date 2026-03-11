/*
 * func-name: sub_1009B530
 * func-address: 0x1009b530
 * callers: 0x1009b6e0, 0x1009b730, 0x1009b790
 * callees: 0x10051d20, 0x10099a20, 0x10099c90, 0x10099d80, 0x1009abb0, 0x1009b040, 0x1009b6b0, 0x101a2500
 */

int __thiscall sub_1009B530(int this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  char *v6; // ebx
  unsigned int v7; // eax
  char *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // eax

  if ( (_DWORD *)this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 104) == 0 )
  {
    sub_1009B040((int *)this);
    return this;
  }
  v6 = *(char **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 104;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 104;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 104 * sub_10051D20((_DWORD *)this);
      sub_10099D80(a2[1], v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_1009B6B0(v11, a2[2], *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1009ABB0(v6, *(char **)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10051D20(a2);
    if ( sub_10099C90((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_1009B6B0(a2[1], a2[2], *(_DWORD *)(this + 4));
    return this;
  }
  v8 = (char *)sub_10099A20(a2[1], a2[2], (int)v6);
  sub_1009ABB0(v8, *(char **)(this + 8));
  v9 = a2[1];
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 104 * ((a2[2] - v9) / 104);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
