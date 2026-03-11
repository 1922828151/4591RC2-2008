/*
 * func-name: sub_1000FC90
 * func-address: 0x1000fc90
 * callers: 0x1000fb40
 * callees: 0x10008770, 0x10009ad0, 0x10009af0, 0x10009b50, 0x1000fc60, 0x10010080, 0x100100b0, 0x100294e2, 0x100294f2, 0x10029d92
 */

void __thiscall sub_1000FC90(int this, const struct Outpop::IONetwork::Acceptor_Config *a2, int a3, int a4)
{
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // esi
  char *v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // edi
  int i; // esi
  int v19[4]; // [esp+0h] [ebp-ACh] BYREF
  void *v20; // [esp+10h] [ebp-9Ch]
  void *v21; // [esp+14h] [ebp-98h]
  int v22; // [esp+18h] [ebp-94h]
  _BYTE v23[124]; // [esp+1Ch] [ebp-90h] BYREF
  int *v24; // [esp+9Ch] [ebp-10h]
  int v25; // [esp+A8h] [ebp-4h]

  v24 = v19;
  v21 = (void *)this;
  Outpop::IONetwork::Acceptor_Config::Acceptor_Config((Outpop::IONetwork::Acceptor_Config *)v23, a2);
  v5 = 0;
  v25 = 0;
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
  {
    v5 = (*(_DWORD *)(this + 12) - v6) / 116;
    v7 = (*(_DWORD *)(this + 8) - v6) / 116;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 == 37025580 )
    sub_10009AF0(v19[0], v19[1]);
  if ( v6 )
    v8 = (*(_DWORD *)(this + 8) - v6) / 116;
  else
    v8 = 0;
  if ( v5 >= v8 + 1 )
  {
    v15 = *(_DWORD *)(this + 8);
    v16 = a4;
    if ( (v15 - a4) / 116 )
    {
      v21 = (void *)(v15 - 116);
      *(_DWORD *)(this + 8) = sub_10010080(v15 - 116, v15);
      sub_100100B0(v15);
      do
      {
        Outpop::IONetwork::Acceptor_Config::operator=(v16, v23);
        v16 += 116;
      }
      while ( v16 != a4 + 116 );
    }
    else
    {
      sub_10010080(a4, v15);
      LOBYTE(v25) = 3;
      sub_1000FC60(*(_DWORD *)(this + 8), 1 - (*(_DWORD *)(this + 8) - a4) / 116, (int)v23);
      v25 = 0;
      *(_DWORD *)(this + 8) += 116;
      v17 = *(_DWORD *)(this + 8) - 116;
      for ( i = a4; i != v17; i += 116 )
        Outpop::IONetwork::Acceptor_Config::operator=(i, v23);
    }
  }
  else
  {
    if ( 37025580 - (v5 >> 1) >= v5 )
    {
      v9 = (v5 >> 1) + v5;
      v22 = v9;
    }
    else
    {
      v22 = 0;
      v9 = 0;
    }
    if ( v6 )
      v10 = (*(_DWORD *)(this + 8) - v6) / 116;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      v22 = sub_10008770((_DWORD *)this) + 1;
      v9 = v22;
    }
    v21 = sub_10009B50(v9);
    v20 = v21;
    LOBYTE(v25) = 1;
    v20 = (void *)sub_10010080(*(_DWORD *)(this + 4), a4);
    v20 = (void *)sub_1000FC60((int)v20, 1, (int)v23);
    sub_10010080(a4, *(_DWORD *)(this + 8));
    v11 = 0;
    v25 = 0;
    v12 = *(_DWORD *)(this + 4);
    if ( v12 )
      v11 = (*(_DWORD *)(this + 8) - v12) / 116;
    v13 = v11 + 1;
    if ( v12 )
    {
      sub_10009AD0(
        *(Outpop::IONetwork::Acceptor_Config **)(this + 4),
        *(Outpop::IONetwork::Acceptor_Config **)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v14 = (char *)v21;
    *(_DWORD *)(this + 12) = (char *)v21 + 116 * v22;
    *(_DWORD *)(this + 8) = &v14[116 * v13];
    *(_DWORD *)(this + 4) = v14;
  }
  v25 = -1;
  Outpop::IONetwork::Acceptor_Config::~Acceptor_Config((Outpop::IONetwork::Acceptor_Config *)v23);
}
