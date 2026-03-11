/*
 * func-name: ?get_acceptor_manager@Context@Message@Outpop@@QAEAAVAcceptor_Manager@23@XZ
 * func-address: 0x10006360
 * callers: none
 * callees: none
 */

struct Outpop::Message::Acceptor_Manager *__thiscall Outpop::Message::Context::get_acceptor_manager(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Acceptor_Manager *)*((_DWORD *)this + 7);
}
