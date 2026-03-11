/*
 * func-name: sub_1000CC10
 * func-address: 0x1000cc10
 * callers: 0x100014f0
 * callees: 0x100232f7, 0x100234ce
 */

void __userpurge sub_1000CC10(int a1@<esi>, int a2)
{
  Outpop::IONetwork::P2PUdpBuilder *v2; // eax
  Outpop::Utility::Ref_Object *v3; // edi
  Outpop::Utility::Ref_Object *v4; // ecx
  int v5; // ecx
  Outpop::IONetwork::P2PUdpBuilder *v6; // ecx
  _BYTE v7[44]; // [esp+14h] [ebp-74h] BYREF
  _BYTE v8[28]; // [esp+40h] [ebp-48h] BYREF
  __int16 v9; // [esp+5Ch] [ebp-2Ch]
  int v10; // [esp+84h] [ebp-4h]

  v2 = (Outpop::IONetwork::P2PUdpBuilder *)operator new(0xFCu);
  v3 = v2;
  v10 = 0;
  if ( v2 )
  {
    Outpop::IONetwork::P2PUdpBuilder::P2PUdpBuilder(
      v2,
      (struct Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20));
    *(_DWORD *)v3 = &Outpop::IONetwork::P2PUdpBuilder::`vftable';
  }
  else
  {
    v3 = 0;
  }
  v10 = -1;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v10 = 1;
  v4 = *(Outpop::Utility::Ref_Object **)(a1 + 96);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  *(_DWORD *)(a1 + 96) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v10 = -1;
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  if ( a1 )
    v5 = a1 + 8;
  else
    v5 = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 96) + 8) = v5;
  Outpop::IONetwork::P2P_Config::P2P_Config((Outpop::IONetwork::P2P_Config *)v7);
  v10 = 2;
  std::string::operator=(v8, a2);
  v6 = *(Outpop::IONetwork::P2PUdpBuilder **)(a1 + 96);
  v9 = 0;
  Outpop::IONetwork::P2PUdpBuilder::initialize(v6, (struct Outpop::IONetwork::P2P_Config *)v7);
  Outpop::IONetwork::P2PUdpBuilder::start(*(Outpop::IONetwork::P2PUdpBuilder **)(a1 + 96));
  v10 = -1;
  Outpop::IONetwork::P2P_Config::~P2P_Config((Outpop::IONetwork::P2P_Config *)v7);
}
