/*
 * func-name: ?get_builder_id@Dgram_Channel@IONetwork@Outpop@@UAEHXZ
 * func-address: 0x10032000
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::get_builder_id(Outpop::IONetwork::Dgram_Channel *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 46);
  if ( v1 )
    return *(_DWORD *)(v1 + 12);
  else
    return *(_DWORD *)(*((_DWORD *)this + 47) + 108);
}
