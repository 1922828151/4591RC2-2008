/*
 * func-name: ?set_remote_address@Channel@IONetwork@Outpop@@QAEXAAVINET_Addr@23@@Z
 * func-address: 0x10008ba0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Channel::set_remote_address(
        Outpop::IONetwork::Channel *this,
        struct Outpop::IONetwork::INET_Addr *a2)
{
  char *v2; // edi
  _DWORD *v3; // esi
  _DWORD *result; // eax

  v2 = (char *)this + 80;
  v3 = (_DWORD *)(*(int (__thiscall **)(struct Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  result = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 16))(v2);
  *result = *v3;
  result[1] = v3[1];
  result[2] = v3[2];
  result[3] = v3[3];
  return result;
}
