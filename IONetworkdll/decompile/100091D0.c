/*
 * func-name: ?make_head@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAE?AV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV453@W4EPacketType@53@_N2H@Z
 * func-address: 0x100091d0
 * callers: 0x1000f2a0, 0x1000f9b0, 0x10010440
 * callees: 0x10009930, 0x10009a30, 0x10009b30
 */

Outpop::Utility::Stream_Base **__stdcall Outpop::IONetwork::Stream_Protocol_Head_Process::make_head(
        Outpop::Utility::Stream_Base **a1,
        Outpop::Utility::Stream_Base **a2,
        int a3,
        int a4,
        char a5,
        unsigned __int8 a6)
{
  Outpop::Utility::Stream_Base **v6; // edi
  int readable; // eax
  Outpop::Utility::Stream_Base *v8; // ecx
  int v9; // eax
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  int v13; // edx
  char v14; // cl
  char v15; // cl
  Outpop::Utility::Stream_Base *v16; // ebp
  int v17; // esi
  int v18; // ebx
  char *ptr; // eax
  char v20; // cl
  int i; // edx
  char *v22; // ebp
  int j; // eax
  Outpop::Utility::Ref_Object *v24; // ecx
  bool v25; // zf
  int v27; // [esp+14h] [ebp-18h] BYREF
  int v28; // [esp+18h] [ebp-14h]
  int v29; // [esp+1Ch] [ebp-10h]

  v29 = 0;
  v6 = a2;
  readable = Outpop::Utility::Stream_Base::get_readable(*a2);
  v8 = *v6;
  v27 = readable;
  v9 = Outpop::Utility::Stream_Base::get_readable(v8);
  v28 = v9;
  if ( a5 )
    ++v27;
  if ( v27 >= 256 )
    v10 = 2 * (v27 >= 0x10000) + 3;
  else
    v10 = 2;
  Outpop::Utility::Stream_Base::move_write_pos(*v6, -(v10 + v9));
  v11 = Outpop::Utility::Stream_Base::get_write_ptr(*v6);
  if ( a3 )
    *v11 |= 1u;
  else
    *v11 &= ~1u;
  v12 = Outpop::Utility::Stream_Base::get_write_ptr(*v6);
  v13 = v27;
  *v12 &= 0x3Fu;
  v14 = *v12;
  if ( v13 >= 256 )
  {
    if ( v13 >= 0x10000 )
      v15 = v14 | 0xC0;
    else
      v15 = v14 | 0x80;
  }
  else
  {
    v15 = v14 | 0x40;
  }
  *v12 = v15;
  Outpop::Utility::Stream_Base::move_write_pos(*v6, 1);
  if ( v27 >= 256 )
  {
    if ( v27 >= 0x10000 )
    {
      sub_10009B30(&v27);
    }
    else
    {
      a2 = (Outpop::Utility::Stream_Base **)(unsigned __int16)v27;
      sub_10009A30(&a2);
    }
  }
  else
  {
    LOBYTE(a2) = v27;
    sub_10009930(&a2);
  }
  Outpop::Utility::Stream_Base::move_write_pos(*v6, v28);
  Outpop::Utility::Stream_Base::move_read_pos(*v6, -v10);
  Outpop::Utility::Binary_Stream::head_size(*v6, v10);
  if ( a5 )
  {
    v16 = *v6;
    v17 = Outpop::Utility::Binary_Stream::head_size(*v6);
    v18 = Outpop::Utility::Stream_Base::get_readable(v16);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v16);
    v20 = 0;
    for ( i = 0; i < v17; ++i )
      v20 += ptr[i];
    v22 = &ptr[v17];
    for ( j = 0; j < v18 - v17; j += a6 )
      v20 += v22[j];
    a5 = v20;
    sub_10009930(&a5);
  }
  v24 = *v6;
  v25 = *v6 == 0;
  *a1 = *v6;
  if ( !v25 )
    Outpop::Utility::Ref_Object::addref(v24);
  return a1;
}
