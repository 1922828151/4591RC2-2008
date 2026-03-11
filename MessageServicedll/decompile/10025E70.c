/*
 * func-name: ?process_post_request@Request_Ack@Message@Outpop@@QAEXAAUSCacheAsynchRequest@123@@Z
 * func-address: 0x10025e70
 * callers: 0x10023a40
 * callees: 0x1000bfa0, 0x10015740, 0x1001fcf0, 0x10020860, 0x10020fa0, 0x10023490, 0x10023610, 0x10024380
 */

void __thiscall Outpop::Message::Request_Ack::process_post_request(
        Outpop::Message::Request_Ack *this,
        struct Outpop::Message::Request_Ack::SCacheAsynchRequest *a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax
  Outpop::Utility::Timer_Handler *v4; // eax
  Outpop::Utility::Ref_Object *v5; // eax
  Outpop::Utility::Lock *v6; // esi
  int v7; // eax
  unsigned __int16 v8; // cx
  int v9; // eax
  bool v10; // bl
  Outpop::Utility::Ref_Object *v11; // ebx
  Outpop::Utility::Logger *v12; // eax
  wchar_t *log_buffer; // edi
  int v14; // esi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *dt; // eax
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Ref_Object *v20; // esi
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  Outpop::Utility::Sect_Block_Allocator *v24; // eax
  void *v25; // eax
  Outpop::Utility::Ref_Object **v26; // edi
  Outpop::Utility::Ref_Object *v27; // esi
  _BYTE *v28; // ecx
  int v29; // edx
  int v30; // ecx
  Outpop::Utility::Ref_Object *v31; // eax
  unsigned __int16 v32; // cx
  __int16 v33; // dx
  Outpop::Utility::Ref_Object *v34; // ecx
  unsigned __int16 v35; // ax
  int v36; // edx
  int v37; // edx
  Outpop::Utility::Ref_Object *v38; // eax
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // dx
  struct Outpop::Message::Message_Handler *message_handler; // eax
  void *v42; // ebx
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // edi
  int v45; // esi
  Outpop::Utility::Logger *v46; // eax
  Outpop::Utility::Logger *v47; // eax
  wchar_t *v48; // eax
  int v49; // esi
  int v50; // eax
  Outpop::Utility::Logger *v51; // eax
  wchar_t *tm; // [esp+0h] [ebp-6Ch]
  wchar_t *v53; // [esp+0h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp+4h] [ebp-68h]
  DWORD v55; // [esp+4h] [ebp-68h]
  DWORD CurrentThreadId; // [esp+8h] [ebp-64h]
  DWORD v57; // [esp+8h] [ebp-64h]
  DWORD LastError; // [esp+Ch] [ebp-60h]
  DWORD v59; // [esp+Ch] [ebp-60h]
  Outpop::Utility::Ref_Object *v60; // [esp+28h] [ebp-44h] BYREF
  Outpop::Utility::Ref_Object *v61; // [esp+2Ch] [ebp-40h]
  Outpop::Utility::Stream_Base **v62; // [esp+30h] [ebp-3Ch]
  Outpop::Message::Request_Ack *v63; // [esp+34h] [ebp-38h]
  char v64[4]; // [esp+38h] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v65; // [esp+3Ch] [ebp-30h]
  void *v66; // [esp+40h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v67; // [esp+44h] [ebp-28h]
  _DWORD v68[2]; // [esp+48h] [ebp-24h] BYREF
  _BYTE v69[16]; // [esp+50h] [ebp-1Ch] BYREF
  int v70; // [esp+68h] [ebp-4h]

  v63 = this;
  v3 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(32);
  v4 = (Outpop::Utility::Timer_Handler *)Outpop::Utility::Sect_Block_Allocator::malloc(v3);
  *(_DWORD *)v64 = v4;
  v70 = 0;
  if ( v4 )
  {
    v5 = sub_10023610(
           *(_DWORD *)a2,
           *((_DWORD *)this + 1),
           v4,
           (Outpop::Utility::Ref_Object **)a2 + 1,
           (Outpop::Utility::Ref_Object **)a2 + 2);
    v61 = v5;
  }
  else
  {
    v61 = 0;
    v5 = 0;
  }
  v70 = -1;
  v65 = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v70 = 2;
  v6 = (Outpop::Message::Request_Ack *)((char *)this + 88);
  *(_DWORD *)v64 = v6;
  Outpop::Utility::Lock::lock(v6);
  v7 = *((_DWORD *)a2 + 1);
  v8 = *(_BYTE *)(v7 + 97) & 0xF;
  v62 = (Outpop::Utility::Stream_Base **)((char *)a2 + 4);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + *(_DWORD *)(v7 + 100));
  else
    v9 = -1;
  v68[0] = v9;
  v68[1] = v61;
  if ( v61 )
    Outpop::Utility::Ref_Object::addref(v61);
  LOBYTE(v70) = 4;
  sub_1000BFA0(&v66, v68);
  LOBYTE(v70) = 5;
  v10 = *(_BYTE *)(sub_10015740((int *)v63 + 2, (int)v69, &v66) + 8) == 0;
  LOBYTE(v70) = 4;
  if ( v67 )
    Outpop::Utility::Ref_Object::release(v67);
  LOBYTE(v70) = 2;
  if ( v61 )
    Outpop::Utility::Ref_Object::release(v61);
  if ( v10
    && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
  {
    v11 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v60 = v11;
    Outpop::Utility::Lock::lock(v11);
    LOBYTE(v70) = 8;
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v12);
    v14 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_FATAL");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v15);
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v16);
    v18 = sub_10023490(
            0xFFFF - v14,
            &log_buffer[v14],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            328);
    sub_10023490(0xFFFF - (v18 + v14), &log_buffer[v18 + v14], L"Request_Ack process_post_request insert map error");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v19);
    }
    LOBYTE(v70) = 2;
    Outpop::Utility::Lock::unlock(v11);
    v6 = *(Outpop::Utility::Lock **)v64;
  }
  LOBYTE(v70) = 1;
  Outpop::Utility::Lock::unlock(v6);
  if ( *((_BYTE *)v63 + 164) == 1 )
  {
    v20 = v61;
    v21 = *((_DWORD *)v61 + 2);
    if ( *(_DWORD *)(v21 + 72) == -1 )
    {
      v22 = *(_DWORD *)(*((_DWORD *)v63 + 1) + 88);
      if ( v22 < 0x1F4 )
        v22 = 500;
      *(_DWORD *)(v21 + 72) = v22;
    }
    Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v68);
    LOBYTE(v70) = 9;
    Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v68, *(_DWORD *)(*((_DWORD *)v20 + 2) + 72));
    *(_DWORD *)v64 = 0;
    LOBYTE(v70) = 10;
    v60 = v20;
    Outpop::Utility::Ref_Object::addref(v20);
    LOBYTE(v70) = 11;
    v23 = Outpop::Utility::Timer_Queue::instance(&v60, v68, v64, 0, 0);
    Outpop::Utility::Timer_Queue::schedule_timer(v23);
    LOBYTE(v70) = 10;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    LOBYTE(v70) = 9;
    if ( *(_DWORD *)v64 )
      Outpop::Utility::Ref_Object::release(*(Outpop::Utility::Ref_Object **)v64);
    v24 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
    v25 = Outpop::Utility::Sect_Block_Allocator::malloc(v24);
    v66 = v25;
    LOBYTE(v70) = 12;
    v26 = v62;
    if ( v25 )
    {
      v27 = *v62;
      v28 = (_BYTE *)*((_DWORD *)*v62 + 25);
      v64[0] = (*v28 & 2) == 2;
      v29 = *v28 & 0x60;
      if ( v29 == 32 )
        v30 = 1;
      else
        v30 = v29 != 64 ? 0 : 2;
      LOBYTE(v62) = (**((_BYTE **)v27 + 25) & 0x80) == 0x80;
      v31 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::Message(
                                             (int)v25,
                                             (const char *)v62,
                                             v30,
                                             2,
                                             v64[0],
                                             0);
    }
    else
    {
      v31 = 0;
    }
    LOBYTE(v70) = 9;
    v60 = v31;
    if ( v31 )
      Outpop::Utility::Ref_Object::addref(v31);
    LOBYTE(v70) = 13;
    *(_BYTE *)(*((_DWORD *)v60 + 25) + 1) = *(_BYTE *)(*((_DWORD *)*v26 + 25) + 1);
    v32 = *((_WORD *)*v26 + 48) >> 12;
    if ( v32 )
      v33 = *(_WORD *)(v32 + *((_DWORD *)*v26 + 25));
    else
      v33 = -1;
    v34 = v60;
    v35 = *((_WORD *)v60 + 48) >> 12;
    if ( v35 )
    {
      *(_WORD *)(v35 + *((_DWORD *)v60 + 25)) = v33;
      v34 = v60;
    }
    if ( (*((_BYTE *)*v26 + 97) & 0xF) != 0 )
      v36 = *(_DWORD *)((*((_BYTE *)*v26 + 97) & 0xF) + *((_DWORD *)*v26 + 25));
    else
      v36 = -1;
    if ( (*((_BYTE *)v34 + 97) & 0xF) != 0 )
    {
      *(_DWORD *)((*((_BYTE *)v34 + 97) & 0xF) + *((_DWORD *)v34 + 25)) = v36;
      v34 = v60;
    }
    if ( (*((_BYTE *)*v26 + 96) & 0xF) != 0 )
      v37 = *(_DWORD *)((*((_BYTE *)*v26 + 96) & 0xF) + *((_DWORD *)*v26 + 25));
    else
      v37 = -1;
    if ( (*((_BYTE *)v34 + 96) & 0xF) != 0 )
    {
      *(_DWORD *)((*((_BYTE *)v34 + 96) & 0xF) + *((_DWORD *)v34 + 25)) = v37;
      v34 = v60;
    }
    if ( ((*((_BYTE *)v34 + 96) >> 4) & 0xF) != 0 )
    {
      *(_WORD *)(((*((_BYTE *)v34 + 96) >> 4) & 0xF) + *((_DWORD *)v34 + 25)) = 2;
      v34 = v60;
    }
    Outpop::Utility::Binary_Stream::channelid(v34, *(_DWORD *)a2);
    v38 = *v26;
    v39 = *((_WORD *)*v26 + 48) >> 12;
    if ( v39 )
      v40 = *(_WORD *)(v39 + *((_DWORD *)v38 + 25));
    else
      v40 = -1;
    v64[0] = *(_BYTE *)(*((_DWORD *)v38 + 25) + 1);
    message_handler = Outpop::Message::Handler_Manager::get_message_handler(
                        *(Outpop::Message::Handler_Manager **)(*((_DWORD *)v63 + 1) + 48),
                        v64[0],
                        v40);
    if ( message_handler )
      Outpop::Message::Asynch_Ack_Handler::handle_time_out(
        (int)message_handler,
        &v60,
        v26,
        (Outpop::Utility::Ref_Object **)a2 + 2);
    LOBYTE(v70) = 9;
    if ( v60 )
      Outpop::Utility::Ref_Object::release(v60);
    LOBYTE(v70) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v68);
    v70 = -1;
    Outpop::Utility::Ref_Object::release(v61);
  }
  else
  {
    Outpop::Message::Message_Sender::send(*(_DWORD **)(*((_DWORD *)v63 + 1) + 40), *(_DWORD *)a2, v62);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v42 = (void *)(Outpop::Utility::Logger::instance() + 144);
      v66 = v42;
      Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v42);
      LOBYTE(v70) = 14;
      v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v44 = Outpop::Utility::Logger::get_log_buffer(v43);
      v45 = sub_10023490(0xFFFFu, v44, L"\n%s", L"LOG_DEBUG");
      v59 = GetLastError();
      v57 = GetCurrentThreadId();
      v55 = GetCurrentProcessId();
      v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v53 = Outpop::Utility::Logger::make_tm(v46);
      v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v48 = Outpop::Utility::Logger::make_dt(v47);
      v49 = sub_10023490(
              0xFFFF - v45,
              &v44[v45],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v48,
              v53,
              v55,
              v57,
              v59,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
              362)
          + v45;
      if ( (*((_BYTE *)*v62 + 97) & 0xF) != 0 )
        v50 = *(_DWORD *)((*((_BYTE *)*v62 + 97) & 0xF) + *((_DWORD *)*v62 + 25));
      else
        v50 = -1;
      sub_10023490(0xFFFF - v49, &v44[v49], L"Request_Ack process post request token %d", v50);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v44);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v51);
      }
      LOBYTE(v70) = 1;
      Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v42);
    }
    v70 = -1;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
  }
}
