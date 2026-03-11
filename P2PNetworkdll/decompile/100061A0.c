/*
 * func-name: ?OnRequestRemoteConnectFailed@Peer@P2P@Outpop@@IAEXHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100061a0
 * callers: 0x10009bf0
 * callees: none
 */

int __thiscall Outpop::P2P::Peer::OnRequestRemoteConnectFailed(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 20))(this, a3, a2);
}
