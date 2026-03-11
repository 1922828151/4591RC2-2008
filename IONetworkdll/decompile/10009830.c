/*
 * func-name: ?parse_head_to_stream@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAE_NAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10009830
 * callers: 0x10030ba0, 0x100447a0
 * callees: none
 */

char __stdcall Outpop::IONetwork::Dgram_Protocol_Head_Process::parse_head_to_stream(Outpop::Utility::Stream_Base **a1)
{
  char *ptr; // eax
  char v2; // al
  int v3; // eax
  char v4; // al
  int v5; // ebp
  bool v6; // bl
  char *v7; // eax
  char *v8; // eax
  char *v10; // eax
  BOOL v11; // [esp-4h] [ebp-10h]

  ptr = Outpop::Utility::Stream_Base::get_read_ptr(*a1);
  Outpop::Utility::Binary_Stream::set_key_flag(*a1, (*ptr & 2) != 0);
  v11 = (*Outpop::Utility::Stream_Base::get_read_ptr(*a1) & 1) != 0;
  Outpop::Utility::Binary_Stream::set_packet_type(v11);
  v2 = *Outpop::Utility::Stream_Base::get_read_ptr(*a1) & 0xC;
  if ( v2 == 12 )
    v3 = 0;
  else
    v3 = (v2 != 8) + 1;
  Outpop::Utility::Binary_Stream::sequence(*a1, v3);
  v4 = *Outpop::Utility::Stream_Base::get_read_ptr(*a1) & 0x30;
  if ( v4 == 16 )
    v5 = 1;
  else
    v5 = 2 * (v4 == 48) + 3;
  Outpop::Utility::Binary_Stream::priority(*a1, v5);
  v6 = (*Outpop::Utility::Stream_Base::get_read_ptr(*a1) & 0x40) != 0;
  Outpop::Utility::Binary_Stream::set_reliable(*a1, v6);
  if ( v6 )
  {
    v7 = Outpop::Utility::Stream_Base::get_read_ptr(*a1);
    Outpop::Utility::Binary_Stream::set_reliable_id(*a1, *(_WORD *)(v7 + 3));
    if ( v5 != 2 )
    {
      v8 = Outpop::Utility::Stream_Base::get_read_ptr(*a1);
      Outpop::Utility::Binary_Stream::set_sequence_id(*a1, *(unsigned __int16 *)(v8 + 5));
      return 1;
    }
  }
  else if ( v5 != 2 )
  {
    v10 = Outpop::Utility::Stream_Base::get_read_ptr(*a1);
    Outpop::Utility::Binary_Stream::set_sequence_id(*a1, *(unsigned __int16 *)(v10 + 3));
  }
  return 1;
}
