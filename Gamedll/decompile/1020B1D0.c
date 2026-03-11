/*
 * func-name: sub_1020B1D0
 * func-address: 0x1020b1d0
 * callers: 0x10014e25
 * callees: 0x10002842, 0x10005605, 0x10006802, 0x1001438f, 0x1001a0f5, 0x102c9d50, 0x102c9d62
 */

void __thiscall sub_1020B1D0(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ebp
  bool v9; // zf
  Outpop::Message::Message *v10; // esi
  int v11; // eax
  Outpop::Message::Message *v12; // ecx
  Outpop::Utility::Ref_Object *v13; // ecx
  Outpop::Utility::Binary_Stream *v14; // esi
  int v15; // eax
  Outpop::Utility::Binary_Stream *v16; // ecx
  int *v17; // esi
  int *v18; // edi
  char *v19; // eax
  Outpop::Message::Message *v20; // esi
  int v21; // edi
  int v22; // eax
  Outpop::Message::Message *v23; // ecx
  int v24; // [esp-4h] [ebp-64h]
  int v25; // [esp-4h] [ebp-64h]
  int v26; // [esp+14h] [ebp-4Ch] BYREF
  int v27; // [esp+18h] [ebp-48h]
  Outpop::Utility::Binary_Stream *v28; // [esp+1Ch] [ebp-44h] BYREF
  Outpop::Utility::Binary_Stream *v29; // [esp+20h] [ebp-40h]
  int v30; // [esp+24h] [ebp-3Ch] BYREF
  void *v31; // [esp+28h] [ebp-38h]
  int v32; // [esp+2Ch] [ebp-34h]
  int v33; // [esp+30h] [ebp-30h]
  _BYTE v34[28]; // [esp+34h] [ebp-2Ch] BYREF
  int v35; // [esp+5Ch] [ebp-4h]

  v6 = a4;
  v7 = a5;
  v27 = a6;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v9 = this[164] == 0;
  v35 = 0;
  if ( v9 )
  {
    v10 = (Outpop::Message::Message *)Outpop::Message::Message::operator new(0x6Cu);
    v29 = v10;
    LOBYTE(v35) = 1;
    if ( v10 )
    {
      v11 = std::string::size(v27);
      Outpop::Message::Message::Message(v10, 1, 1, 0, 0, v11 + 64);
      *(_DWORD *)v10 = &Outpop::Message::Message::`vftable';
      v12 = v10;
    }
    else
    {
      v12 = 0;
    }
    LOBYTE(v35) = 0;
    v26 = (int)v12;
    if ( v12 )
      Outpop::Utility::Ref_Object::addref(v12);
    LOBYTE(v35) = 2;
    Outpop::Message::Message::set_protocol_catalog((Outpop::Message::Message *)v26, 0x15u);
    Outpop::Message::Message::set_protocol_type((Outpop::Message::Message *)v26, 0x521Eu);
    sub_1001438F(v7);
    sub_10002842(v27);
    Outpop::Message::Message_Facade::send_message(a2, &v26);
    v13 = (Outpop::Utility::Ref_Object *)v26;
    LOBYTE(v35) = 0;
    if ( v26 )
LABEL_42:
      Outpop::Utility::Ref_Object::release(v13);
  }
  else
  {
    v14 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v29 = v14;
    LOBYTE(v35) = 3;
    if ( v14 )
    {
      v15 = std::string::size(v27);
      Outpop::Utility::Binary_Stream::Binary_Stream(v14, v15 + 32);
      *(_DWORD *)v14 = &Outpop::Utility::Binary_Stream::`vftable';
      v16 = v14;
    }
    else
    {
      v16 = 0;
    }
    LOBYTE(v35) = 0;
    v28 = v16;
    if ( v16 )
      Outpop::Utility::Ref_Object::addref(v16);
    LOBYTE(v35) = 4;
    Outpop::Utility::Binary_Stream::set_reliable(v28, 1);
    v24 = v27;
    v26 = 21210;
    sub_10005605((int)&v26);
    sub_10006802((int)&a3);
    sub_10002842(v6);
    sub_10002842(v24);
    v17 = *(int **)(v7 + 4);
    if ( (unsigned int)v17 > *(_DWORD *)(v7 + 8) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v18 = *(int **)(v7 + 8);
      if ( *(_DWORD *)(v7 + 4) > (unsigned int)v18 )
        _invalid_parameter_noinfo();
      if ( v17 == v18 )
        break;
      if ( (unsigned int)v17 >= *(_DWORD *)(v7 + 8) )
        _invalid_parameter_noinfo();
      v19 = _itoa(*v17, byte_103B6678, 10);
      std::string::string(v34, v19);
      LOBYTE(v35) = 5;
      if ( (unsigned __int8)Outpop::P2P::Peer::has_peer(this, v34) )
      {
        Outpop::P2P::Peer::send_message(this, v34, &v28);
      }
      else
      {
        Outpop::P2P::Peer::connect_remote_peer(this, v34);
        if ( (unsigned int)v17 >= *(_DWORD *)(v7 + 8) )
          _invalid_parameter_noinfo();
        sub_1001A0F5(&v30, (int)v17);
      }
      LOBYTE(v35) = 4;
      std::string::~string(v34);
      if ( (unsigned int)v17 >= *(_DWORD *)(v7 + 8) )
        _invalid_parameter_noinfo();
      ++v17;
    }
    if ( v31 && (v32 - (int)v31) >> 2 )
    {
      v20 = (Outpop::Message::Message *)Outpop::Message::Message::operator new(0x6Cu);
      v29 = v20;
      LOBYTE(v35) = 6;
      if ( v20 )
      {
        if ( v31 )
          v21 = (v32 - (int)v31) >> 2;
        else
          v21 = 0;
        v22 = std::string::size(v27);
        Outpop::Message::Message::Message(v20, 1, 1, 0, 0, v22 + 4 * v21 + 64);
        *(_DWORD *)v20 = &Outpop::Message::Message::`vftable';
        v23 = v20;
      }
      else
      {
        v23 = 0;
      }
      LOBYTE(v35) = 4;
      v26 = (int)v23;
      if ( v23 )
        Outpop::Utility::Ref_Object::addref(v23);
      LOBYTE(v35) = 7;
      Outpop::Message::Message::set_protocol_catalog((Outpop::Message::Message *)v26, 0x15u);
      Outpop::Message::Message::set_protocol_type((Outpop::Message::Message *)v26, 0x521Eu);
      v25 = v27;
      sub_1001438F((int)&v30);
      sub_10002842(v25);
      Outpop::Message::Message_Facade::send_message(a2, &v26);
      LOBYTE(v35) = 4;
      if ( v26 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v26);
    }
    v13 = v28;
    LOBYTE(v35) = 0;
    if ( v28 )
      goto LABEL_42;
  }
  if ( v31 )
    operator delete(v31);
}
