/*
 * func-name: ?parse_dgram_stream@Dgram_Channel@IONetwork@Outpop@@QAE_NAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10030ba0
 * callers: 0x1002f880
 * callees: 0x10009830, 0x1000b220, 0x1003c480
 */

char __thiscall Outpop::IONetwork::Dgram_Channel::parse_dgram_stream(
        _DWORD **this,
        _DWORD *a2,
        Outpop::Utility::Stream_Base **a3)
{
  unsigned __int16 v3; // di
  unsigned __int16 v4; // ax
  int v5; // ebx
  Outpop::Utility::Stream_Base *v6; // ecx
  const char *ptr; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  Outpop::Utility::Ref_Object *v10; // eax
  int v11; // ecx
  int v13; // [esp+Ch] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v14; // [esp+20h] [ebp-28h] BYREF
  _DWORD **v15; // [esp+24h] [ebp-24h]
  Outpop::Utility::Ref_Object *v16; // [esp+28h] [ebp-20h]
  Outpop::Utility::Stream_Base *v17; // [esp+2Ch] [ebp-1Ch]
  int v18[3]; // [esp+30h] [ebp-18h] BYREF
  int v19; // [esp+44h] [ebp-4h]

  v15 = this;
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
    v5 = v4 + v3;
    if ( Outpop::Utility::Stream_Base::get_readable(*a3) < v5 )
      return 0;
    (*(void (__thiscall **)(_DWORD *, Outpop::Utility::Ref_Object **, int))(*v15[29] + 12))(v15[29], &v14, v5 + 20);
    v19 = 0;
    v6 = *a3;
    v16 = v14;
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v6);
    Outpop::Utility::Stream_Base::write(v17, ptr, v13);
    Outpop::Utility::Binary_Stream::set_all_protepoty(v14, a3);
    Outpop::Utility::Binary_Stream::head_size(v14, v3);
    Outpop::Utility::Stream_Base::move_read_pos(v14, v3);
    v8 = a2[1];
    v9 = v8 ? (int)(a2[2] - v8) >> 2 : 0;
    if ( v8 && v9 < (int)(a2[3] - v8) >> 2 )
    {
      v10 = (Outpop::Utility::Ref_Object *)a2[2];
      LOBYTE(v17) = 0;
      v16 = v10;
      sub_1003C480(v10, 1);
      a2[2] = (char *)v16 + 4;
    }
    else
    {
      v16 = (Outpop::Utility::Ref_Object *)a2[2];
      v11 = (int)v16;
      if ( v8 > (unsigned int)v16 )
      {
        invalid_parameter_noinfo();
        v11 = (int)v16;
      }
      sub_1000B220((int)a2, v18, (int)&v14, (int)a2, v11);
    }
    Outpop::Utility::Stream_Base::move_read_pos(*a3, v5);
    if ( !Outpop::Utility::Stream_Base::get_readable(*a3) )
      break;
    if ( (int)Outpop::Utility::Stream_Base::get_readable(*a3) < 0 )
    {
      v19 = -1;
      if ( v14 )
        Outpop::Utility::Ref_Object::release(v14);
      return 0;
    }
    v19 = -1;
    if ( v14 )
      Outpop::Utility::Ref_Object::release(v14);
  }
  v19 = -1;
  if ( v14 )
    Outpop::Utility::Ref_Object::release(v14);
  return 1;
}
