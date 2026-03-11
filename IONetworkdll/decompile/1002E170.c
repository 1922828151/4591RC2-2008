/*
 * func-name: ?send@Dgram_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@W4EPriority@Utility@3@W4ESequenceType@73@_N@Z
 * func-address: 0x1002e170
 * callers: none
 * callees: none
 */

void __stdcall Outpop::IONetwork::Dgram_Channel::send(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > v5 )
      invalid_parameter_noinfo();
    if ( v4 == v5 )
      break;
    if ( v4 >= *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    v4 += 4;
  }
}
