/*
 * func-name: ?get_request_ack@Context@Message@Outpop@@QAEAAVRequest_Ack@23@XZ
 * func-address: 0x10006390
 * callers: none
 * callees: none
 */

struct Outpop::Message::Request_Ack *__thiscall Outpop::Message::Context::get_request_ack(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Request_Ack *)*((_DWORD *)this + 11);
}
