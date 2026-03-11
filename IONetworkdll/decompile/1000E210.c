/*
 * func-name: ?set_acceptor@Stream_Channel@IONetwork@Outpop@@UAEXAAVAcceptor@23@@Z
 * func-address: 0x1000e210
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::Stream_Channel::set_acceptor(
        Outpop::IONetwork::Stream_Channel *this,
        struct Outpop::IONetwork::Acceptor *a2)
{
  *((_DWORD *)this + 45) = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
}
