/*
 * func-name: sub_10061C20
 * func-address: 0x10061c20
 * callers: 0x10017c79
 * callees: 0x100035bc, 0x100040e3, 0x100082e7, 0x1000b82a, 0x1000cfae, 0x10016879, 0x10018fed, 0x10019f8d, 0x102c9d50
 */

int __thiscall sub_10061C20(int this, int a2)
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
    sub_100082E7();
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
      v11 = (void *)(*(_DWORD *)(a2 + 4) + 56 * sub_10016879());
      sub_1000CFAE(*(_DWORD *)(a2 + 4), (int)v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_100040E3(v11, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10019F8D(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10016879();
    if ( (unsigned __int8)sub_10018FED(v12) )
      *(_DWORD *)(this + 8) = sub_100040E3(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  v8 = (void *)sub_100035BC(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), (int)v6);
  sub_1000B82A(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 56 * ((*(_DWORD *)(a2 + 8) - v9) / 56);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
