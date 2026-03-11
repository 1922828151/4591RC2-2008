/*
 * func-name: sub_1001F2C0
 * func-address: 0x1001f2c0
 * callers: 0x1001dec0
 * callees: 0x10008df0, 0x10008e90, 0x10016200, 0x1003eef0, 0x1004e98e
 */

int __stdcall sub_1001F2C0(int a1, _DWORD *a2, struct Outpop::IONetwork::Connector *a3)
{
  Outpop::IONetwork::INET_Addr *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  Outpop::IONetwork::INET_Addr *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  Outpop::IONetwork::Connect_Bluider_Process *v9; // eax
  int v10; // eax
  _DWORD v12[7]; // [esp+14h] [ebp-28h] BYREF
  int v13; // [esp+38h] [ebp-4h]

  sub_10016200((_DWORD *)a1);
  v13 = 0;
  *(_DWORD *)a1 = &Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Connector,Outpop::IONetwork::Connect_Bluider_Process>::`vftable';
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = -1;
  LOBYTE(v13) = 1;
  *(_DWORD *)(a1 + 88) = a3;
  *(_DWORD *)(a1 + 80) = *a2;
  v3 = Outpop::IONetwork::Bluid_Pakcet::remote_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v12);
  LOBYTE(v13) = 2;
  v4 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v3 + 16))(v3);
  v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 40) + 16))(a1 + 40);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  LOBYTE(v13) = 1;
  v12[0] = &Outpop::IONetwork::Addr::`vftable';
  v6 = Outpop::IONetwork::Bluid_Pakcet::local_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v12);
  LOBYTE(v13) = 4;
  v7 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v6 + 16))(v6);
  v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 12) + 16))(a1 + 12);
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  v8[3] = v7[3];
  LOBYTE(v13) = 1;
  v12[0] = &Outpop::IONetwork::Addr::`vftable';
  v9 = (Outpop::IONetwork::Connect_Bluider_Process *)operator new(48);
  LOBYTE(v13) = 6;
  if ( v9 )
    v10 = Outpop::IONetwork::Connect_Bluider_Process::Connect_Bluider_Process(
            v9,
            (struct Outpop::IONetwork::Wait_Channel *)a1,
            a3);
  else
    v10 = 0;
  *(_DWORD *)(a1 + 84) = v10;
  return a1;
}
