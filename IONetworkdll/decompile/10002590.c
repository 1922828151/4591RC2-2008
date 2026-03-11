/*
 * func-name: ??MINET_Addr@IONetwork@Outpop@@QAE_NABV012@@Z
 * func-address: 0x10002590
 * callers: none
 * callees: none
 */

BOOL __thiscall Outpop::IONetwork::INET_Addr::operator<(int this, int a2)
{
  u_long v3; // ebp
  u_long v4; // ebp
  u_short v5; // di
  BOOL result; // eax

  v3 = ntohl(*(_DWORD *)(this + 16));
  result = 1;
  if ( v3 >= ntohl(*(_DWORD *)(a2 + 16)) )
  {
    v4 = ntohl(*(_DWORD *)(this + 16));
    if ( v4 != ntohl(*(_DWORD *)(a2 + 16)) )
      return 0;
    v5 = ntohs(*(_WORD *)(this + 14));
    if ( v5 != ntohs(*(_WORD *)(a2 + 14)) )
      return 0;
  }
  return result;
}
