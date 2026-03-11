/*
 * func-name: ?separate_ace_packet@Dgram_Channel@IONetwork@Outpop@@AAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@0@Z
 * func-address: 0x10032740
 * callers: 0x1002f880
 * callees: 0x1000ac30, 0x100246d0
 */

void __stdcall Outpop::IONetwork::Dgram_Channel::separate_ace_packet(int a1, _DWORD *a2)
{
  int v2; // edi
  Outpop::Utility::Ref_Object **v3; // ebx
  Outpop::Utility::Ref_Object **v4; // esi
  int *v5; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF

  v2 = a1;
  v3 = *(Outpop::Utility::Ref_Object ***)(a1 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v4 = *(Outpop::Utility::Ref_Object ***)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > (unsigned int)v4 )
      invalid_parameter_noinfo();
    if ( !v2 || v2 != a1 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 8) )
      invalid_parameter_noinfo();
    if ( Outpop::Utility::Binary_Stream::get_packet_type(*v3) == 1 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 8) )
        invalid_parameter_noinfo();
      sub_1000AC30((int)v3, a2);
      v5 = sub_100246D0(a1, &v6, v2, v3);
      v2 = *v5;
      v3 = (Outpop::Utility::Ref_Object **)v5[1];
    }
    else
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 8) )
        invalid_parameter_noinfo();
      ++v3;
    }
  }
}
