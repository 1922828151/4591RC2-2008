/*
 * func-name: ?send@P2P_Channel@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10042eb0
 * callers: none
 * callees: 0x10009580, 0x1000ac30, 0x1000b220, 0x10023270, 0x1003ba70, 0x1003c480, 0x100434b0, 0x10047f00, 0x1004bb00, 0x1004e870
 */

void __thiscall Outpop::IONetwork::P2P_Channel::send(volatile signed __int16 *this, Outpop::Utility::Stream_Base **a2)
{
  volatile signed __int16 *v2; // ebx
  Outpop::Utility::Stream_Base *v3; // edi
  int totallength; // eax
  Outpop::Utility::Stream_Base *v5; // esi
  const char *ptr; // eax
  Outpop::Utility::Stream_Base **v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  volatile signed __int16 *v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  Outpop::Utility::Binary_Stream *v15; // esi
  char sequence_id; // al
  Outpop::Utility::Binary_Stream **v17; // ebx
  Outpop::Utility::Ref_Object **v18; // ebx
  Outpop::Utility::Ref_Object **v19; // esi
  Outpop::Utility::Ref_Object **v20; // ebx
  Outpop::Utility::Ref_Object **v21; // esi
  Outpop::Utility::Ref_Object **v22; // ebx
  char v23; // al
  char v24[8]; // [esp-14h] [ebp-90h] BYREF
  int v25; // [esp-Ch] [ebp-88h]
  int v26; // [esp-8h] [ebp-84h]
  int v27; // [esp-4h] [ebp-80h]
  int v28; // [esp+0h] [ebp-7Ch]
  int v29; // [esp+4h] [ebp-78h]
  Outpop::Utility::Stream_Base *v30; // [esp+8h] [ebp-74h]
  Outpop::Utility::Stream_Base *v31[5]; // [esp+Ch] [ebp-70h] BYREF
  int v32; // [esp+20h] [ebp-5Ch]
  Outpop::Utility::Ref_Object *v33; // [esp+24h] [ebp-58h] BYREF
  volatile signed __int16 *v34; // [esp+28h] [ebp-54h]
  Outpop::Utility::Stream_Base *v35; // [esp+2Ch] [ebp-50h] BYREF
  Outpop::Utility::Stream_Base *v36; // [esp+30h] [ebp-4Ch] BYREF
  Outpop::Utility::Stream_Base *v37; // [esp+34h] [ebp-48h] BYREF
  Outpop::Utility::Ref_Object *v38; // [esp+38h] [ebp-44h] BYREF
  Outpop::Utility::Stream_Base *v39; // [esp+3Ch] [ebp-40h]
  Outpop::Utility::Stream_Base *v40; // [esp+40h] [ebp-3Ch] BYREF
  int v41; // [esp+44h] [ebp-38h] BYREF
  int v42; // [esp+4Ch] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object **v43; // [esp+50h] [ebp-2Ch]
  Outpop::Utility::Ref_Object **v44; // [esp+54h] [ebp-28h]
  int v45; // [esp+58h] [ebp-24h]
  int v46; // [esp+5Ch] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object **v47; // [esp+60h] [ebp-1Ch]
  Outpop::Utility::Ref_Object **v48; // [esp+64h] [ebp-18h]
  int v49; // [esp+68h] [ebp-14h]
  int v50; // [esp+78h] [ebp-4h]

  v2 = this;
  v34 = this;
  v3 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v40 = v3;
  v50 = 0;
  if ( v3 )
  {
    totallength = Outpop::Utility::Stream_Base::get_totallength(*a2);
    Outpop::Utility::Binary_Stream::Binary_Stream(v3, totallength + 30);
    *(_DWORD *)v3 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v3 = 0;
  }
  v50 = -1;
  v35 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v50 = 1;
  Outpop::Utility::Binary_Stream::set_all_protepoty(v3, a2);
  v5 = *a2;
  v36 = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  LOBYTE(v50) = 2;
  if ( v5 )
  {
    do
    {
      Outpop::Utility::Stream_Base::get_readable(v5);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(v5);
      Outpop::Utility::Stream_Base::write(v3, ptr);
      v7 = (Outpop::Utility::Stream_Base **)Outpop::Utility::Binary_Stream::cont(v5, &v33);
      LOBYTE(v50) = 3;
      Outpop::Utility::Ref_Object::release(v5);
      v5 = *v7;
      v36 = *v7;
      if ( v36 )
        Outpop::Utility::Ref_Object::addref(v5);
      LOBYTE(v50) = 2;
      if ( v33 )
        Outpop::Utility::Ref_Object::release(v33);
    }
    while ( v5 );
    v2 = v34;
  }
  LOBYTE(v50) = 1;
  v8 = Outpop::Utility::Binary_Stream::sequence(v3);
  if ( v8 )
  {
    if ( v8 != 1 )
      goto LABEL_30;
    v9 = Outpop::Utility::Binary_Stream::priority(v3) - 1;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        if ( v10 != 2 )
          goto LABEL_30;
        v11 = v2 + 93;
      }
      else
      {
        v11 = v2 + 94;
      }
    }
    else
    {
      v11 = v2 + 95;
    }
  }
  else
  {
    v12 = Outpop::Utility::Binary_Stream::priority(v3) - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 2 )
          goto LABEL_30;
        v11 = v2 + 96;
      }
      else
      {
        v11 = v2 + 97;
      }
    }
    else
    {
      v11 = v2 + 98;
    }
  }
  Outpop::Utility::Binary_Stream::set_sequence_id(v3, _InterlockedIncrement16(v11));
