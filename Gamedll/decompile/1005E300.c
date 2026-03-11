/*
 * func-name: sub_1005E300
 * func-address: 0x1005e300
 * callers: 0x10013f66
 * callees: 0x10003260, 0x100067fd, 0x10007f5e, 0x100082f6, 0x10008f8f, 0x100097c8, 0x1000c540, 0x10018fcf, 0x102c9d50
 */

int __thiscall sub_1005E300(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  void *v6; // edi
  unsigned int v7; // eax
  void *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // ebx
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 56) == 0 )
  {
    sub_100097C8();
    return this;
  }
  v6 = *(void **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 56;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 56;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (void *)(*(_DWORD *)(a2 + 4) + 56 * sub_10018FCF());
      sub_1000C540(*(_DWORD *)(a2 + 4), (int)v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_10007F5E(v11, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10003260(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10018FCF();
    if ( (unsigned __int8)sub_100082F6(v12) )
      *(_DWORD *)(this + 8) = sub_10007F5E(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  v8 = (void *)sub_100067FD(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), (int)v6);
  sub_10008F8F(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 56 * ((*(_DWORD *)(a2 + 8) - v9) / 56);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
