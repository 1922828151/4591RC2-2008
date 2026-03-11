/*
 * func-name: ?send_system_packet@P2P_Channel@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@W4EPacketType@53@@Z
 * func-address: 0x10044ef0
 * callers: 0x100440d0
 * callees: 0x10009580, 0x1004bb00
 */

int __thiscall Outpop::IONetwork::P2P_Channel::send_system_packet(
        char *this,
        Outpop::Utility::Stream_Base **a2,
        Outpop::Utility::Ref_Object *a3)
{
  char v5[8]; // [esp-24h] [ebp-40h] BYREF
  int v6; // [esp-1Ch] [ebp-38h]
  int v7; // [esp-18h] [ebp-34h]
  int v8; // [esp-14h] [ebp-30h]
  int v9; // [esp-10h] [ebp-2Ch]
  int v10; // [esp-Ch] [ebp-28h]
  int v11; // [esp-8h] [ebp-24h]
  int v12; // [esp-4h] [ebp-20h]
  int v13; // [esp+18h] [ebp-4h]

  Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&a3, a2, (int)a3, 0, 0, 0, 0);
  v13 = -1;
  if ( a3 )
    Outpop::Utility::Ref_Object::release(a3);
  v12 = 0;
  v11 = 0;
  a3 = (Outpop::Utility::Ref_Object *)v5;
  std::string::string(this + 636);
  v13 = -1;
  return Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(a2, this + 80, v5[0], v5[4], v6, v7, v8, v9, v10, v11, v12);
}
