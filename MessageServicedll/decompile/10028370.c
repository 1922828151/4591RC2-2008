/*
 * func-name: ?handle_message@Remote_Event_Proxy@Message@Outpop@@UAEXAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10028370
 * callers: none
 * callees: 0x10004250, 0x100175f0, 0x10017b10, 0x10020860, 0x10020fa0, 0x10023490, 0x10029280, 0x10029320
 */

void __thiscall Outpop::Message::Remote_Event_Proxy::handle_message(int this, Outpop::Utility::Binary_Stream **a2)
{
  Outpop::Utility::Binary_Stream **v3; // edi
  Outpop::Utility::Lock *v4; // edi
  Outpop::Utility::Logger *v5; // eax
  wchar_t *v6; // ebx
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Lock *v13; // esi
  Outpop::Utility::Binary_Stream *v14; // ecx
  _BYTE *v15; // edx
  int v16; // eax
  int v17; // eax
  char v18; // al
  Outpop::Utility::Logger *v19; // eax
  wchar_t *log_buffer; // edi
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *dt; // eax
  int v25; // esi
  unsigned __int16 type; // ax
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Sect_Block_Allocator *v28; // eax
  void *v29; // esi
  int v30; // edx
  int v31; // edx
  Outpop::Message::Message *v32; // eax
  unsigned __int16 v33; // ax
  int v34; // ecx
  int v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // esi
  Outpop::Utility::Logger *v38; // eax
  Outpop::Utility::Logger *v39; // eax
  wchar_t *v40; // eax
  int v41; // edi
  unsigned int v42; // eax
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // [esp-18h] [ebp-58h]
  wchar_t *tm; // [esp-18h] [ebp-58h]
  DWORD v46; // [esp-14h] [ebp-54h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-54h]
  DWORD v48; // [esp-10h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-50h]
  DWORD v50; // [esp-Ch] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-4Ch]
  int v52; // [esp-Ch] [ebp-4Ch]
  int v53; // [esp-8h] [ebp-48h]
  unsigned int v54; // [esp-4h] [ebp-44h]
  unsigned int v55; // [esp-4h] [ebp-44h]
  wchar_t *v56; // [esp-4h] [ebp-44h]
  int v57; // [esp+0h] [ebp-40h] BYREF
  _BYTE v58[12]; // [esp+10h] [ebp-30h] BYREF
  int v59; // [esp+1Ch] [ebp-24h] BYREF
  void *v60; // [esp+20h] [ebp-20h]
  Outpop::Utility::Lock *v61; // [esp+24h] [ebp-1Ch]
  int v62; // [esp+28h] [ebp-18h] BYREF
  Outpop::Message::Message *v63[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v64; // [esp+3Ch] [ebp-4h]

  v63[1] = (Outpop::Message::Message *)&v57;
  v62 = 0;
  v64 = 0;
  v3 = a2;
  sub_10029280(&v62);
  v64 = -1;
  if ( v62 == 102 )
  {
    v13 = (Outpop::Utility::Lock *)(this + 96);
    v60 = (void *)(this + 96);
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 96));
    v64 = 3;
    v14 = *a2;
    v15 = (_BYTE *)*((_DWORD *)*a2 + 25);
    v16 = *v15 & 0x60;
    if ( v16 == 32 || v16 == 64 )
    {
      if ( (*v15 & 0x60) == 0x20 )
      {
        if ( (*((_BYTE *)v14 + 96) & 0xF) != 0 )
          v17 = *(_DWORD *)((*((_BYTE *)v14 + 96) & 0xF) + *((_DWORD *)v14 + 25));
        else
          v17 = -1;
        v54 = v17;
        v18 = Outpop::Utility::Binary_Stream::channelid(v14);
        Outpop::Message::Group::add_id((Outpop::Message::Group *)(this + 16), v18, v54);
      }
      else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
              || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
             && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
      {
        v61 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v61);
        LOBYTE(v64) = 4;
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v19);
        v21 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_WARNING");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v22);
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v23);
        v25 = sub_10023490(
                0xFFFF - v21,
                &log_buffer[v21],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Remote_Event_Manager.cpp",
                48)
            + v21;
        v63[0] = *a2;
        v55 = Outpop::Utility::Binary_Stream::channelid(v63[0]);
        v53 = *(unsigned __int16 *)(this + 14);
        v52 = *(unsigned __int8 *)(this + 12);
        type = Outpop::Message::Message::get_type(v63[0]);
        sub_10023490(
          0xFFFF - v25,
          &log_buffer[v25],
          L"Remote event proxy message multi type %d error catalog %d type %d channel id %d!",
          type,
          v52,
          v53,
          v55);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v27);
        }
        LOBYTE(v64) = 3;
        Outpop::Utility::Lock::unlock(v61);
        v13 = (Outpop::Utility::Lock *)v60;
        v3 = a2;
      }
    }
    else
    {
      v63[0] = (Outpop::Message::Message *)Outpop::Utility::Binary_Stream::channelid(v14);
      sub_10017B10((int *)(this + 16), (int)v58, v63);
    }
    v64 = -1;
    Outpop::Utility::Lock::unlock(v13);
    v28 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
    v29 = Outpop::Utility::Sect_Block_Allocator::malloc(v28);
    v60 = v29;
    v64 = 5;
    if ( v29 )
    {
      v30 = **((_BYTE **)*v3 + 25) & 0x60;
      if ( v30 == 32 )
        v31 = 1;
      else
        v31 = v30 != 64 ? 0 : 2;
      v32 = (Outpop::Message::Message *)Outpop::Message::Message::Message((int)v29, (const char *)1, v31, 0, 0, 4);
    }
    else
    {
      v32 = 0;
    }
    v64 = -1;
    v63[0] = v32;
    if ( v32 )
      Outpop::Utility::Ref_Object::addref(v32);
    v64 = 6;
    *(_BYTE *)(*((_DWORD *)v63[0] + 25) + 1) = *(_BYTE *)(this + 12);
    v33 = *((_WORD *)v63[0] + 48) >> 12;
    if ( v33 )
      *(_WORD *)(v33 + *((_DWORD *)v63[0] + 25)) = *(_WORD *)(this + 14);
    Outpop::Utility::Binary_Stream::priority(3);
    Outpop::Utility::Binary_Stream::set_reliable(v63[0], 1);
    Outpop::Utility::Binary_Stream::sequence(v63[0], 2);
    if ( (*((_BYTE *)*v3 + 96) & 0xF) != 0 )
      v34 = *(_DWORD *)((*((_BYTE *)*v3 + 96) & 0xF) + *((_DWORD *)*v3 + 25));
    else
      v34 = -1;
    if ( (*((_BYTE *)v63[0] + 96) & 0xF) != 0 )
      *(_DWORD *)((*((_BYTE *)v63[0] + 96) & 0xF) + *((_DWORD *)v63[0] + 25)) = v34;
    v59 = 103;
    sub_10029320(&v59);
    v35 = Outpop::Utility::Binary_Stream::channelid(*v3);
    Outpop::Message::Message_Sender::send(*((_DWORD **)Outpop::Message::Message_Facade::g_c_ + 10), v35, v63);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v60 = (void *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v60);
      LOBYTE(v64) = 7;
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::get_log_buffer(v36);
      v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v56 = Outpop::Utility::Logger::make_tm(v38);
      v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v40 = Outpop::Utility::Logger::make_dt(v39);
      v41 = sub_10023490(0xFFFFu, v37, L"\nLOGINFO %s:%s Message:", v40, v56);
      v42 = Outpop::Utility::Binary_Stream::channelid(*a2);
      sub_10023490(
        0xFFFF - v41,
        &v37[v41],
        L"Remote event proxy catalog %d type %d build a remote observer from channel id %d ",
        *(unsigned __int8 *)(this + 12),
        *(unsigned __int16 *)(this + 14),
        v42);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v37);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v43);
      }
      LOBYTE(v64) = 6;
      Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v60);
    }
    v64 = -1;
    if ( v63[0] )
      Outpop::Utility::Ref_Object::release(v63[0]);
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
  {
    v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v4);
    v64 = 8;
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v6 = Outpop::Utility::Logger::get_log_buffer(v5);
    v7 = sub_10023490(0xFFFFu, v6, L"\n%s", L"LOG_WARNING");
    v50 = GetLastError();
    v48 = GetCurrentThreadId();
    v46 = GetCurrentProcessId();
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v44 = Outpop::Utility::Logger::make_tm(v8);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v10 = Outpop::Utility::Logger::make_dt(v9);
    v11 = sub_10023490(
            0xFFFF - v7,
            &v6[v7],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v10,
            v44,
            v46,
            v48,
            v50,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Remote_Event_Manager.cpp",
            69);
    sub_10023490(0xFFFF - (v11 + v7), &v6[v11 + v7], L"Remote event proxy handle message unknown operator type %d", v62);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v6);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v12);
    }
    v64 = -1;
    Outpop::Utility::Lock::unlock(v4);
  }
}
