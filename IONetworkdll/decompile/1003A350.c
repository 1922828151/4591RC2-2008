/*
 * func-name: sub_1003A350
 * func-address: 0x1003a350
 * callers: 0x10036c20
 * callees: 0x10002600, 0x10008df0, 0x10008e90
 */

int __stdcall sub_1003A350(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  Outpop::IONetwork::INET_Addr *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  Outpop::IONetwork::INET_Addr *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  _DWORD v12[7]; // [esp+14h] [ebp-28h] BYREF
  int v13; // [esp+38h] [ebp-4h]

  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a1);
  v13 = 0;
  *(_DWORD *)a1 = &Outpop::IONetwork::Simple_Wait_Dgram_Channel<Outpop::IONetwork::Dgram_Connector>::`vftable';
  *(_BYTE *)(a1 + 8) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 12));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 40));
  *(_DWORD *)(a1 + 68) = -1;
  *(_DWORD *)(a1 + 72) = a3;
  *(_DWORD *)(a1 + 80) = a4;
  *(_DWORD *)(a1 + 84) = a5;
  *(_DWORD *)(a1 + 88) = 0;
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a1 + 96));
  *(_DWORD *)(a1 + 104) = 0;
  LOBYTE(v13) = 6;
  *(_WORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 68) = *a2;
  v5 = Outpop::IONetwork::Bluid_Pakcet::remote_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v12);
  LOBYTE(v13) = 7;
  v6 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v5 + 16))(v5);
  v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 40) + 16))(a1 + 40);
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  LOBYTE(v13) = 6;
  v12[0] = &Outpop::IONetwork::Addr::`vftable';
  v8 = Outpop::IONetwork::Bluid_Pakcet::local_addr((int)a2, (Outpop::IONetwork::INET_Addr *)v12);
  LOBYTE(v13) = 9;
  v9 = (_DWORD *)(*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *))(*(_DWORD *)v8 + 16))(v8);
  v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 12) + 16))(a1 + 12);
  *v10 = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v10[3] = v9[3];
  return a1;
}