LABEL_30:
  v40 = (Outpop::Utility::Stream_Base *)v31;
  v31[0] = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  LOBYTE(v50) = 1;
  Outpop::IONetwork::Comminute_Container::conminute_stream(v2 + 102, v31[0]);
  v14 = (_DWORD *)Outpop::Utility::Binary_Stream::cont(v3, &v36);
  LOBYTE(v50) = 5;
  HIBYTE(v32) = *v14 != 0;
  LOBYTE(v50) = 1;
  if ( v36 )
    Outpop::Utility::Ref_Object::release(v36);
  if ( HIBYTE(v32) )
  {
    v43 = 0;
    v44 = 0;
    v45 = 0;
    LOBYTE(v50) = 6;
    v15 = v3;
    v36 = v3;
    if ( v3 )
      Outpop::Utility::Ref_Object::addref(v3);
    LOBYTE(v50) = 7;
    if ( v3 )
    {
      do
      {
        if ( Outpop::Utility::Binary_Stream::get_reliable(v3) )
          Outpop::Utility::Binary_Stream::set_reliable_id(v15, _InterlockedIncrement16(v2 + 92));
        v31[0] = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::get_reliable_id(v15);
        sequence_id = Outpop::Utility::Binary_Stream::get_sequence_id(v15);
        Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&v37, &v36, 0, 1, 0, sequence_id, (char)v31[0]);
        LOBYTE(v50) = 7;
        if ( v37 )
          Outpop::Utility::Ref_Object::release(v37);
        v33 = v15;
        if ( v15 )
          Outpop::Utility::Ref_Object::addref(v15);
        LOBYTE(v50) = 9;
        v17 = (Outpop::Utility::Binary_Stream **)Outpop::Utility::Binary_Stream::cont(v15, &v38);
        LOBYTE(v50) = 10;
        if ( v15 )
          Outpop::Utility::Ref_Object::release(v15);
        v15 = *v17;
        v36 = *v17;
        if ( v36 )
          Outpop::Utility::Ref_Object::addref(v15);
        LOBYTE(v50) = 9;
        if ( v38 )
          Outpop::Utility::Ref_Object::release(v38);
        v40 = (Outpop::Utility::Stream_Base *)v31;
        LOBYTE(v50) = 9;
        Outpop::Utility::Binary_Stream::cont(v33, 0);
        if ( v43 && v44 - v43 < (unsigned int)((v45 - (int)v43) >> 2) )
        {
          LOBYTE(v39) = 0;
          v31[0] = v39;
          v30 = v40;
          v18 = v44;
          sub_1003C480(v44, 1);
          v44 = v18 + 1;
        }
        else
        {
          v40 = (Outpop::Utility::Stream_Base *)v44;
          if ( v43 > v44 )
            invalid_parameter_noinfo();
          sub_1000B220((int)&v42, &v41, (int)&v33, (int)&v42, (int)v40);
        }
        LOBYTE(v50) = 7;
        if ( v33 )
          Outpop::Utility::Ref_Object::release(v33);
        v2 = v34;
      }
      while ( v15 );
    }
    LOBYTE(v50) = 6;
    if ( v15 )
      Outpop::Utility::Ref_Object::release(v15);
    v47 = 0;
    v48 = 0;
    v49 = 0;
    LOBYTE(v50) = 12;
    sub_10047F00(&v42, &v46);
    Outpop::IONetwork::P2P_Channel::send_unite_quence(&v46);
    LOBYTE(v50) = 6;
    v19 = v47;
    if ( v47 )
    {
      v20 = v48;
      if ( v47 != v48 )
      {
        do
        {
          if ( *v19 )
            Outpop::Utility::Ref_Object::release(*v19);
          ++v19;
        }
        while ( v19 != v20 );
        v19 = v47;
      }
      operator delete(v19);
    }
    v47 = 0;
    v48 = 0;
    v49 = 0;
    LOBYTE(v50) = 1;
    v21 = v43;
    if ( v43 )
    {
      v22 = v44;
      if ( v43 != v44 )
      {
        do
        {
          if ( *v21 )
            Outpop::Utility::Ref_Object::release(*v21);
          ++v21;
        }
        while ( v21 != v22 );
        v21 = v43;
      }
      operator delete(v21);
    }
    v43 = 0;
    v44 = 0;
    v45 = 0;
  }
  else
  {
    if ( Outpop::Utility::Binary_Stream::get_reliable(v3) )
      Outpop::Utility::Binary_Stream::set_reliable_id(v3, _InterlockedIncrement16(v2 + 92));
    v31[0] = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::get_reliable_id(v3);
    v23 = Outpop::Utility::Binary_Stream::get_sequence_id(v3);
    Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&v40, &v35, 0, 1, 0, v23, (char)v31[0]);
    LOBYTE(v50) = 1;
    if ( v40 )
      Outpop::Utility::Ref_Object::release(v40);
    if ( Outpop::Utility::Binary_Stream::get_reliable(v3) )
    {
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      LOBYTE(v50) = 15;
      sub_1000AC30((int)&v35, &v42);
      sub_10047F00(&v42, &v46);
      if ( v47 && v48 - v47 )
        Outpop::IONetwork::P2P_Channel::send_unite_quence(&v46);
      LOBYTE(v50) = 14;
      sub_1003BA70(&v46);
      LOBYTE(v50) = 1;
      sub_1003BA70(&v42);
    }
    else
    {
      v31[0] = 0;
      v30 = 0;
      v40 = (Outpop::Utility::Stream_Base *)v24;
      std::string::string(v2 + 318);
      LOBYTE(v50) = 1;
      Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
        &v35,
        v2 + 40,
        v24[0],
        v24[4],
        v25,
        v26,
        v27,
        v28,
        v29,
        (char)v30,
        v31[0]);
    }
  }
  v50 = -1;
  if ( v35 )
    Outpop::Utility::Ref_Object::release(v35);
}
