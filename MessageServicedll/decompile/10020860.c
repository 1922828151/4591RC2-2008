/*
 * func-name: ??0Message@0Outpop@@QAE@_NW4EMultiType@01@W4EMessageType@01@0I@Z
 * func-address: 0x10020860
 * callers: 0x1000dc60, 0x100248a0, 0x10024cc0, 0x100253f0, 0x10025e70, 0x10026580, 0x10028370
 * callees: 0x10020640
 */

int __thiscall Outpop::Message::Message::Message(int this, const char *a2, int a3, int a4, char a5, int a6)
{
  unsigned __int8 *v7; // edi
  int v8; // ebp
  int v9; // eax
  char *v10; // eax
  unsigned __int16 v11; // ax
  unsigned __int8 v12; // dl
  _BYTE *v13; // eax

  v7 = (unsigned __int8 *)(this + 104);
  v8 = this + 96;
  v9 = sub_10020640(a4, (_WORD *)(this + 96), a2, a3, a6, (Outpop::Utility::Lock *)(this + 104));
  Outpop::Utility::Binary_Stream::Binary_Stream((Outpop::Utility::Binary_Stream *)this, v9);
  *(_DWORD *)this = &Outpop::Message::Message::`vftable';
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 72) = -1;
  v10 = Outpop::Utility::Stream_Base::get_write_ptr((Outpop::Utility::Stream_Base *)this);
  *(_DWORD *)(this + 100) = v10;
  *v10 = 0;
  Outpop::Utility::Stream_Base::move_write_pos((Outpop::Utility::Stream_Base *)this, *v7);
  if ( (_BYTE)a2 )
  {
    **(_BYTE **)(this + 100) |= 0x80u;
    v11 = *(_WORD *)v8 >> 12;
    if ( v11 )
      *(_WORD *)(v11 + *(_DWORD *)(this + 100)) = -1;
  }
  if ( a5 )
    **(_BYTE **)(this + 100) |= 2u;
  if ( a4 == 1 )
  {
    **(_BYTE **)(this + 100) |= 4u;
    if ( (*(_BYTE *)(v8 + 1) & 0xF) != 0 )
      *(_DWORD *)((*(_BYTE *)(v8 + 1) & 0xF) + *(_DWORD *)(this + 100)) = -1;
  }
  else if ( a4 == 2 )
  {
    **(_BYTE **)(this + 100) |= 8u;
    if ( ((*(_BYTE *)v8 >> 4) & 0xF) != 0 )
      *(_WORD *)(((*(_BYTE *)v8 >> 4) & 0xF) + *(_DWORD *)(this + 100)) = -1;
    v12 = *(_BYTE *)(v8 + 1) & 0xF;
    if ( v12 )
      *(_DWORD *)(v12 + *(_DWORD *)(this + 100)) = -1;
  }
  if ( a3 )
  {
    v13 = *(_BYTE **)(this + 100);
    if ( a3 == 1 )
      *v13 |= 0x20u;
    else
      *v13 |= 0x40u;
    if ( (*(_BYTE *)v8 & 0xF) != 0 )
      *(_DWORD *)((*(_BYTE *)v8 & 0xF) + *(_DWORD *)(this + 100)) = -1;
  }
  return this;
}
