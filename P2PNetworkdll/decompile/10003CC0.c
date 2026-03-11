/*
 * func-name: ?stop@Peer@P2P@Outpop@@QAEXXZ
 * func-address: 0x10003cc0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::Peer::stop(Outpop::P2P::Peer *this)
{
  *((_BYTE *)this + 156) = 0;
  Outpop::IONetwork::WIN32_IoCompletionPort::proactor_post_wakeup_completions(
    (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
    1);
}
