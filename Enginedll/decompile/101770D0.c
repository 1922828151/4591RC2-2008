/*
 * func-name: sub_101770D0
 * func-address: 0x101770d0
 * callers: 0x10173030, 0x10175180, 0x10175470, 0x101777f0
 * callees: 0x10013780, 0x10013eb0, 0x10013f10, 0x1001d760, 0x10159280, 0x10176690, 0x10176a80, 0x101a2500
 */

int __thiscall sub_101770D0(int this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // eax

  if ( (_DWORD *)this == a2 )
    return this;
  v3 = a2[1];
  if ( !v3 || (v4 = (a2[2] - v3) / 84) == 0 )
  {
    sub_10176A80((int *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 84;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 84;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = a2[1] + 84 * sub_10159280((_DWORD *)this);
      sub_10176690(a2[1], v11, v6);
      *(_DWORD *)(this + 8) = sub_10013F10(v11, a2[2], *(CREControl **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10013EB0(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10159280(a2);
    if ( sub_1001D760((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_10013F10(a2[1], a2[2], *(CREControl **)(this + 4));
    return this;
  }
  v8 = sub_10176690(a2[1], a2[2], *(_DWORD *)(this + 4));
  sub_10013780(v8, *(_DWORD *)(this + 8));
  v9 = a2[1];
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 84 * ((a2[2] - v9) / 84);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
