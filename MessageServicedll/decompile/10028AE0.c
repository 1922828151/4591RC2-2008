/*
 * func-name: ?on_channel_build@Remote_Event_Stub@Message@Outpop@@QAEXH@Z
 * func-address: 0x10028ae0
 * callers: 0x10028ed0
 * callees: 0x10020fa0, 0x10029320
 */

void __thiscall Outpop::Message::Remote_Event_Stub::on_channel_build(Outpop::Message::Remote_Event_Stub *this, int a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax
  Outpop::Utility::Stream_Base *v4; // eax
  Outpop::Utility::Stream_Base *v5; // esi
  char *v6; // eax
  unsigned __int16 v7; // ax
  Outpop::Utility::Sect_Block_Allocator *v8; // eax
  Outpop::Utility::Stream_Base *v9; // eax
  Outpop::Utility::Stream_Base *v10; // esi
  char *v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  Outpop::Utility::Stream_Base *v14; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  *((_DWORD *)this + 6) = a2;
  v14 = 0;
  v16 = 0;
  if ( *((_DWORD *)this + 3) )
  {
    v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
    v4 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Sect_Block_Allocator::malloc(v3);
    v5 = v4;
    v15 = (int)v4;
    LOBYTE(v16) = 1;
    if ( v4 )
    {
      *((_WORD *)v4 + 48) = 8196;
      *((_BYTE *)v4 + 104) = 8;
      Outpop::Utility::Binary_Stream::Binary_Stream(v4, 12);
      *(_DWORD *)v5 = &Outpop::Message::Message::`vftable';
      *((_DWORD *)v5 + 23) = 0;
      LOBYTE(v16) = 4;
      *((_DWORD *)v5 + 20) = 0;
      *((_DWORD *)v5 + 19) = 0;
      *((_DWORD *)v5 + 22) = 0;
      *((_DWORD *)v5 + 21) = 0;
      *((_DWORD *)v5 + 18) = -1;
      v6 = Outpop::Utility::Stream_Base::get_write_ptr(v5);
      *((_DWORD *)v5 + 25) = v6;
      *v6 = 0;
      Outpop::Utility::Stream_Base::move_write_pos(v5, *((unsigned __int8 *)v5 + 104));
      **((_BYTE **)v5 + 25) |= 0x80u;
      v7 = *((_WORD *)v5 + 48) >> 12;
      if ( v7 )
        *(_WORD *)(v7 + *((_DWORD *)v5 + 25)) = -1;
      **((_BYTE **)v5 + 25) |= 0x20u;
      if ( (*((_BYTE *)v5 + 96) & 0xF) != 0 )
        *(_DWORD *)((*((_BYTE *)v5 + 96) & 0xF) + *((_DWORD *)v5 + 25)) = -1;
      LOBYTE(v16) = 1;
    }
    else
    {
      v5 = 0;
    }
    LOBYTE(v16) = 0;
    v15 = (int)v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    LOBYTE(v16) = 5;
    if ( v14 )
      Outpop::Utility::Ref_Object::release(v14);
    v14 = v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    LOBYTE(v16) = 0;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    if ( (*((_BYTE *)v14 + 96) & 0xF) != 0 )
      *(_DWORD *)((*((_BYTE *)v14 + 96) & 0xF) + *((_DWORD *)v14 + 25)) = *((_DWORD *)this + 3);
  }
  else
  {
    v8 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
    v9 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Sect_Block_Allocator::malloc(v8);
    v10 = v9;
    v15 = (int)v9;
    LOBYTE(v16) = 6;
    if ( v9 )
    {
      *((_WORD *)v9 + 48) = 0x2000;
      *((_BYTE *)v9 + 104) = 4;
      Outpop::Utility::Binary_Stream::Binary_Stream(v9, 8);
      *(_DWORD *)v10 = &Outpop::Message::Message::`vftable';
      *((_DWORD *)v10 + 23) = 0;
      LOBYTE(v16) = 9;
      *((_DWORD *)v10 + 20) = 0;
      *((_DWORD *)v10 + 19) = 0;
      *((_DWORD *)v10 + 22) = 0;
      *((_DWORD *)v10 + 21) = 0;
      *((_DWORD *)v10 + 18) = -1;
      v11 = Outpop::Utility::Stream_Base::get_write_ptr(v10);
      *((_DWORD *)v10 + 25) = v11;
      *v11 = 0;
      Outpop::Utility::Stream_Base::move_write_pos(v10, *((unsigned __int8 *)v10 + 104));
      **((_BYTE **)v10 + 25) |= 0x80u;
      v12 = *((_WORD *)v10 + 48) >> 12;
      if ( v12 )
        *(_WORD *)(v12 + *((_DWORD *)v10 + 25)) = -1;
      LOBYTE(v16) = 6;
    }
    else
    {
      v10 = 0;
    }
    LOBYTE(v16) = 0;
    v15 = (int)v10;
    if ( v10 )
      Outpop::Utility::Ref_Object::addref(v10);
    LOBYTE(v16) = 10;
    if ( v14 )
      Outpop::Utility::Ref_Object::release(v14);
    v14 = v10;
    if ( v10 )
      Outpop::Utility::Ref_Object::addref(v10);
    LOBYTE(v16) = 0;
    if ( v10 )
      Outpop::Utility::Ref_Object::release(v10);
  }
  *(_BYTE *)(*((_DWORD *)v14 + 25) + 1) = *((_BYTE *)this + 5);
  v13 = *((_WORD *)v14 + 48) >> 12;
  if ( v13 )
    *(_WORD *)(v13 + *((_DWORD *)v14 + 25)) = *((_WORD *)this + 3);
  Outpop::Utility::Binary_Stream::priority(3);
  Outpop::Utility::Binary_Stream::set_reliable(v14, 1);
  Outpop::Utility::Binary_Stream::sequence(v14, 2);
  v15 = 102;
  sub_10029320(&v15);
  Outpop::Message::Message_Sender::send(*((_DWORD **)Outpop::Message::Message_Facade::g_c_ + 10), a2, &v14);
  v16 = -1;
  if ( v14 )
    Outpop::Utility::Ref_Object::release(v14);
}
