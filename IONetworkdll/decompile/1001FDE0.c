/*
 * func-name: sub_1001FDE0
 * func-address: 0x1001fde0
 * callers: 0x1001dec0
 * callees: 0x10002600, 0x10008df0, 0x10008e90, 0x10016200
 */

int __stdcall sub_1001FDE0(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  Outpop::IONetwork::INET_Addr *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  Outpop::IONetwork::INET_Addr *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  _DWORD v12[7]; // [esp+14h] [ebp-28h] BYREF
  int v13; // [esp+38h] [ebp-4h]

  sub_10016200((_DWORD *)a1);
  v13 = 0;
  *(_DWORD *)a1 = &Outpop::IONetwork::Simple_Wait_Stream_Channel<Outpop::IONetwork::Stream_Connector>::`vftable';
  *(_BYTE *)(a1 + 76) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 80));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 108));
  *(_DWORD *)(a1 + 136) = -1;
  *(_DWORD *)(a1 + 140) = a3;
  *(_DWORD *)(a1 + 144) = a4;
  *(_DWORD *)(a1 + 148) = a5;
  *(_DWORD *)(a1 + 152) = 0;
  LOBYTE(v13) = 4;
  *(_DWORD *)(a1 + 136) = *a2;
  v5 = Outpop::IONetwork::Bluid_Pakcet::remote_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v12);
  LOBYTE(v13) = 5;
  v6 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v5 + 16))(v5);
  v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 108) + 16))(a1 + 108);
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  LOBYTE(v13) = 4;
  v12[0] = &Outpop::IONetwork::Addr::`vftable';
  v8 = Outpop::IONetwork::Bluid_Pakcet::local_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v12);
  LOBYTE(v13) = 7;
  v9 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v8 + 16))(v8);
  v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 80) + 16))(a1 + 80);
  *v10 = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v10[3] = v9[3];
  return a1;
}
