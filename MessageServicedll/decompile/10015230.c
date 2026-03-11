/*
 * func-name: ?cache_add_connector@Connector_Manager@Message@Outpop@@QAEHAAUMessage_Connector_Config@23@@Z
 * func-address: 0x10015230
 * callers: 0x1000cbe0, 0x1000d7c0, 0x1000da40
 * callees: 0x100010b0, 0x10015cd0
 */

int __thiscall Outpop::Message::Connector_Manager::cache_add_connector(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::Message_Connector_Config *a2)
{
  Outpop::Utility::Lock *v3; // edi
  int v4; // ebx
  int v6; // [esp+14h] [ebp-78h] BYREF
  _BYTE v7[104]; // [esp+18h] [ebp-74h] BYREF
  int v8; // [esp+88h] [ebp-4h]

  v3 = (Outpop::Message::Connector_Manager *)((char *)this + 48);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  v8 = 0;
  if ( ++*((_DWORD *)this + 18) == -1 )
    *((_DWORD *)this + 18) = 1;
  v4 = *((_DWORD *)this + 18);
  v8 = -1;
  Outpop::Utility::Lock::unlock(v3);
  v6 = v4;
  Outpop::Message::Message_Connector_Config::Message_Connector_Config(
    (Outpop::Message::Message_Connector_Config *)v7,
    a2);
  v8 = 2;
  sub_10015CD0(&v6);
  v8 = -1;
  Outpop::IONetwork::Connector_Config::~Connector_Config((Outpop::IONetwork::Connector_Config *)v7);
  return v4;
}
