/*
 * func-name: ?instance@P2P_Context@P2P@Outpop@@SAPAV123@XZ
 * func-address: 0x10001000
 * callers: none
 * callees: none
 */

struct Outpop::P2P::P2P_Context *__cdecl Outpop::P2P::P2P_Context::instance()
{
  return (struct Outpop::P2P::P2P_Context *)&Outpop::P2P::P2P_Context::g_context_;
}
