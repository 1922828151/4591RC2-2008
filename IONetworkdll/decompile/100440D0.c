/*
 * func-name: ?handle_read_stream@P2P_Channel@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x100440d0
 * callers: 0x1004c0d0
 * callees: 0x100024e0, 0x10003930, 0x10007400, 0x1000ac30, 0x10023520, 0x1002b5c0, 0x1003ba70, 0x1003c7d0, 0x100447a0, 0x10044a00, 0x10044ef0, 0x10046860, 0x1004f112
 */

void __thiscall Outpop::IONetwork::P2P_Channel::handle_read_stream(
        Outpop::IONetwork::P2P_Channel *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // esi
  bool v4; // al
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // ebx
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  _DWORD *v13; // eax
  char *v14; // esi
  bool v15; // al
  Outpop::Utility::Lock *v16; // ebx
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Ref_Object **v25; // ebx
  bool v26; // cf
  Outpop::Utility::Ref_Object *v27; // ebx
  Outpop::Utility::Ref_Object **v28; // ebx
  unsigned int v29; // eax
  Outpop::Utility::Ref_Object **v30; // esi
  int *v31; // esi
  wchar_t *tm; // [esp-18h] [ebp-84h]
  wchar_t *v33; // [esp-18h] [ebp-84h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-80h]
  DWORD v35; // [esp-14h] [ebp-80h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-7Ch]
  DWORD v37; // [esp-10h] [ebp-7Ch]
  DWORD LastError; // [esp-Ch] [ebp-78h]
  DWORD v39; // [esp-Ch] [ebp-78h]
  Outpop::Utility::Lock *v40; // [esp+10h] [ebp-5Ch] BYREF
  Outpop::Utility::Ref_Object *v41; // [esp+14h] [ebp-58h] BYREF
  Outpop::Utility::Lock *v42; // [esp+18h] [ebp-54h] BYREF
  int v43; // [esp+1Ch] [ebp-50h]
  int v44; // [esp+20h] [ebp-4Ch] BYREF
  Outpop::Utility::Ref_Object **v45; // [esp+24h] [ebp-48h]
  unsigned int v46; // [esp+28h] [ebp-44h]
  int v47; // [esp+2Ch] [ebp-40h]
  int v48; // [esp+30h] [ebp-3Ch] BYREF
  int v49; // [esp+34h] [ebp-38h]
  int v50; // [esp+38h] [ebp-34h]
  int v51; // [esp+3Ch] [ebp-30h]
  char pExceptionObject[8]; // [esp+44h] [ebp-28h] BYREF
  int v53; // [esp+4Ch] [ebp-20h] BYREF
  int v54; // [esp+50h] [ebp-1Ch]
  int v55; // [esp+54h] [ebp-18h]
  int v56; // [esp+58h] [ebp-14h]
  int v57; // [esp+68h] [ebp-4h]

  if ( !*((_BYTE *)this + 612) )
  {
    v3 = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
    v42 = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
    v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2P_Channel *)((char *)this + 132));
    v43 = v4 - 1;
    v57 = 0;
    if ( !v4 )
    {
      v57 = -1;
      return;
    }
    if ( !*((_BYTE *)this + 612) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v40 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v40);
        LOBYTE(v57) = 1;
        v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
        v7 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v8);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v9);
        v11 = sub_10007400(
                0xFFFF - v7,
                &log_buffer[v7],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
                361);
        sub_10007400(
          0xFFFF - (v11 + v7),
          &log_buffer[v11 + v7],
          L"channeli  is  connect ,id  is: %d",
          *((_DWORD *)this + 28));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v12);
        }
        LOBYTE(v57) = 0;
        Outpop::Utility::Lock::unlock(v40);
        v3 = v42;
      }
      *((_BYTE *)this + 612) = 1;
    }
    v57 = -1;
    v43 = -1;
    Outpop::Utility::Thread_Mutex::release(v3);
  }
  sub_1002B5C0((int)a2, &v41);
  v57 = 2;
  v13 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(&v42);
  LOBYTE(v57) = 3;
  *((_DWORD *)this + 151) = *v13;
  *((_DWORD *)this + 152) = v13[1];
  LOBYTE(v57) = 2;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v42);
  v14 = (char *)a2 + 60;
  if ( Outpop::IONetwork::INET_Addr::operator==((_DWORD *)this + 20, (int)a2 + 60) )
    goto LABEL_19;
  v42 = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
  v43 = 0;
  v15 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2P_Channel *)((char *)this + 132));
  v43 = v15 - 1;
  LOBYTE(v57) = 4;
  if ( v15 )
  {
    if ( !Outpop::IONetwork::INET_Addr::operator==((_DWORD *)this + 20, (int)v14) )
      Outpop::IONetwork::INET_Addr::operator=((char *)this + 80, (int)v14);
    LOBYTE(v57) = 2;
    v43 = -1;
    Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::P2P_Channel *)((char *)this + 132));
