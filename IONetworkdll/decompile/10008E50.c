/*
 * func-name: ?remote_addr@Bluid_Pakcet@IONetwork@Outpop@@QAEXAAVINET_Addr@23@@Z
 * func-address: 0x10008e50
 * callers: 0x1001dec0
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Bluid_Pakcet::remote_addr(
        Outpop::IONetwork::Bluid_Pakcet *this,
        struct Outpop::IONetwork::INET_Addr *a2)
{
  char *v2; // edi
  _DWORD *v3; // esi
  _DWORD *result; // eax

  v2 = (char *)this + 32;
  v3 = (_DWORD *)(*(int (__thiscall **)(struct Outpop::IONetwork::INET_Addr *))(*(_DWORD *)a2 + 16))(a2);
  result = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 16))(v2);
  *result = *v3;
  result[1] = v3[1];
  result[2] = v3[2];
  result[3] = v3[3];
  return result;
}
