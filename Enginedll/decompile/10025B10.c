/*
 * func-name: sub_10025B10
 * func-address: 0x10025b10
 * callers: 0x10028a50, 0x1008e470
 * callees: 0x1000c450, 0x100208a0, 0x10023a00, 0x10078560, 0x101a2500
 */

int __thiscall sub_10025B10(int this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  char *v11; // ebx
  int v12; // ecx
  unsigned int v13; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) >> 6) == 0 )
  {
    sub_10023A00((_DWORD *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) >> 6;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_10078560(v3, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + ((*(_DWORD *)(a2 + 8) - v8) >> 6 << 6);
    else
      *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
    return this;
  }
  if ( v6 )
    v9 = (*(_DWORD *)(this + 12) - v6) >> 6;
  else
    v9 = 0;
  if ( v4 > v9 )
  {
    if ( v6 )
      operator delete(*(void **)(this + 4));
    v12 = *(_DWORD *)(a2 + 4);
    if ( v12 )
      v13 = (*(_DWORD *)(a2 + 8) - v12) >> 6;
    else
      v13 = 0;
    if ( sub_1000C450((_DWORD *)this, v13) )
      *(_DWORD *)(this + 8) = sub_100208A0(*(char **)(a2 + 4), *(char **)(a2 + 8), *(float **)(this + 4));
    return this;
  }
  if ( v6 )
    v10 = (*(_DWORD *)(this + 8) - v6) >> 6;
  else
    v10 = 0;
  v11 = (char *)(v3 + (v10 << 6));
  sub_10078560(*(_DWORD *)(a2 + 4), v11, *(_DWORD *)(this + 4));
  *(_DWORD *)(this + 8) = sub_100208A0(v11, *(char **)(a2 + 8), *(float **)(this + 8));
  return this;
}
