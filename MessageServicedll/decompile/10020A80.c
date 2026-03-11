/*
 * func-name: ?receive_data@Message@1Outpop@@QAEXXZ
 * func-address: 0x10020a80
 * callers: 0x100119c0
 * callees: none
 */

void __thiscall Outpop::Message::Message::receive_data(Outpop::Message::Message *this)
{
  char *ptr; // eax
  char v3; // cl
  unsigned __int8 v4; // al
  char v5; // al
  __int16 v6; // bx
  char v7; // al
  char v8; // al
  int v9; // ecx
  char v10; // al

  ptr = Outpop::Utility::Stream_Base::get_read_ptr(this);
  *((_DWORD *)this + 25) = ptr;
  v3 = *ptr;
  *((_BYTE *)this + 104) += 2;
  v4 = *((_BYTE *)this + 104);
  if ( v3 < 0 )
  {
    *((_WORD *)this + 48) |= v4 << 12;
    *((_BYTE *)this + 104) = v4 + 2;
  }
  if ( (v3 & 4) != 0 )
  {
    v5 = *((_BYTE *)this + 104);
    LOBYTE(v6) = 0;
    HIBYTE(v6) = v5 & 0xF;
    *((_WORD *)this + 48) |= v6;
    v7 = v5 + 4;
LABEL_7:
    *((_BYTE *)this + 104) = v7;
    goto LABEL_8;
  }
  if ( (v3 & 8) != 0 )
  {
    v8 = *((_BYTE *)this + 104) + 4;
    *((_WORD *)this + 48) |= *(_WORD *)((_BYTE *)this + 103) & 0xF00;
    *((_WORD *)this + 48) |= 16 * (v8 & 0xF);
    v7 = v8 + 2;
    goto LABEL_7;
  }
LABEL_8:
  v9 = v3 & 0x60;
  if ( v9 == 32 || v9 == 64 )
  {
    v10 = *((_BYTE *)this + 104);
    *((_WORD *)this + 48) |= v10 & 0xF;
    *((_BYTE *)this + 104) = v10 + 4;
  }
  Outpop::Utility::Stream_Base::move_read_pos(this, *((unsigned __int8 *)this + 104));
}
