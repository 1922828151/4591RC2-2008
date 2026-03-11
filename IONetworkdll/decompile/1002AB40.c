/*
 * func-name: sub_1002AB40
 * func-address: 0x1002ab40
 * callers: 0x10027c50
 * callees: 0x10002600, 0x10008df0, 0x10008e90
 */

int __stdcall sub_1002AB40(int a1, _DWORD *a2, int a3)
{
  Outpop::IONetwork::INET_Addr *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  Outpop::IONetwork::INET_Addr *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  _DWORD v10[7]; // [esp+14h] [ebp-28h] BYREF
  int v11; // [esp+38h] [ebp-4h]

  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a1);
  v11 = 0;
  *(_DWORD *)a1 = &Outpop::IONetwork::Simple_Wait_Dgram_Channel<Outpop::IONetwork::Dgram_Acceptor>::`vftable';
  *(_BYTE *)(a1 + 8) = 1;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 12));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 40));
  *(_DWORD *)(a1 + 68) = -1;
  *(_DWORD *)(a1 + 72) = a3;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a1 + 96));
  *(_DWORD *)(a1 + 104) = 0;
  LOBYTE(v11) = 6;
  *(_WORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 68) = *a2;
  v3 = Outpop::IONetwork::Bluid_Pakcet::remote_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v10);
  LOBYTE(v11) = 7;
  v4 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v3 + 16))(v3);
  v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 40) + 16))(a1 + 40);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  LOBYTE(v11) = 6;
  v10[0] = &Outpop::IONetwork::Addr::`vftable';
  v6 = Outpop::IONetwork::Bluid_Pakcet::local_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v10);
  LOBYTE(v11) = 9;
  v7 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v6 + 16))(v6);
  v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 12) + 16))(a1 + 12);
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  v8[3] = v7[3];
  return a1;
}
