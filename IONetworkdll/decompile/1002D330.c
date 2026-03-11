/*
 * func-name: ?send@Dgram_Channel@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1002d330
 * callers: none
 * callees: 0x10007400, 0x10009580, 0x1000ac30, 0x1000b220, 0x1000cc60, 0x10023270, 0x100279d0, 0x1002efa0, 0x10032340, 0x10033f30, 0x10038ad0, 0x1003ba70, 0x1003c480
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::send(struct in_addr *this, Outpop::Utility::Stream_Base **a2)
{
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // ebx
  u_short v9; // ax
  char *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Lock *v12; // esi
  int totallength; // eax
  Outpop::Utility::Ref_Object *v14; // esi
  const char *ptr; // eax
  Outpop::Utility::Ref_Object **v16; // ebx
  char v17; // bl
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // ebx
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Stream_Base *v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  volatile signed __int16 *p_s_w2; // ecx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  bool v34; // bl
  char sequence_id; // al
  Outpop::Utility::Stream_Base **v36; // ebx
  unsigned int v37; // ecx
  unsigned int v38; // ebx
  int v39; // ebx
  LONG ack_stream; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // esi
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // eax
  int v46; // eax
  Outpop::Utility::Logger *v47; // eax
  char v48; // al
  LONG v49; // eax
  Outpop::Utility::Logger *v50; // eax
  wchar_t *v51; // esi
  Outpop::Utility::Logger *v52; // eax
  Outpop::Utility::Logger *v53; // eax
  wchar_t *v54; // eax
  int v55; // eax
  Outpop::Utility::Logger *v56; // eax
  LONG v57; // eax
  Outpop::Utility::Logger *v58; // eax
  wchar_t *v59; // esi
  Outpop::Utility::Logger *v60; // eax
  Outpop::Utility::Logger *v61; // eax
  wchar_t *v62; // eax
  int v63; // eax
  Outpop::Utility::Logger *v64; // eax
  _DWORD *S_addr; // ecx
  wchar_t *tm; // [esp-8h] [ebp-D4h]
  DWORD CurrentProcessId; // [esp-4h] [ebp-D0h]
  DWORD CurrentThreadId; // [esp+0h] [ebp-CCh]
  DWORD v69; // [esp+4h] [ebp-C8h]
  struct in_addr v70[6]; // [esp+Ch] [ebp-C0h] BYREF
  Outpop::Utility::Ref_Object *v71; // [esp+24h] [ebp-A8h]
  Outpop::Utility::Lock *v72; // [esp+28h] [ebp-A4h]
  Outpop::Utility::Stream_Base *v73; // [esp+2Ch] [ebp-A0h] BYREF
  Outpop::Utility::Stream_Base *v74; // [esp+30h] [ebp-9Ch] BYREF
  Outpop::Utility::Ref_Object *v75; // [esp+34h] [ebp-98h] BYREF
  Outpop::Utility::Ref_Object *LastError; // [esp+38h] [ebp-94h] BYREF
  char v77[4]; // [esp+3Ch] [ebp-90h] BYREF
  unsigned int v78; // [esp+40h] [ebp-8Ch]
  unsigned int v79; // [esp+44h] [ebp-88h]
  int v80; // [esp+48h] [ebp-84h]
  char v81[4]; // [esp+4Ch] [ebp-80h] BYREF
  int v82; // [esp+50h] [ebp-7Ch]
  int v83; // [esp+54h] [ebp-78h]
  int v84; // [esp+58h] [ebp-74h]
  Outpop::Utility::Ref_Object *v85; // [esp+5Ch] [ebp-70h] BYREF
  Outpop::Utility::Lock *v86; // [esp+60h] [ebp-6Ch]
  Outpop::Utility::Stream_Base *v87; // [esp+64h] [ebp-68h] BYREF
  Outpop::Utility::Stream_Base *v88; // [esp+68h] [ebp-64h]
  ULONG v89; // [esp+6Ch] [ebp-60h]
  Outpop::Utility::Lock *v90; // [esp+70h] [ebp-5Ch]
  Outpop::Utility::Lock *v91; // [esp+74h] [ebp-58h]
  Outpop::Utility::Lock *v92; // [esp+78h] [ebp-54h]
  Outpop::Utility::Ref_Object *v93; // [esp+7Ch] [ebp-50h] BYREF
  Outpop::Utility::Stream_Base *v94; // [esp+80h] [ebp-4Ch] BYREF
  char v95[4]; // [esp+84h] [ebp-48h] BYREF
  int v96; // [esp+88h] [ebp-44h]
  int v97; // [esp+8Ch] [ebp-40h]
  int v98; // [esp+90h] [ebp-3Ch]
  _DWORD v99[4]; // [esp+94h] [ebp-38h] BYREF
  _DWORD v100[4]; // [esp+A4h] [ebp-28h] BYREF
  int v101[3]; // [esp+B4h] [ebp-18h] BYREF
  int v102; // [esp+C8h] [ebp-4h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v86 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v86);
    v102 = 0;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v70[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, v70[0].S_un.S_addr);
    v9 = ntohs(this[23].S_un.S_un_w.s_w2);
    v70[0] = this[24];
    v74 = (Outpop::Utility::Stream_Base *)v9;
    v10 = inet_ntoa(v70[0]);
    sub_10007400(
      0xFFFF - v8,
      &log_buffer[v8],
      L"chaannel  %d  Dgram_Channel send,ip is  %S, port is %d",
      this[28].S_un.S_addr,
      v10,
      (unsigned __int16)v74);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v70[0].S_un.S_addr = (ULONG)log_buffer;
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    v102 = -1;
    Outpop::Utility::Lock::unlock(v86);
  }
  v12 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v72 = v12;
  v102 = 1;
  if ( v12 )
  {
    totallength = Outpop::Utility::Stream_Base::get_totallength(*a2);
    Outpop::Utility::Binary_Stream::Binary_Stream(v12, totallength + 30);
    *(_DWORD *)v12 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v12 = 0;
  }
  v71 = v12;
  v102 = -1;
  v73 = v12;
  if ( v12 )
    Outpop::Utility::Ref_Object::addref(v12);
  v102 = 2;
  Outpop::Utility::Binary_Stream::set_all_protepoty(v12, a2);
  v14 = *a2;
  v88 = *a2;
  if ( v88 )
    Outpop::Utility::Ref_Object::addref(v14);
  LOBYTE(v102) = 3;
  while ( v14 )
  {
    Outpop::Utility::Stream_Base::get_readable(v14);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v14);
    Outpop::Utility::Stream_Base::write(v72, ptr, v70[1].S_un.S_addr);
    v16 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v14, &LastError);
    LOBYTE(v102) = 4;
    Outpop::Utility::Ref_Object::release(v14);
    v14 = *v16;
    v88 = *v16;
    if ( v88 )
      Outpop::Utility::Ref_Object::addref(v14);
    LOBYTE(v102) = 3;
    if ( LastError )
      Outpop::Utility::Ref_Object::release(LastError);
  }
  LOBYTE(v102) = 2;
  if ( !this[50].S_un.S_un_b.s_b1
    || (Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)&this[33]),
        v17 = Outpop::IONetwork::Security_Processer::process(&v73, this[45].S_un.S_addr, this[50].S_un.S_un_b.s_b2),
        Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)&this[33]),
        v17) )
  {
    v26 = v71;
    v27 = Outpop::Utility::Binary_Stream::sequence(v71);
    if ( v27 )
    {
      if ( v27 != 1 )
        goto LABEL_48;
      v28 = Outpop::Utility::Binary_Stream::priority(v71) - 1;
      if ( v28 )
      {
        v29 = v28 - 2;
        if ( v29 )
        {
          if ( v29 != 2 )
            goto LABEL_48;
          p_s_w2 = (volatile signed __int16 *)&this[50].S_un.S_un_w.s_w2;
        }
        else
        {
          p_s_w2 = (volatile signed __int16 *)&this[51];
        }
      }
      else
      {
        p_s_w2 = (volatile signed __int16 *)&this[51].S_un.S_un_w.s_w2;
      }
    }
    else
    {
      v31 = Outpop::Utility::Binary_Stream::priority(v71) - 1;
      if ( v31 )
      {
        v32 = v31 - 2;
        if ( v32 )
        {
          if ( v32 != 2 )
            goto LABEL_48;
          p_s_w2 = (volatile signed __int16 *)&this[52];
        }
        else
        {
          p_s_w2 = (volatile signed __int16 *)&this[52].S_un.S_un_w.s_w2;
        }
      }
      else
      {
        p_s_w2 = (volatile signed __int16 *)&this[53];
      }
    }
    Outpop::Utility::Binary_Stream::set_sequence_id(v71, _InterlockedIncrement16(p_s_w2));
LABEL_48:
    v72 = (Outpop::Utility::Lock *)v70;
    v70[0].S_un.S_addr = (ULONG)v71;
    if ( v71 )
      Outpop::Utility::Ref_Object::addref(v71);
    LOBYTE(v102) = 2;
    Outpop::IONetwork::Comminute_Container::conminute_stream(
      (volatile signed __int16 *)&this[55],
      (Outpop::Utility::Stream_Base *)v70[0].S_un.S_addr);
    v33 = (_DWORD *)Outpop::Utility::Binary_Stream::cont(v26, &v93);
    LOBYTE(v102) = 7;
    v34 = *v33 != 0;
    LOBYTE(v102) = 2;
    if ( v93 )
      Outpop::Utility::Ref_Object::release(v93);
    if ( v34 )
    {
      v78 = 0;
      v79 = 0;
      v80 = 0;
      LOBYTE(v102) = 8;
      v74 = v26;
      if ( v26 )
        Outpop::Utility::Ref_Object::addref(v26);
      LOBYTE(v102) = 9;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( Outpop::Utility::Binary_Stream::get_reliable(v71) )
            Outpop::Utility::Binary_Stream::set_reliable_id(
              v26,
              _InterlockedIncrement16((volatile signed __int16 *)&this[48]));
          v70[0].S_un.S_addr = Outpop::Utility::Binary_Stream::get_reliable_id(v26);
          sequence_id = Outpop::Utility::Binary_Stream::get_sequence_id(v26);
          Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(
            &v87,
            &v74,
            0,
            this[50].S_un.S_un_b.s_b2,
            0,
            sequence_id,
            v70[0].S_un.S_un_b.s_b1);
          LOBYTE(v102) = 9;
          if ( v87 )
            Outpop::Utility::Ref_Object::release(v87);
          v75 = v26;
          Outpop::Utility::Ref_Object::addref(v26);
          LOBYTE(v102) = 11;
          v36 = (Outpop::Utility::Stream_Base **)Outpop::Utility::Binary_Stream::cont(v26, &v85);
          LOBYTE(v102) = 12;
          Outpop::Utility::Ref_Object::release(v26);
          v26 = *v36;
          v74 = *v36;
          if ( v74 )
            Outpop::Utility::Ref_Object::addref(v26);
          LOBYTE(v102) = 11;
          if ( v85 )
            Outpop::Utility::Ref_Object::release(v85);
          v72 = (Outpop::Utility::Lock *)v70;
          LOBYTE(v102) = 11;
          Outpop::Utility::Binary_Stream::cont(v75, 0);
          v37 = v78;
          if ( !v78 )
            goto LABEL_68;
          if ( (int)(v79 - v78) >> 2 >= (unsigned int)((int)(v80 - v78) >> 2) )
            break;
          LOBYTE(v89) = 0;
          v70[0].S_un.S_addr = v89;
          v38 = v79;
          sub_1003C480(v79, 1);
          v79 = v38 + 4;
LABEL_71:
          LOBYTE(v102) = 9;
          if ( v75 )
            Outpop::Utility::Ref_Object::release(v75);
          if ( !v26 )
            goto LABEL_74;
        }
        v37 = v78;
LABEL_68:
        v39 = v79;
        if ( v37 > v79 )
          invalid_parameter_noinfo();
        sub_1000B220((int)v77, v101, (int)&v75, (int)v77, v39);
        goto LABEL_71;
      }
LABEL_74:
      v96 = 0;
      v97 = 0;
      v98 = 0;
      LOBYTE(v102) = 14;
      sub_10033F30(v77, v95);
      ack_stream = Outpop::IONetwork::Dgram_Channel::get_ack_stream(v95);
      if ( ack_stream )
      {
        InterlockedExchangeAdd((volatile LONG *)&this[174], ack_stream);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
        {
          v90 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v90);
          LOBYTE(v102) = 15;
          v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v42 = Outpop::Utility::Logger::get_log_buffer(v41);
          v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v70[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v43);
          v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v45 = Outpop::Utility::Logger::make_dt(v44);
          v46 = sub_10007400(0xFFFFu, v42, L"\nLOGINFO %s:%s Message:", v45);
          sub_10007400(
            0xFFFF - v46,
            &v42[v46],
            L"Dgram_Channel::send(Smart_Ptr<Binary_Stream>& pstream) reliable_container  send  ack  pakcet 0,channel id is %d, num is:%d",
            this[28].S_un.S_addr,
            this[174].S_un.S_addr);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v42);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v70[0].S_un.S_addr = (ULONG)v42;
            v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v47);
          }
          LOBYTE(v102) = 14;
          Outpop::Utility::Lock::unlock(v90);
        }
      }
      Outpop::IONetwork::Dgram_Channel::send_unite_quence(v95);
      LOBYTE(v102) = 8;
      sub_1003BA70();
      LOBYTE(v102) = 2;
    }
    else
    {
      if ( Outpop::Utility::Binary_Stream::get_reliable(v26) )
        Outpop::Utility::Binary_Stream::set_reliable_id(
          v26,
          _InterlockedIncrement16((volatile signed __int16 *)&this[48]));
      v70[0].S_un.S_addr = Outpop::Utility::Binary_Stream::get_reliable_id(v26);
      v48 = Outpop::Utility::Binary_Stream::get_sequence_id(v26);
      Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(
        &v94,
        &v73,
        0,
        this[50].S_un.S_un_b.s_b2,
        0,
        v48,
        v70[0].S_un.S_un_b.s_b1);
      LOBYTE(v102) = 2;
      if ( v94 )
        Outpop::Utility::Ref_Object::release(v94);
      if ( Outpop::Utility::Binary_Stream::get_reliable(v26) )
      {
        memset(&v100[1], 0, 12);
        v82 = 0;
        v83 = 0;
        v84 = 0;
        LOBYTE(v102) = 18;
        sub_1000AC30((int)&v73, v100);
        sub_10033F30(v100, v81);
        v49 = Outpop::IONetwork::Dgram_Channel::get_ack_stream(v81);
        if ( v49
          && !(InterlockedExchangeAdd((volatile LONG *)&this[174], v49) % 100)
          && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
        {
          v92 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v92);
          LOBYTE(v102) = 19;
          v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v51 = Outpop::Utility::Logger::get_log_buffer(v50);
          v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v70[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v52);
          v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v54 = Outpop::Utility::Logger::make_dt(v53);
          v55 = sub_10007400(0xFFFFu, v51, L"\nLOGINFO %s:%s Message:", v54);
          sub_10007400(
            0xFFFF - v55,
            &v51[v55],
            L"Dgram_Channel::send(Smart_Ptr<Binary_Stream>& pstream) reliable_container  send  ack  pakcet 1,channel id is %d,num is:%d",
            this[28].S_un.S_addr,
            this[174].S_un.S_addr);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v51);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v70[0].S_un.S_addr = (ULONG)v51;
            v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v56);
          }
          LOBYTE(v102) = 18;
          Outpop::Utility::Lock::unlock(v92);
        }
        if ( v82 && (v83 - v82) >> 2 )
          Outpop::IONetwork::Dgram_Channel::send_unite_quence(v81);
        LOBYTE(v102) = 17;
        sub_1003BA70();
        LOBYTE(v102) = 2;
      }
      else
      {
        memset(&v99[1], 0, 12);
        LOBYTE(v102) = 20;
        sub_1000AC30((int)&v73, v99);
        v57 = Outpop::IONetwork::Dgram_Channel::get_ack_stream(v99);
        if ( v57 )
        {
          if ( !(InterlockedExchangeAdd((volatile LONG *)&this[174], v57) % 100)
            && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
          {
            v72 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v72);
            LOBYTE(v102) = 21;
            v58 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v59 = Outpop::Utility::Logger::get_log_buffer(v58);
            v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v70[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v60);
            v61 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v62 = Outpop::Utility::Logger::make_dt(v61);
            v63 = sub_10007400(0xFFFFu, v59, L"\nLOGINFO %s:%s Message:", v62);
            sub_10007400(
              0xFFFF - v63,
              &v59[v63],
              L"Dgram_Channel::send(Smart_Ptr<Binary_Stream>& pstream) reliable_container  send  ack  pakcet 2,channel id is %d,num is:%d",
              this[28].S_un.S_addr,
              this[174].S_un.S_addr);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v59);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v70[0].S_un.S_addr = (ULONG)v59;
              v64 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v64);
            }
            LOBYTE(v102) = 20;
            Outpop::Utility::Lock::unlock(v72);
          }
          Outpop::IONetwork::Dgram_Channel::send_unite_quence(v99);
        }
        else
        {
          S_addr = (_DWORD *)this[46].S_un.S_addr;
          if ( S_addr )
          {
            Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(S_addr, &v73, (int)&this[20], 0);
          }
          else if ( this[47].S_un.S_addr )
          {
            Outpop::IONetwork::Dgram_Connector::asynch_send_to(&v73, &this[20], 0);
          }
        }
        LOBYTE(v102) = 2;
      }
    }
    sub_1003BA70();
    goto LABEL_120;
  }
  LastError = (Outpop::Utility::Ref_Object *)GetLastError();
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v91 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v91);
    LOBYTE(v102) = 5;
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v18);
    v20 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v69 = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v21);
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v23 = Outpop::Utility::Logger::make_dt(v22);
    v24 = sub_10007400(
            0xFFFF - v20,
            &v19[v20],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v23,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            v69,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
            141);
    sub_10007400(0xFFFF - (v24 + v20), &v19[v24 + v20], L"Dgram_Channel::send    process    Error:%d", LastError);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v19);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v70[0].S_un.S_addr = (ULONG)v19;
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v25);
    }
    LOBYTE(v102) = 2;
    Outpop::Utility::Lock::unlock(v91);
  }
  (*(void (__thiscall **)(struct in_addr *))(this->S_un.S_addr + 24))(this);
LABEL_120:
  v102 = -1;
  if ( v71 )
    Outpop::Utility::Ref_Object::release(v71);
}
