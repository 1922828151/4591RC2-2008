/*
 * func-name: ??0Connector_Manager@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10003bf0
 * callers: none
 * callees: 0x10007100, 0x10007170, 0x10007360
 */

Outpop::Message::Connector_Manager *__thiscall Outpop::Message::Connector_Manager::Connector_Manager(
        Outpop::Message::Connector_Manager *this,
        const struct Outpop::Message::Connector_Manager *a2)
{
  *(_DWORD *)this = Outpop::IONetwork::Connector_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Connector_Manager::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  sub_10007100((char *)this + 8);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  sub_10007170((char *)this + 76);
  sub_10007360((int)a2 + 92, (int)this + 92);
  sub_10007360((int)a2 + 108, (int)this + 108);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 124);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  return this;
}
