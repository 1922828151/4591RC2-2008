/*
 * func-name: ?direct_send@Stream_Channel@IONetwork@Outpop@@QAEHAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x1000ef90
 * callers: none
 * callees: 0x1000f010
 */

int __stdcall Outpop::IONetwork::Stream_Channel::direct_send(int a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > v2 )
      invalid_parameter_noinfo();
    if ( v1 == v2 )
      break;
    if ( v1 >= *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    if ( Outpop::IONetwork::Stream_Channel::direct_send(v1) == -1 )
      return -1;
    if ( v1 >= *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    v1 += 4;
  }
  return 0;
}
