/*
 * func-name: ?parse_dgram_stream@P2P_Channel@IONetwork@Outpop@@QAE_NAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100447a0
 * callers: 0x100440d0
 * callees: 0x10009830, 0x1000b220, 0x1003c480
 */

char __thiscall Outpop::IONetwork::P2P_Channel::parse_dgram_stream(
        char *this,
        _DWORD *a2,
        Outpop::Utility::Stream_Base **a3)
{
  unsigned __int16 v3; // si
  unsigned __int16 v4; // ax
  int v5; // ebx
  Outpop::Utility::Binary_Stream *v6; // eax
  Outpop::Utility::Ref_Object *v7; // esi
  const char *ptr; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  Outpop::Utility::Ref_Object **v11; // eax
  int v12; // ecx
  int v14; // [esp+14h] [ebp-2Ch]
  _DWORD v15[2]; // [esp+18h] [ebp-28h] BYREF
  int v16; // [esp+20h] [ebp-20h]
  char *v17; // [esp+24h] [ebp-1Ch]
  int v18[3]; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+3Ch] [ebp-4h]

  v15[1] = this + 198;
  while ( 1 )
  {
    Outpop::IONetwork::Dgram_Protocol_Head_Process::parse_head_to_stream(a3);
    v3 = 3;
    if ( Outpop::Utility::Binary_Stream::get_reliable(*a3) )
      v3 = 5;
    if ( Outpop::Utility::Binary_Stream::sequence(*a3) != 2 )
      v3 += 2;
    v4 = *(_WORD *)(Outpop::Utility::Stream_Base::get_read_ptr(*a3) + 1);
    if ( v3 > 0xAu )
      return 0;
    if ( v4 > 0xFFDCu )
      return 0;
    v5 = v3;
    v14 = v4 + v3;
    if ( Outpop::Utility::Stream_Base::get_readable(*a3) < v14 )
      return 0;
    v6 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v7 = v6;
    v17 = (char *)v6;
    v19 = 0;
    if ( v6 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v6, v14);
      *(_DWORD *)v7 = &Outpop::Utility::Binary_Stream::`vftable';
    }
    else
    {
      v7 = 0;
    }
    v19 = -1;
    v15[0] = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
    v19 = 1;
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(*a3);
    Outpop::Utility::Stream_Base::write(v7, ptr);
    Outpop::Utility::Binary_Stream::set_all_protepoty(v7, a3);
    Outpop::Utility::Binary_Stream::head_size(v7, v5);
    Outpop::Utility::Stream_Base::move_read_pos(v7, v5);
    v9 = a2[1];
    v10 = v9 ? (int)(a2[2] - v9) >> 2 : 0;
    if ( v9 && v10 < (int)(a2[3] - v9) >> 2 )
    {
      v11 = (Outpop::Utility::Ref_Object **)a2[2];
      LOBYTE(v16) = 0;
      v17 = (char *)v11;
      sub_1003C480(v11, 1);
      a2[2] = v17 + 4;
    }
    else
    {
      v17 = (char *)a2[2];
      v12 = (int)v17;
      if ( v9 > (unsigned int)v17 )
      {
        invalid_parameter_noinfo();
        v12 = (int)v17;
      }
      sub_1000B220((int)a2, v18, (int)v15, (int)a2, v12);
    }
    Outpop::Utility::Stream_Base::move_read_pos(*a3, v14);
    if ( !Outpop::Utility::Stream_Base::get_readable(*a3) )
      break;
    if ( (int)Outpop::Utility::Stream_Base::get_readable(*a3) < 0 )
    {
      v19 = -1;
      if ( v7 )
        Outpop::Utility::Ref_Object::release(v7);
      return 0;
    }
    v19 = -1;
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
  }
  v19 = -1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  return 1;
}
