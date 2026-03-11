/*
 * func-name: sub_10019DB0
 * func-address: 0x10019db0
 * callers: 0x10017730
 * callees: 0x10002600, 0x10008df0, 0x10008e90, 0x10016200
 */

int __stdcall sub_10019DB0(int a1, _DWORD *a2, int a3)
{
  Outpop::IONetwork::INET_Addr *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  Outpop::IONetwork::INET_Addr *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD v10[7]; // [esp+18h] [ebp-28h] BYREF
  int v11; // [esp+3Ch] [ebp-4h]

  sub_10016200((_DWORD *)a1);
  v11 = 0;
  *(_DWORD *)a1 = &Outpop::IONetwork::Simple_Wait_Stream_Channel<Outpop::IONetwork::Stream_Acceptor>::`vftable';
  *(_BYTE *)(a1 + 76) = 1;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 80));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 108));
  *(_DWORD *)(a1 + 136) = -1;
  *(_DWORD *)(a1 + 140) = a3;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  LOBYTE(v11) = 4;
  *(_DWORD *)(a1 + 136) = *a2;
  v3 = Outpop::IONetwork::Bluid_Pakcet::remote_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v10);
  LOBYTE(v11) = 5;
  v4 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v3 + 16))(v3);
  v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 108) + 16))(a1 + 108);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  LOBYTE(v11) = 4;
  v10[0] = &Outpop::IONetwork::Addr::`vftable';
  v6 = Outpop::IONetwork::Bluid_Pakcet::local_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v10);
  LOBYTE(v11) = 7;
  v7 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v6 + 16))(v6);
  v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 80) + 16))(a1 + 80);
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  v8[3] = v7[3];
  return a1;
}
