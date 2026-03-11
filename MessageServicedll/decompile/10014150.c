/*
 * func-name: ?stop@Connector_Manager@Message@Outpop@@QAEXXZ
 * func-address: 0x10014150
 * callers: 0x10006a30
 * callees: none
 */

void __thiscall Outpop::Message::Connector_Manager::stop(Outpop::Message::Connector_Manager *this)
{
  Outpop::Utility::Lock *v2; // edi

  v2 = (Outpop::Message::Connector_Manager *)((char *)this + 48);
  Outpop::Utility::Lock::lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  *((_BYTE *)this + 124) = 0;
  Outpop::Utility::Lock::unlock(v2);
}
