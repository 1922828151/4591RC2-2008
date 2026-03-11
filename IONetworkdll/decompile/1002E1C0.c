/*
 * func-name: ?send_immediacy@Dgram_Channel@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1002e1c0
 * callers: none
 * callees: 0x100279d0, 0x10038ad0
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::send_immediacy(_DWORD *this, Outpop::Utility::Stream_Base **a2)
{
  int result; // eax
  _DWORD *v3; // ecx

  result = (int)this;
  v3 = (_DWORD *)this[46];
  if ( v3 )
    return Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(v3, a2, result + 80, 0);
  if ( *(_DWORD *)(result + 188) )
    return Outpop::IONetwork::Dgram_Connector::asynch_send_to(a2, result + 80, 0);
  return result;
}
