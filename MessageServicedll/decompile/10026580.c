/*
 * func-name: ?synch_request@Request_Ack@Message@Outpop@@QAE?AV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@HAAV453@@Z
 * func-address: 0x10026580
 * callers: 0x1000ce70
 * callees: 0x1000bfa0, 0x10020860, 0x10020fa0, 0x10023490, 0x10023720, 0x10027260, 0x10027830
 */

_DWORD *__thiscall Outpop::Message::Request_Ack::synch_request(
        Outpop::Utility::Ref_Object *this,
        _DWORD *a2,
        unsigned int a3,
        Outpop::Utility::Binary_Stream **a4)
{
  Outpop::Utility::Ref_Object *v4; // edi
  LONG v5; // eax
  int v6; // ebx
  Outpop::Utility::Sect_Block_Allocator *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebp
  Outpop::Utility::Lock *v10; // esi
  bool v11; // bl
  Outpop::Utility::Lock *v12; // ebp
  Outpop::Utility::Logger *v13; // eax
  wchar_t *log_buffer; // edi
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *dt; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Stream_Base **v21; // esi
  unsigned __int8 v22; // dl
  unsigned int v23; // eax
  int v24; // eax
  int v25; // esi
  Outpop::Utility::Lock *v26; // ebx
  Outpop::Utility::Sect_Block_Allocator *v27; // eax
  void *v28; // eax
  Outpop::Utility::Binary_Stream *v30; // esi
  _BYTE *v31; // ecx
  int v32; // edx
  int v33; // ecx
  int v34; // esi
  unsigned __int16 v35; // cx
  __int16 v36; // cx
  unsigned __int16 v37; // ax
  int v38; // ecx
  int v39; // ecx
  Outpop::Utility::Lock *v41; // ebp
  Outpop::Utility::Logger *v42; // eax
  wchar_t *v43; // edi
  int v44; // esi
  Outpop::Utility::Logger *v45; // eax
  Outpop::Utility::Logger *v46; // eax
  wchar_t *v47; // eax
  int v48; // eax
  Outpop::Utility::Logger *v49; // eax
  Outpop::Utility::Ref_Object *v50; // ecx
  wchar_t *tm; // [esp-8h] [ebp-78h]
  wchar_t *v52; // [esp-8h] [ebp-78h]
  DWORD CurrentProcessId; // [esp-4h] [ebp-74h]
  DWORD v54; // [esp-4h] [ebp-74h]
  DWORD CurrentThreadId; // [esp+0h] [ebp-70h]
  DWORD v56; // [esp+0h] [ebp-70h]
  DWORD LastError; // [esp+4h] [ebp-6Ch]
  DWORD v58; // [esp+4h] [ebp-6Ch]
  int v59; // [esp+24h] [ebp-4Ch]
  _DWORD *v60; // [esp+28h] [ebp-48h]
  Outpop::Utility::Ref_Object *v61; // [esp+2Ch] [ebp-44h] BYREF
  Outpop::Utility::Ref_Object *v62; // [esp+30h] [ebp-40h] BYREF
  int v63; // [esp+34h] [ebp-3Ch]
  Outpop::Utility::Lock *v64; // [esp+38h] [ebp-38h]
  int v65; // [esp+3Ch] [ebp-34h]
  int v66; // [esp+40h] [ebp-30h]
  _DWORD *v67; // [esp+44h] [ebp-2Ch]
  Outpop::Utility::Lock *v68; // [esp+48h] [ebp-28h] BYREF
  Outpop::Utility::Ref_Object *v69; // [esp+4Ch] [ebp-24h]
  _DWORD v70[2]; // [esp+50h] [ebp-20h] BYREF
  int v71[3]; // [esp+58h] [ebp-18h] BYREF
  int v72; // [esp+6Ch] [ebp-4h]
  char v73; // [esp+7Ch] [ebp+Ch]

  v4 = this;
  v62 = this;
  v63 = 0;
  Outpop::Utility::Binary_Stream::channelid(*a4, a3);
  v5 = InterlockedIncrement((volatile LONG *)v4 + 34);
  if ( v5 == -1 )
  {
    v6 = 1;
    v59 = 1;
  }
  else
  {
    v59 = v5;
    v6 = v5;
  }
  v65 = v6;
  v7 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(44);
  v8 = Outpop::Utility::Sect_Block_Allocator::malloc(v7);
  v66 = (int)v8;
  v72 = 1;
  if ( v8 )
  {
    v9 = sub_10023720(a3, *((_DWORD *)v4 + 1), v8, a4);
    v60 = v9;
  }
  else
  {
    v60 = 0;
    v9 = 0;
  }
  LOBYTE(v72) = 0;
  v67 = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
  v72 = 3;
  v10 = (Outpop::Utility::Ref_Object *)((char *)v4 + 112);
  v64 = (Outpop::Utility::Ref_Object *)((char *)v4 + 112);
  v61 = (Outpop::Utility::Ref_Object *)((char *)v4 + 112);
  Outpop::Utility::Lock::lock((Outpop::Utility::Ref_Object *)((char *)v4 + 112));
  v70[0] = v6;
  v70[1] = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
  LOBYTE(v72) = 5;
  sub_1000BFA0(&v68, v70);
  LOBYTE(v72) = 6;
  v66 = (int)v4 + 48;
  v11 = *(_BYTE *)(sub_10027260((char *)v4 + 48, v71, &v68) + 8) == 0;
  LOBYTE(v72) = 5;
  if ( v69 )
    Outpop::Utility::Ref_Object::release(v69);
  LOBYTE(v72) = 3;
  if ( v9 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v9);
  if ( v11
    && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
  {
    v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v68 = v12;
    Outpop::Utility::Lock::lock(v12);
    LOBYTE(v72) = 9;
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v13);
    v15 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_FATAL");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v16);
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v17);
    v19 = sub_10023490(
            0xFFFF - v15,
            &log_buffer[v15],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            375);
    sub_10023490(0xFFFF - (v19 + v15), &log_buffer[v19 + v15], L"Request_Ack synch_request insert map error");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v20);
    }
    LOBYTE(v72) = 3;
    Outpop::Utility::Lock::unlock(v12);
    v4 = v62;
    v10 = v61;
    v9 = v60;
  }
  LOBYTE(v72) = 2;
  Outpop::Utility::Lock::unlock(v10);
  v21 = a4;
  v22 = *((_BYTE *)*a4 + 97) & 0xF;
  if ( v22 )
    *(_DWORD *)(v22 + *((_DWORD *)*a4 + 25)) = v59;
  if ( *((_BYTE *)v4 + 164) == 1 )
  {
    if ( *((_DWORD *)*a4 + 18) == -1 )
    {
      v23 = *(_DWORD *)(*((_DWORD *)v4 + 1) + 88);
      if ( v23 < 0x1F4 )
        v23 = 500;
      *((_DWORD *)*a4 + 18) = v23;
    }
    Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v70);
    LOBYTE(v72) = 10;
    Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v70, *((_DWORD *)*a4 + 18));
    v62 = 0;
    LOBYTE(v72) = 11;
    v61 = (Outpop::Utility::Ref_Object *)v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
    LOBYTE(v72) = 12;
    v24 = Outpop::Utility::Timer_Queue::instance(&v61, v70, &v62, 0, 0);
    v25 = Outpop::Utility::Timer_Queue::schedule_timer(v24);
    LOBYTE(v72) = 11;
    if ( v61 )
      Outpop::Utility::Ref_Object::release(v61);
    LOBYTE(v72) = 10;
    if ( v62 )
      Outpop::Utility::Ref_Object::release(v62);
    if ( v25 == -1 )
    {
      v26 = v64;
      v68 = v64;
      Outpop::Utility::Lock::lock(v64);
      LOBYTE(v72) = 13;
      sub_10027830(v66);
      v27 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
      v28 = Outpop::Utility::Sect_Block_Allocator::malloc(v27);
      v65 = (int)v28;
      LOBYTE(v72) = 14;
      if ( v28 )
      {
        v30 = *a4;
        v31 = (_BYTE *)*((_DWORD *)*a4 + 25);
        v73 = (*v31 & 2) == 2;
        v32 = *v31 & 0x60;
        if ( v32 == 32 )
          v33 = 1;
        else
          v33 = v32 != 64 ? 0 : 2;
        LOBYTE(v66) = (**((_BYTE **)v30 + 25) & 0x80) == 0x80;
        v34 = Outpop::Message::Message::Message((int)v28, (const char *)v66, v33, 2, v73, 0);
      }
      else
      {
        v34 = 0;
      }
      LOBYTE(v72) = 13;
      if ( v34 )
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v34);
      LOBYTE(v72) = 15;
      *(_BYTE *)(*(_DWORD *)(v34 + 100) + 1) = *(_BYTE *)(*((_DWORD *)*a4 + 25) + 1);
      v35 = *((_WORD *)*a4 + 48) >> 12;
      if ( v35 )
        v36 = *(_WORD *)(v35 + *((_DWORD *)*a4 + 25));
      else
        v36 = -1;
      v37 = *(_WORD *)(v34 + 96) >> 12;
      if ( v37 )
        *(_WORD *)(v37 + *(_DWORD *)(v34 + 100)) = v36;
      if ( (*((_BYTE *)*a4 + 97) & 0xF) != 0 )
        v38 = *(_DWORD *)((*((_BYTE *)*a4 + 97) & 0xF) + *((_DWORD *)*a4 + 25));
      else
        v38 = -1;
      if ( (*(_BYTE *)(v34 + 97) & 0xF) != 0 )
        *(_DWORD *)((*(_BYTE *)(v34 + 97) & 0xF) + *(_DWORD *)(v34 + 100)) = v38;
      if ( (*((_BYTE *)*a4 + 96) & 0xF) != 0 )
        v39 = *(_DWORD *)((*((_BYTE *)*a4 + 96) & 0xF) + *((_DWORD *)*a4 + 25));
      else
        v39 = -1;
      if ( (*(_BYTE *)(v34 + 96) & 0xF) != 0 )
        *(_DWORD *)((*(_BYTE *)(v34 + 96) & 0xF) + *(_DWORD *)(v34 + 100)) = v39;
      if ( ((*(_BYTE *)(v34 + 96) >> 4) & 0xF) != 0 )
        *(_WORD *)(((*(_BYTE *)(v34 + 96) >> 4) & 0xF) + *(_DWORD *)(v34 + 100)) = 2;
      Outpop::Utility::Binary_Stream::channelid((Outpop::Utility::Binary_Stream *)v34, a3);
      *a2 = v34;
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v34);
      v63 = 1;
      LOBYTE(v72) = 13;
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v34);
      LOBYTE(v72) = 10;
      Outpop::Utility::Lock::unlock(v26);
      LOBYTE(v72) = 2;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v70);
      LOBYTE(v72) = 0;
      if ( v9 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v9);
      return a2;
    }
    v9[6] = v25;
    LOBYTE(v72) = 2;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v70);
    v21 = a4;
  }
  Outpop::Message::Message_Sender::send(*(_DWORD **)(*((_DWORD *)v4 + 1) + 40), a3, v21);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v41 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v41);
    LOBYTE(v72) = 16;
    v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v43 = Outpop::Utility::Logger::get_log_buffer(v42);
    v44 = sub_10023490(0xFFFFu, v43, L"\n%s", L"LOG_DEBUG");
    v58 = GetLastError();
    v56 = GetCurrentThreadId();
    v54 = GetCurrentProcessId();
    v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v52 = Outpop::Utility::Logger::make_tm(v45);
    v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v47 = Outpop::Utility::Logger::make_dt(v46);
    v48 = sub_10023490(
            0xFFFF - v44,
            &v43[v44],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v47,
            v52,
            v54,
            v56,
            v58,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
            407);
    sub_10023490(0xFFFF - (v48 + v44), &v43[v48 + v44], L"Request_Ack wait for reqeust token %d", v59);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v43);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v49);
    }
    LOBYTE(v72) = 2;
    Outpop::Utility::Lock::unlock(v41);
    v9 = v60;
  }
  Outpop::Utility::Event_Base::wait((Outpop::Utility::Event_Base *)(v9 + 7));
  v50 = (Outpop::Utility::Ref_Object *)v9[10];
  *a2 = v50;
  if ( v50 )
    Outpop::Utility::Ref_Object::addref(v50);
  v63 = 1;
  LOBYTE(v72) = 0;
  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v9);
  return a2;
}
