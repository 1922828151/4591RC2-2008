/*
 * func-name: ?asynch_request@Request_Ack@Message@Outpop@@QAEIHAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@@Z
 * func-address: 0x100253f0
 * callers: 0x1000ce30
 * callees: 0x1000bfa0, 0x10015740, 0x1001fcf0, 0x10020860, 0x10020fa0, 0x10023490, 0x10023610, 0x10024380
 */

int __thiscall Outpop::Message::Request_Ack::asynch_request(
        int this,
        unsigned int a2,
        Outpop::Utility::Binary_Stream **a3,
        Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v5; // eax
  Outpop::Utility::Sect_Block_Allocator *v6; // eax
  Outpop::Utility::Timer_Handler *v7; // eax
  Outpop::Utility::Ref_Object *v8; // ebx
  Outpop::Utility::Lock *v9; // esi
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
  Outpop::Utility::Ref_Object **v20; // edi
  unsigned __int8 v21; // dl
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // esi
  Outpop::Utility::Lock *v26; // ebx
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // edi
  int v29; // esi
  Outpop::Utility::Logger *v30; // eax
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // eax
  int v33; // eax
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Sect_Block_Allocator *v35; // eax
  void *v36; // eax
  Outpop::Utility::Ref_Object *v37; // esi
  int v38; // edx
  int v39; // ebx
  Outpop::Utility::Ref_Object *v40; // eax
  unsigned __int16 v41; // cx
  __int16 v42; // dx
  int v43; // ecx
  unsigned __int16 v44; // ax
  int v45; // edx
  int v46; // edx
  Outpop::Utility::Ref_Object *v47; // eax
  unsigned __int16 v48; // cx
  unsigned __int16 v49; // dx
  struct Outpop::Message::Message_Handler *message_handler; // eax
  void *v52; // ebx
  Outpop::Utility::Logger *v53; // eax
  wchar_t *v54; // edi
  int v55; // esi
  Outpop::Utility::Logger *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // eax
  int v59; // eax
  Outpop::Utility::Logger *v60; // eax
  wchar_t *tm; // [esp+8h] [ebp-6Ch]
  wchar_t *v62; // [esp+8h] [ebp-6Ch]
  wchar_t *v63; // [esp+8h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp+Ch] [ebp-68h]
  DWORD v65; // [esp+Ch] [ebp-68h]
  DWORD v66; // [esp+Ch] [ebp-68h]
  DWORD CurrentThreadId; // [esp+10h] [ebp-64h]
  DWORD v68; // [esp+10h] [ebp-64h]
  DWORD v69; // [esp+10h] [ebp-64h]
  DWORD LastError; // [esp+14h] [ebp-60h]
  DWORD v71; // [esp+14h] [ebp-60h]
  DWORD v72; // [esp+14h] [ebp-60h]
  int v73; // [esp+30h] [ebp-44h] BYREF
  Outpop::Utility::Ref_Object *v74; // [esp+34h] [ebp-40h]
  int v75; // [esp+38h] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v76; // [esp+3Ch] [ebp-38h] BYREF
  char v77[4]; // [esp+40h] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v78; // [esp+44h] [ebp-30h]
  void *v79; // [esp+48h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v80; // [esp+4Ch] [ebp-28h]
  _DWORD v81[2]; // [esp+50h] [ebp-24h] BYREF
  _BYTE v82[16]; // [esp+58h] [ebp-1Ch] BYREF
  int v83; // [esp+70h] [ebp-4h]

  v75 = this;
  Outpop::Utility::Binary_Stream::channelid(*a3, a2);
  v5 = (Outpop::Utility::Ref_Object *)InterlockedIncrement((volatile LONG *)(this + 136));
  v73 = 1;
  if ( v5 != (Outpop::Utility::Ref_Object *)-1 )
    v73 = (int)v5;
  v6 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(32);
  v7 = (Outpop::Utility::Timer_Handler *)Outpop::Utility::Sect_Block_Allocator::malloc(v6);
  *(_DWORD *)v77 = v7;
  v83 = 0;
  if ( v7 )
  {
    v8 = sub_10023610(a2, *(_DWORD *)(this + 4), v7, a3, a4);
    v74 = v8;
  }
  else
  {
    v74 = 0;
    v8 = 0;
  }
  v83 = -1;
  v78 = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  v83 = 2;
  v9 = (Outpop::Utility::Lock *)(this + 88);
  *(_DWORD *)v77 = v9;
  Outpop::Utility::Lock::lock(v9);
  v81[0] = v73;
  v81[1] = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  LOBYTE(v83) = 4;
  sub_1000BFA0(&v79, v81);
  LOBYTE(v83) = 5;
  v10 = *(_BYTE *)(sub_10015740((int *)(v75 + 8), (int)v82, &v79) + 8) == 0;
  LOBYTE(v83) = 4;
  if ( v80 )
    Outpop::Utility::Ref_Object::release(v80);
  LOBYTE(v83) = 2;
  if ( v74 )
    Outpop::Utility::Ref_Object::release(v74);
  if ( v10
    && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
  {
    v11 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v76 = v11;
    Outpop::Utility::Lock::lock(v11);
    LOBYTE(v83) = 8;
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
            271);
    sub_10023490(0xFFFF - (v18 + v14), &log_buffer[v18 + v14], L"Reqeust_Ack asynch request insert map error");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v19);
    }
    LOBYTE(v83) = 2;
    Outpop::Utility::Lock::unlock(v11);
    v9 = *(Outpop::Utility::Lock **)v77;
  }
  LOBYTE(v83) = 1;
  Outpop::Utility::Lock::unlock(v9);
  v20 = a3;
  v21 = *((_BYTE *)*a3 + 97) & 0xF;
  if ( v21 )
    *(_DWORD *)(v21 + *((_DWORD *)*a3 + 25)) = v73;
  v22 = v75;
  if ( *(_BYTE *)(v75 + 164) == 1 )
  {
    if ( *((_DWORD *)*a3 + 18) == -1 )
    {
      v23 = *(_DWORD *)(*(_DWORD *)(v75 + 4) + 88);
      if ( v23 < 0x1F4 )
        v23 = 500;
      *((_DWORD *)*a3 + 18) = v23;
    }
    Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v81);
    LOBYTE(v83) = 9;
    Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v81, *((_DWORD *)*a3 + 18));
    *(_DWORD *)v77 = 0;
    LOBYTE(v83) = 10;
    v76 = v74;
    if ( v74 )
      Outpop::Utility::Ref_Object::addref(v74);
    LOBYTE(v83) = 11;
    v24 = Outpop::Utility::Timer_Queue::instance(&v76, v81, v77, 0, 0);
    v25 = Outpop::Utility::Timer_Queue::schedule_timer(v24);
    LOBYTE(v83) = 10;
    if ( v76 )
      Outpop::Utility::Ref_Object::release(v76);
    LOBYTE(v83) = 9;
    if ( *(_DWORD *)v77 )
      Outpop::Utility::Ref_Object::release(*(Outpop::Utility::Ref_Object **)v77);
    if ( v25 == -1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v26 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        *(_DWORD *)v77 = v26;
        Outpop::Utility::Lock::lock(v26);
        LOBYTE(v83) = 12;
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v28 = Outpop::Utility::Logger::get_log_buffer(v27);
        v29 = sub_10023490(0xFFFFu, v28, L"\n%s", L"LOG_DEBUG");
        v71 = GetLastError();
        v68 = GetCurrentThreadId();
        v65 = GetCurrentProcessId();
        v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v62 = Outpop::Utility::Logger::make_tm(v30);
        v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v32 = Outpop::Utility::Logger::make_dt(v31);
        v33 = sub_10023490(
                0xFFFF - v29,
                &v28[v29],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v32,
                v62,
                v65,
                v68,
                v71,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
                286);
        sub_10023490(0xFFFF - (v33 + v29), &v28[v33 + v29], L"Request_Ack::asynch_request start timer error!");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v28);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v34);
        }
        LOBYTE(v83) = 9;
        Outpop::Utility::Lock::unlock(v26);
        v20 = a3;
      }
      v35 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
      v36 = Outpop::Utility::Sect_Block_Allocator::malloc(v35);
      v79 = v36;
      LOBYTE(v83) = 13;
      if ( v36 )
      {
        v37 = *v20;
        v38 = **((_BYTE **)*v20 + 25) & 0x60;
        v77[0] = (**((_BYTE **)*v20 + 25) & 2) == 2;
        if ( v38 == 32 )
          v39 = 1;
        else
          v39 = v38 != 64 ? 0 : 2;
        LOBYTE(v76) = (**((_BYTE **)v37 + 25) & 0x80) == 0x80;
        v40 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::Message(
                                               (int)v36,
                                               (const char *)v76,
                                               v39,
                                               2,
                                               v77[0],
                                               0);
      }
      else
      {
        v40 = 0;
      }
      LOBYTE(v83) = 9;
      v73 = (int)v40;
      if ( v40 )
        Outpop::Utility::Ref_Object::addref(v40);
      LOBYTE(v83) = 14;
      *(_BYTE *)(*(_DWORD *)(v73 + 100) + 1) = *(_BYTE *)(*((_DWORD *)*v20 + 25) + 1);
      v41 = *((_WORD *)*v20 + 48) >> 12;
      if ( v41 )
        v42 = *(_WORD *)(v41 + *((_DWORD *)*v20 + 25));
      else
        v42 = -1;
      v43 = v73;
      v44 = *(_WORD *)(v73 + 96) >> 12;
      if ( v44 )
      {
        *(_WORD *)(v44 + *(_DWORD *)(v73 + 100)) = v42;
        v43 = v73;
      }
      if ( (*((_BYTE *)*v20 + 97) & 0xF) != 0 )
        v45 = *(_DWORD *)((*((_BYTE *)*v20 + 97) & 0xF) + *((_DWORD *)*v20 + 25));
      else
        v45 = -1;
      if ( (*(_BYTE *)(v43 + 97) & 0xF) != 0 )
      {
        *(_DWORD *)((*(_BYTE *)(v43 + 97) & 0xF) + *(_DWORD *)(v43 + 100)) = v45;
        v43 = v73;
      }
      if ( (*((_BYTE *)*v20 + 96) & 0xF) != 0 )
        v46 = *(_DWORD *)((*((_BYTE *)*v20 + 96) & 0xF) + *((_DWORD *)*v20 + 25));
      else
        v46 = -1;
      if ( (*(_BYTE *)(v43 + 96) & 0xF) != 0 )
      {
        *(_DWORD *)((*(_BYTE *)(v43 + 96) & 0xF) + *(_DWORD *)(v43 + 100)) = v46;
        v43 = v73;
      }
      if ( ((*(_BYTE *)(v43 + 96) >> 4) & 0xF) != 0 )
      {
        *(_WORD *)(((*(_BYTE *)(v43 + 96) >> 4) & 0xF) + *(_DWORD *)(v43 + 100)) = 2;
        v43 = v73;
      }
      Outpop::Utility::Binary_Stream::channelid((Outpop::Utility::Binary_Stream *)v43, a2);
      v47 = *v20;
      v48 = *((_WORD *)*v20 + 48) >> 12;
      if ( v48 )
        v49 = *(_WORD *)(v48 + *((_DWORD *)v47 + 25));
      else
        v49 = -1;
      v77[0] = *(_BYTE *)(*((_DWORD *)v47 + 25) + 1);
      message_handler = Outpop::Message::Handler_Manager::get_message_handler(
                          *(Outpop::Message::Handler_Manager **)(*(_DWORD *)(v75 + 4) + 48),
                          v77[0],
                          v49);
      if ( message_handler )
        Outpop::Message::Asynch_Ack_Handler::handle_time_out(
          (int)message_handler,
          (Outpop::Utility::Ref_Object **)&v73,
          v20,
          a4);
      LOBYTE(v83) = 9;
      if ( v73 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v73);
      LOBYTE(v83) = 1;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v81);
      v83 = -1;
      if ( v74 )
        Outpop::Utility::Ref_Object::release(v74);
      return -1;
    }
    *((_DWORD *)v74 + 6) = v25;
    LOBYTE(v83) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v81);
    v22 = v75;
  }
  Outpop::Message::Message_Sender::send(*(_DWORD **)(*(_DWORD *)(v22 + 4) + 40), a2, a3);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v52 = (void *)(Outpop::Utility::Logger::instance() + 144);
    v79 = v52;
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)v52);
    LOBYTE(v83) = 15;
    v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v54 = Outpop::Utility::Logger::get_log_buffer(v53);
    v55 = sub_10023490(0xFFFFu, v54, L"\n%s", L"LOG_DEBUG");
    v72 = GetLastError();
    v69 = GetCurrentThreadId();
    v66 = GetCurrentProcessId();
    v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v63 = Outpop::Utility::Logger::make_tm(v56);
    v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v58 = Outpop::Utility::Logger::make_dt(v57);
    v59 = sub_10023490(
            0xFFFF - v55,
            &v54[v55],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v58,
            v63,
            v66,
            v69,
            v72,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            307);
    sub_10023490(
      0xFFFF - (v59 + v55),
      &v54[v59 + v55],
      L"Request_Ack asynch request token is %d timer id %d",
      v73,
      *((_DWORD *)v74 + 6));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v54);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v60);
    }
    LOBYTE(v83) = 1;
    Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)v52);
  }
  v83 = -1;
  if ( v74 )
    Outpop::Utility::Ref_Object::release(v74);
  return v73;
}
