/*
 * func-name: ?set_first_message_handler@Connector_Manager@Message@Outpop@@QAEXPAVFirst_Message_Handler@23@@Z
 * func-address: 0x10003be0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Connector_Manager::set_first_message_handler(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::First_Message_Handler *a2)
{
  *((_DWORD *)this + 32) = a2;
}
