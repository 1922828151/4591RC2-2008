/*
 * func-name: ?get_connector_manager@Context@Message@Outpop@@QAEAAVConnector_Manager@23@XZ
 * func-address: 0x10006370
 * callers: none
 * callees: none
 */

struct Outpop::Message::Connector_Manager *__thiscall Outpop::Message::Context::get_connector_manager(
        Outpop::Message::Context *this)
{
  return (struct Outpop::Message::Connector_Manager *)*((_DWORD *)this + 9);
}
