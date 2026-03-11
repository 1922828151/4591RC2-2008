/*
 * func-name: ?cache_start_connector@Message_Facade@Message@Outpop@@SAHAAVINET_Addr@IONetwork@3@HIHIAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@W4ETransmitType@73@_N3IIIH3HHHH@Z
 * func-address: 0x1000d7c0
 * callers: none
 * callees: 0x10001000, 0x10015230, 0x100294e2
 */

int __cdecl Outpop::Message::Message_Facade::cache_start_connector(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        Outpop::Utility::Ref_Object **a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  Outpop::Utility::Ref_Object *v18; // ecx
  int v19; // esi
  _DWORD v21[11]; // [esp+Ch] [ebp-80h] BYREF
  _BYTE v22[32]; // [esp+38h] [ebp-54h] BYREF
  int v23; // [esp+58h] [ebp-34h]
  Outpop::Utility::Ref_Object *v24; // [esp+5Ch] [ebp-30h]
  int v25; // [esp+6Ch] [ebp-20h]
  int v26; // [esp+70h] [ebp-1Ch]
  int v27; // [esp+88h] [ebp-4h]

  Outpop::Message::Message_Connector_Config::Message_Connector_Config((Outpop::Message::Message_Connector_Config *)v21);
  v27 = 0;
  Outpop::IONetwork::INET_Addr::operator=(v22, a1);
  v21[2] = a3;
  v21[0] = a2;
  v23 = a7;
  v21[1] = a4;
  v21[3] = a5;
  v21[5] = a11;
  v22[28] = a9;
  v21[4] = a10;
  LOBYTE(v25) = a14;
  v26 = a15;
  if ( v24 )
    Outpop::Utility::Ref_Object::release(v24);
  v18 = *a6;
  v24 = *a6;
  if ( v24 )
    Outpop::Utility::Ref_Object::addref(v18);
  if ( a16 )
    v21[6] = a16;
  if ( a17 )
    v21[7] = a17;
  if ( a18 )
    v21[9] = a18;
  v19 = Outpop::Message::Connector_Manager::cache_add_connector(
          *((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_ + 9),
          (struct Outpop::Message::Message_Connector_Config *)v21);
  v27 = -1;
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)v21);
  return v19;
}
