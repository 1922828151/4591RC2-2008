/*
 * func-name: ?start_connector_with_first_message@Message_Facade@Message@Outpop@@SAHAAVINET_Addr@IONetwork@3@HIHIAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@73@W4ETransmitType@73@_NII4HHHH@Z
 * func-address: 0x1000d8f0
 * callers: none
 * callees: 0x10001000, 0x100146d0, 0x100294e2
 */

int __cdecl Outpop::Message::Message_Facade::start_connector_with_first_message(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        Outpop::Utility::Ref_Object **a6,
        Outpop::Utility::Ref_Object **a7,
        int a8,
        char a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  Outpop::Utility::Ref_Object *v16; // ecx
  Outpop::Utility::Ref_Object *v17; // ecx
  int v18; // esi
  _DWORD v20[11]; // [esp+14h] [ebp-80h] BYREF
  _BYTE v21[32]; // [esp+40h] [ebp-54h] BYREF
  int v22; // [esp+60h] [ebp-34h]
  Outpop::Utility::Ref_Object *v23; // [esp+64h] [ebp-30h]
  Outpop::Utility::Ref_Object *v24; // [esp+70h] [ebp-24h]
  int v25; // [esp+74h] [ebp-20h]
  int v26; // [esp+78h] [ebp-1Ch]
  int v27; // [esp+90h] [ebp-4h]

  Outpop::Message::Message_Connector_Config::Message_Connector_Config((Outpop::Message::Message_Connector_Config *)v20);
  v27 = 0;
  Outpop::IONetwork::INET_Addr::operator=(v21, a1);
  v20[2] = a3;
  v20[0] = a2;
  v22 = a8;
  v20[1] = a4;
  v20[3] = a5;
  v20[5] = a11;
  v21[28] = a9;
  v20[4] = a10;
  LOBYTE(v25) = a12;
  v26 = a13;
  if ( v23 )
    Outpop::Utility::Ref_Object::release(v23);
  v16 = *a7;
  v23 = *a7;
  if ( v23 )
    Outpop::Utility::Ref_Object::addref(v16);
  if ( v24 )
    Outpop::Utility::Ref_Object::release(v24);
  v17 = *a6;
  v24 = *a6;
  if ( v24 )
    Outpop::Utility::Ref_Object::addref(v17);
  if ( a14 )
    v20[6] = a14;
  if ( a15 )
    v20[7] = a15;
  if ( a16 )
    v20[9] = a16;
  v18 = Outpop::Message::Connector_Manager::add_connector(
          *((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_ + 9),
          (struct Outpop::Message::Message_Connector_Config *)v20);
  v27 = -1;
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)v20);
  return v18;
}