LABEL_19:
    v45 = 0;
    v46 = 0;
    v47 = 0;
    LOBYTE(v57) = 5;
    if ( !(unsigned __int8)Outpop::IONetwork::P2P_Channel::parse_dgram_stream(&v44, &v41) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v16 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v42 = v16;
        Outpop::Utility::Lock::lock(v16);
        LOBYTE(v57) = 6;
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v18 = Outpop::Utility::Logger::get_log_buffer(v17);
        v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
        v39 = GetLastError();
        v37 = GetCurrentThreadId();
        v35 = GetCurrentProcessId();
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v33 = Outpop::Utility::Logger::make_tm(v20);
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v22 = Outpop::Utility::Logger::make_dt(v21);
        v23 = sub_10007400(
                0xFFFF - v19,
                &v18[v19],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v22,
                v33,
                v35,
                v37,
                v39,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
                388);
        sub_10007400(
          0xFFFF - (v23 + v19),
          &v18[v23 + v19],
          L"Dgram_Channel::handle_read_stream(Asynch_IO_Result*  io_result)  parse_dgram_stream  Error!");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v18);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v24);
        }
        LOBYTE(v57) = 5;
        Outpop::Utility::Lock::unlock(v16);
      }
      std::string::string(&v48, "parse_dgram_stream failed!");
      LOBYTE(v57) = 7;
      Outpop::Utility::logic_error::logic_error(&v53, &v48, 0);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlogic_error_Utility_Outpop__);
    }
    v25 = v45;
    v26 = (unsigned int)v45 < v46;
    if ( (unsigned int)v45 > v46 )
    {
      invalid_parameter_noinfo();
      v26 = (unsigned int)v25 < v46;
    }
    if ( !v26 )
      invalid_parameter_noinfo();
    v27 = *v25;
    v42 = v27;
    if ( v27 )
      Outpop::Utility::Ref_Object::addref(v27);
    LOBYTE(v57) = 8;
    if ( Outpop::Utility::Binary_Stream::get_packet_type(v27) == 1 )
    {
      Outpop::IONetwork::P2P_Channel::process_system_packet(&v44);
    }
    else
    {
      if ( Outpop::Utility::Binary_Stream::get_reliable(v27) )
      {
        sub_10046860((char *)this + 272, &v40, &v44);
        LOBYTE(v57) = 9;
        if ( v40 )
          Outpop::IONetwork::P2P_Channel::send_system_packet(&v40, 5);
        LOBYTE(v57) = 8;
        if ( v40 )
          Outpop::Utility::Ref_Object::release(v40);
      }
      if ( v45 && (int)(v46 - (_DWORD)v45) >> 2 )
        Outpop::IONetwork::Comminute_Container::combine_stream(
          (char *)this + 204,
          (Outpop::Utility::Thread_Mutex *)&v44);
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      LOBYTE(v57) = 11;
      v28 = v45;
      v29 = v46;
      if ( (unsigned int)v45 > v46 )
      {
        invalid_parameter_noinfo();
        v29 = v46;
      }
      while ( 1 )
      {
        v30 = (Outpop::Utility::Ref_Object **)v29;
        if ( (unsigned int)v45 > v29 )
        {
          invalid_parameter_noinfo();
          v29 = v46;
        }
        if ( v28 == v30 )
          break;
        if ( (unsigned int)v28 >= v29 )
          invalid_parameter_noinfo();
        if ( Outpop::Utility::Binary_Stream::sequence(*v28) == 2 )
        {
          if ( (unsigned int)v28 >= v46 )
            invalid_parameter_noinfo();
          v31 = &v53;
        }
        else
        {
          if ( (unsigned int)v28 >= v46 )
            invalid_parameter_noinfo();
          v31 = &v48;
        }
        sub_1000AC30((int)v28, v31);
        v29 = v46;
        if ( (unsigned int)v28 >= v46 )
        {
          invalid_parameter_noinfo();
          v29 = v46;
        }
        ++v28;
      }
      if ( v54 )
      {
        if ( (v55 - v54) >> 2 )
        {
          if ( *((_DWORD *)this + 29) )
          {
            v40 = this;
            Outpop::Utility::Ref_Object::addref(this);
            LOBYTE(v57) = 12;
            (*(void (__thiscall **)(_DWORD, int *, Outpop::Utility::Lock **))(**((_DWORD **)this + 29) + 4))(
              *((_DWORD *)this + 29),
              &v53,
              &v40);
            LOBYTE(v57) = 11;
            if ( v40 )
              Outpop::Utility::Ref_Object::release(v40);
          }
        }
      }
      if ( v49 )
      {
        if ( (v50 - v49) >> 2 )
        {
          Outpop::IONetwork::Sequence_Container::push_back_stream((int)this + 428, (int)&v48);
          if ( *((_BYTE *)this + 200) )
          {
            if ( *((_DWORD *)this + 29) )
            {
              *((_BYTE *)this + 200) = 0;
              v40 = this;
              Outpop::Utility::Ref_Object::addref(this);
              LOBYTE(v57) = 13;
              (*(void (__thiscall **)(_DWORD, Outpop::Utility::Lock **))(**((_DWORD **)this + 29) + 8))(
                *((_DWORD *)this + 29),
                &v40);
              LOBYTE(v57) = 11;
              if ( v40 )
                Outpop::Utility::Ref_Object::release(v40);
            }
          }
        }
      }
      LOBYTE(v57) = 10;
      sub_1003BA70(&v48);
      LOBYTE(v57) = 8;
      sub_1003BA70(&v53);
      v27 = v42;
    }
    LOBYTE(v57) = 5;
    if ( v27 )
      Outpop::Utility::Ref_Object::release(v27);
    LOBYTE(v57) = 2;
    sub_1003BA70(&v44);
  }
  v57 = -1;
  if ( v41 )
    Outpop::Utility::Ref_Object::release(v41);
}
