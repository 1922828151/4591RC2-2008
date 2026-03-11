/*
 * func-name: ?set_validate_handler@Acceptor_Manager@Message@Outpop@@QAEXPAVValidate_Handler@23@@Z
 * func-address: 0x100039c0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Acceptor_Manager::set_validate_handler(
        Outpop::Message::Acceptor_Manager *this,
        struct Outpop::Message::Validate_Handler *a2)
{
  *((_DWORD *)this + 11) = a2;
}
