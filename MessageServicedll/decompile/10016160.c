/*
 * func-name: sub_10016160
 * func-address: 0x10016160
 * callers: 0x10015f60
 * callees: 0x100010b0, 0x10008a70, 0x10009af0, 0x10009bb0, 0x1000b210, 0x100160a0, 0x100164a0, 0x100164d0, 0x100165f0, 0x100294e2, 0x100294f2, 0x10029d92
 */

void __thiscall sub_10016160(int *this, int *a2, int a3, int a4)
{
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // esi
  char *v14; // ecx
  int v15; // edi
  int v16[4]; // [esp+0h] [ebp-A4h] BYREF
  void *v17; // [esp+10h] [ebp-94h]
  int v18; // [esp+14h] [ebp-90h]
  void *v19; // [esp+18h] [ebp-8Ch]
  int v20; // [esp+1Ch] [ebp-88h] BYREF
  _BYTE v21[112]; // [esp+20h] [ebp-84h] BYREF
  int *v22; // [esp+94h] [ebp-10h]
  int v23; // [esp+A0h] [ebp-4h]

  v22 = v16;
  v19 = this;
  v20 = *a2;
  Outpop::Message::Message_Connector_Config::Message_Connector_Config(
    (Outpop::Message::Message_Connector_Config *)v21,
    (const struct Outpop::Message::Message_Connector_Config *)(a2 + 1));
  v23 = 1;
  v5 = this[1];
  if ( v5 )
    v6 = (this[3] - v5) / 108;
  else
    v6 = 0;
  if ( v5 )
    v7 = (this[2] - v5) / 108;
  else
    v7 = 0;
  if ( v7 == 39768215 )
    sub_10009AF0(v16[0], v16[1]);
  if ( v5 )
    v8 = (this[2] - v5) / 108;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v15 = this[2];
    if ( (v15 - a4) / 108 )
    {
      v19 = (void *)(v15 - 108);
      this[2] = sub_100164A0(v15 - 108, v15);
      sub_100164D0();
      sub_100165F0(a4 + 108, &v20);
    }
    else
    {
      sub_100164A0(a4, v15);
      LOBYTE(v23) = 4;
      sub_100160A0(this[2], 1 - (this[2] - a4) / 108, (int)&v20);
      v23 = 1;
      this[2] += 108;
      sub_100165F0(this[2] - 108, &v20);
    }
  }
  else
  {
    if ( 39768215 - (v6 >> 1) >= v6 )
    {
      v9 = (v6 >> 1) + v6;
      v18 = v9;
    }
    else
    {
      v18 = 0;
      v9 = 0;
    }
    if ( v5 )
      v10 = (this[2] - v5) / 108;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      v18 = sub_10008A70(this) + 1;
      v9 = v18;
    }
    v19 = sub_10009BB0(v9);
    v17 = v19;
    LOBYTE(v23) = 2;
    v17 = (void *)sub_100164A0(this[1], a4);
    v17 = (void *)sub_100160A0((int)v17, 1, (int)&v20);
    sub_100164A0(a4, this[2]);
    v23 = 1;
    v11 = this[1];
    if ( v11 )
      v12 = (this[2] - v11) / 108;
    else
      v12 = 0;
    v13 = v12 + 1;
    if ( v11 )
    {
      sub_1000B210(this[2], v11);
      operator delete((void *)this[1]);
    }
    v14 = (char *)v19;
    this[3] = (int)v19 + 108 * v18;
    this[2] = (int)&v14[108 * v13];
    this[1] = (int)v14;
  }
  v19 = v21;
  v23 = -1;
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)v21);
}
