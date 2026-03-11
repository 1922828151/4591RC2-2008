/*
 * func-name: ?handle_read_stream@Channel_Manager@Message@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@AAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x100119c0
 * callers: none
 * callees: 0x10004250, 0x10004270, 0x100042a0, 0x10004330, 0x10004540, 0x1001f040, 0x10020a80, 0x10023490
 */

void __thiscall Outpop::Message::Channel_Manager::handle_read_stream(void *this, int a2, _DWORD *a3)
{
  int v3; // edi
  Outpop::Message::Message **v4; // esi
  int v5; // eax
  Outpop::Message::Message **v6; // esi
  Outpop::Message::Message *v7; // ecx
  Outpop::Utility::Ref_Object **act_obj; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // edi
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // esi
  unsigned __int16 type; // ax
  Outpop::Utility::Logger *v17; // eax
  int v18; // eax
  int v19; // [esp-24h] [ebp-8Ch]
  int v20; // [esp-20h] [ebp-88h]
  int v21; // [esp-1Ch] [ebp-84h]
  wchar_t *tm; // [esp-18h] [ebp-80h]
  int v23; // [esp-18h] [ebp-80h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-7Ch]
  unsigned int v25; // [esp-14h] [ebp-7Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-78h]
  unsigned int multi_id; // [esp-10h] [ebp-78h]
  DWORD LastError; // [esp-Ch] [ebp-74h]
  unsigned int token; // [esp-Ch] [ebp-74h]
  int message_type; // [esp-8h] [ebp-70h]
  int readable; // [esp-4h] [ebp-6Ch]
  int v32; // [esp+0h] [ebp-68h] BYREF
  int v33; // [esp+10h] [ebp-58h]
  Outpop::Message::Message **i; // [esp+14h] [ebp-54h]
  int v35; // [esp+1Ch] [ebp-4Ch]
  void *v36; // [esp+20h] [ebp-48h]
  Outpop::Utility::Lock *v37; // [esp+24h] [ebp-44h]
  Outpop::Message::Message *v38; // [esp+28h] [ebp-40h]
  int v39; // [esp+2Ch] [ebp-3Ch]
  int v40; // [esp+30h] [ebp-38h]
  int v41; // [esp+34h] [ebp-34h]
  int v42; // [esp+38h] [ebp-30h]
  Outpop::Utility::Binary_Stream *v43; // [esp+3Ch] [ebp-2Ch]
  Outpop::Message::Message *v44; // [esp+40h] [ebp-28h]
  Outpop::Message::Message *v45; // [esp+44h] [ebp-24h]
  Outpop::Message::Message *v46; // [esp+48h] [ebp-20h]
  Outpop::Utility::Ref_Object *v47; // [esp+4Ch] [ebp-1Ch] BYREF
  Outpop::Message::Message *v48; // [esp+50h] [ebp-18h] BYREF
  unsigned __int8 v49; // [esp+57h] [ebp-11h]
  int *v50; // [esp+58h] [ebp-10h]
  int v51; // [esp+64h] [ebp-4h]

  v50 = &v32;
  v36 = this;
  v3 = a2;
  v4 = *(Outpop::Message::Message ***)(a2 + 4);
  if ( (unsigned int)v4 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v33 = a2;
  for ( i = v4; ; ++i )
  {
    v5 = a2;
    v6 = *(Outpop::Message::Message ***)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > (unsigned int)v6 )
    {
      invalid_parameter_noinfo();
      v5 = a2;
    }
    if ( !v3 || v3 != v5 )
      invalid_parameter_noinfo();
    if ( i == v6 )
      break;
    v51 = 0;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( (unsigned int)i >= *(_DWORD *)(v3 + 8) )
      invalid_parameter_noinfo();
    v7 = *i;
    v48 = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
    LOBYTE(v51) = 1;
    Outpop::Message::Message::receive_data(v48);
    Outpop::Utility::Binary_Stream::channelid(v48, *(_DWORD *)(*a3 + 112));
    *((_DWORD *)v48 + 19) = *(_DWORD *)(*a3 + 8);
    *((_DWORD *)v48 + 20) = *(_DWORD *)(*a3 + 16);
    *((_DWORD *)v48 + 21) = *(_DWORD *)(*a3 + 12);
    *((_DWORD *)v48 + 22) = *(_DWORD *)(*a3 + 20);
    act_obj = (Outpop::Utility::Ref_Object **)Outpop::IONetwork::Channel::get_act_obj(*a3, &v47);
    LOBYTE(v51) = 2;
    Outpop::Message::Message::set_act(v48, act_obj);
    LOBYTE(v51) = 1;
    if ( v47 )
      Outpop::Utility::Ref_Object::release(v47);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v37 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v37);
      LOBYTE(v51) = 3;
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
      v11 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v12);
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v13);
      v15 = sub_10023490(
              &log_buffer[v11],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
              251)
          + v11;
      v46 = v48;
      v45 = v48;
      v44 = v48;
      v43 = v48;
      v42 = *((_DWORD *)v48 + 22);
      v41 = *((_DWORD *)v48 + 21);
      v40 = *((_DWORD *)v48 + 20);
      v39 = *((_DWORD *)v48 + 19);
      v38 = v48;
      v49 = *(_BYTE *)(*((_DWORD *)v48 + 25) + 1);
      readable = Outpop::Utility::Stream_Base::get_readable(v48);
      message_type = Outpop::Message::Message::get_message_type((_BYTE **)v46);
      token = Outpop::Message::Message::get_token(v45);
      multi_id = Outpop::Message::Message::get_multi_id(v44);
      v25 = Outpop::Utility::Binary_Stream::channelid(v43);
      v23 = v42;
      v21 = v41;
      v20 = v40;
      v19 = v39;
      type = Outpop::Message::Message::get_type(v38);
      sub_10023490(
        &log_buffer[v15],
        L"Channel_Manager commit message catalog %d type %d local id %d local type %d remote id %d remote type %d channel "
         "id %d multi id %d token %d message type %d data size %d",
        v49,
        type,
        v19,
        v20,
        v21,
        v23,
        v25,
        multi_id,
        token,
        message_type,
        readable);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v17);
      }
      LOBYTE(v51) = 1;
      Outpop::Utility::Lock::unlock(v37);
      v3 = v33;
    }
    LOBYTE(v35) = *(_BYTE *)(*((_DWORD *)v48 + 25) + 1);
    LOWORD(v18) = Outpop::Message::Message::get_type(v48);
    Outpop::Message::Handler_Manager::dispatch_message_handler(v35, v18, &v48);
    LOBYTE(v51) = 0;
    if ( v48 )
      Outpop::Utility::Ref_Object::release(v48);
    v51 = -1;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( (unsigned int)i >= *(_DWORD *)(v3 + 8) )
      invalid_parameter_noinfo();
  }
}
