/*
 * func-name: ?get_builder_id@Stream_Channel@IONetwork@Outpop@@UAEHXZ
 * func-address: 0x1000e230
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::Stream_Channel::get_builder_id(Outpop::IONetwork::Stream_Channel *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 45);
  if ( v1 )
    return *(_DWORD *)(v1 + 12);
  else
    return *(_DWORD *)(*((_DWORD *)this + 46) + 108);
}
