/*
 * func-name: ?make_head@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAE?AV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV453@W4EPacketType@53@_N2GG@Z
 * func-address: 0x10009580
 * callers: 0x1002d330, 0x1002e210, 0x10030dd0, 0x10032520, 0x10042eb0, 0x10043720, 0x10044ef0, 0x10045f80, 0x10046320
 * callees: 0x10009a30, 0x1004f11e
 */

Outpop::Utility::Stream_Base **__stdcall Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(
        Outpop::Utility::Stream_Base **a1,
        Outpop::Utility::Stream_Base **a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  Outpop::Utility::Binary_Stream *v7; // eax
  Outpop::Utility::Ref_Object *v8; // esi
  char *ptr; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // ebx
  int v13; // eax
  char v14; // cl
  char v15; // cl
  char *v16; // ebx
  int v17; // eax
  char v18; // cl
  char v19; // cl
  Outpop::Utility::Binary_Stream *v20; // ebx
  char *v21; // eax
  Outpop::Utility::Stream_Base *v22; // ebx
  char *v23; // eax
  char *v24; // eax
  Outpop::Utility::Ref_Object *v25; // edi
  char *v27; // [esp-8h] [ebp-38h]
  char *v28; // [esp-8h] [ebp-38h]
  size_t v29; // [esp-4h] [ebp-34h]
  size_t v30; // [esp-4h] [ebp-34h]
  int v31; // [esp+14h] [ebp-1Ch]
  int readable; // [esp+18h] [ebp-18h] BYREF
  int v33; // [esp+1Ch] [ebp-14h]
  Outpop::Utility::Ref_Object *v34; // [esp+20h] [ebp-10h]
  int v35; // [esp+2Ch] [ebp-4h]
  Outpop::Utility::Stream_Base *v36; // [esp+40h] [ebp+10h]
  Outpop::Utility::Stream_Base *v37; // [esp+40h] [ebp+10h]
  char *v38; // [esp+40h] [ebp+10h]
  Outpop::Utility::Stream_Base *v39; // [esp+40h] [ebp+10h]

  v33 = 0;
  v7 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v8 = v7;
  v35 = 1;
  if ( v7 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v7, 10);
    *(_DWORD *)v8 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v35) = 0;
  v34 = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  v35 = 2;
  ptr = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  *(_DWORD *)ptr = 0;
  *((_DWORD *)ptr + 1) = 0;
  *((_WORD *)ptr + 4) = 0;
  v31 = 3;
  v10 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  if ( a3 )
    *v10 |= 1u;
  else
    *v10 &= ~1u;
  v11 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  if ( a4 )
    *v11 |= 2u;
  else
    *v11 &= ~2u;
  v36 = *a2;
  v12 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  v13 = Outpop::Utility::Binary_Stream::priority(v36);
  *v12 &= 0xCFu;
  v14 = *v12;
  switch ( v13 )
  {
    case 1:
      v15 = v14 | 0x10;
      break;
    case 3:
      v15 = v14 | 0x20;
      break;
    case 5:
      v15 = v14 | 0x30;
      break;
    default:
      goto LABEL_19;
  }
  *v12 = v15;
LABEL_19:
  v37 = *a2;
  v16 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  v17 = Outpop::Utility::Binary_Stream::sequence(v37);
  *v16 &= 0xF3u;
  v18 = *v16;
  if ( v17 == 2 )
  {
    v19 = v18 | 4;
  }
  else if ( v17 == 1 )
  {
    v19 = v18 | 8;
  }
  else
  {
    v19 = v18 | 0xC;
  }
  *v16 = v19;
  v20 = *a2;
  v38 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  if ( Outpop::Utility::Binary_Stream::get_reliable(v20) )
    *v38 |= 0x40u;
  else
    *v38 &= ~0x40u;
  v21 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  if ( a5 )
    *v21 |= 0x80u;
  else
    *v21 &= ~0x80u;
  Outpop::Utility::Stream_Base::move_write_pos(v8, 1);
  readable = (unsigned __int16)Outpop::Utility::Stream_Base::get_readable(*a2);
  sub_10009A30(&readable);
  if ( Outpop::Utility::Binary_Stream::get_reliable(*a2) )
  {
    v31 = 5;
    sub_10009A30(&a7);
  }
  if ( !a3 && Outpop::Utility::Binary_Stream::sequence(*a2) != 2 )
  {
    v31 += 2;
    sub_10009A30(&a6);
  }
  v22 = *a2;
  v29 = Outpop::Utility::Stream_Base::get_readable(*a2);
  v27 = Outpop::Utility::Stream_Base::get_read_ptr(v22);
  v23 = Outpop::Utility::Stream_Base::get_read_ptr(v22);
  memcpy(&v23[v31], v27, v29);
  v39 = *a2;
  v30 = Outpop::Utility::Stream_Base::get_readable(v8);
  v28 = Outpop::Utility::Stream_Base::get_read_ptr(v8);
  v24 = Outpop::Utility::Stream_Base::get_read_ptr(v39);
  memcpy(v24, v28, v30);
  Outpop::Utility::Stream_Base::move_write_pos(*a2, v31);
  Outpop::Utility::Binary_Stream::head_size(*a2, v31);
  v25 = *a2;
  *a1 = *a2;
  if ( v25 )
    Outpop::Utility::Ref_Object::addref(v25);
  v33 = 1;
  LOBYTE(v35) = 0;
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  return a1;
}
