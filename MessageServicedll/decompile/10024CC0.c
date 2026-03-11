/*
 * func-name: sub_10024CC0
 * func-address: 0x10024cc0
 * callers: none
 * callees: 0x1001fcf0, 0x10020860, 0x10023490, 0x10026e00
 */

void __thiscall sub_10024CC0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // eax
  Outpop::Utility::Sect_Block_Allocator *v8; // eax
  void *v9; // eax
  int v10; // esi
  _BYTE *v11; // ecx
  int v12; // edx
  int v13; // ebp
  int v14; // ebp
  int v15; // eax
  unsigned __int16 v16; // cx
  __int16 v17; // cx
  unsigned __int16 v18; // ax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  Outpop::Utility::Binary_Stream *v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // dx
  unsigned __int8 v28; // cl
  int v29; // eax
  Outpop::Utility::Ref_Object *v30; // ecx
  int *v31; // esi
  Outpop::Utility::Logger *v32; // eax
  wchar_t *log_buffer; // ebx
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *dt; // eax
  int v38; // eax
  int v39; // edi
  unsigned __int8 v40; // cl
  int v41; // esi
  int v42; // eax
  Outpop::Utility::Logger *v43; // eax
  wchar_t *tm; // [esp-18h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v48; // [esp+14h] [ebp-1Ch] BYREF
  int v49; // [esp+18h] [ebp-18h]
  char v50[4]; // [esp+1Ch] [ebp-14h]
  int v51; // [esp+20h] [ebp-10h]
  int v52; // [esp+2Ch] [ebp-4h]

  v6 = this[2];
  if ( (*(_BYTE *)(v6 + 97) & 0xF) != 0 )
    v7 = *(_DWORD *)((*(_BYTE *)(v6 + 97) & 0xF) + *(_DWORD *)(v6 + 100));
  else
    LOBYTE(v7) = -1;
  Outpop::Message::Request_Ack::get_synch_request_item(&v48, v7);
  v52 = 0;
  if ( v48 )
  {
    v8 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
    v9 = Outpop::Utility::Sect_Block_Allocator::malloc(v8);
    v51 = (int)v9;
    LOBYTE(v52) = 1;
    if ( v9 )
    {
      v10 = this[2];
      v11 = *(_BYTE **)(v10 + 100);
      LOBYTE(v49) = (*v11 & 2) == 2;
      v12 = *v11 & 0x60;
      if ( v12 == 32 )
        v13 = 1;
      else
        v13 = v12 != 64 ? 0 : 2;
      v50[0] = (**(_BYTE **)(v10 + 100) & 0x80) == 0x80;
      v14 = Outpop::Message::Message::Message((int)v9, *(const char **)v50, v13, 2, v49, 0);
    }
    else
    {
      v14 = 0;
    }
    LOBYTE(v52) = 0;
    v51 = v14;
    if ( v14 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v14);
    LOBYTE(v52) = 2;
    *(_BYTE *)(*(_DWORD *)(v14 + 100) + 1) = *(_BYTE *)(*(_DWORD *)(this[2] + 100) + 1);
    v15 = this[2];
    v16 = *(_WORD *)(v15 + 96) >> 12;
    if ( v16 )
      v17 = *(_WORD *)(v16 + *(_DWORD *)(v15 + 100));
    else
      v17 = -1;
    v18 = *(_WORD *)(v14 + 96) >> 12;
    if ( v18 )
      *(_WORD *)(v18 + *(_DWORD *)(v14 + 100)) = v17;
    v19 = this[2];
    if ( (*(_BYTE *)(v19 + 97) & 0xF) != 0 )
      v20 = *(_DWORD *)((*(_BYTE *)(v19 + 97) & 0xF) + *(_DWORD *)(v19 + 100));
    else
      v20 = -1;
    if ( (*(_BYTE *)(v14 + 97) & 0xF) != 0 )
      *(_DWORD *)((*(_BYTE *)(v14 + 97) & 0xF) + *(_DWORD *)(v14 + 100)) = v20;
    v21 = this[2];
    if ( (*(_BYTE *)(v21 + 96) & 0xF) != 0 )
      v22 = *(_DWORD *)((*(_BYTE *)(v21 + 96) & 0xF) + *(_DWORD *)(v21 + 100));
    else
      v22 = -1;
    if ( (*(_BYTE *)(v14 + 96) & 0xF) != 0 )
      *(_DWORD *)((*(_BYTE *)(v14 + 96) & 0xF) + *(_DWORD *)(v14 + 100)) = v22;
    if ( ((*(_BYTE *)(v14 + 96) >> 4) & 0xF) != 0 )
      *(_WORD *)(((*(_BYTE *)(v14 + 96) >> 4) & 0xF) + *(_DWORD *)(v14 + 100)) = 1;
    v23 = (Outpop::Utility::Binary_Stream *)this[2];
    this[6] = -1;
    v24 = Outpop::Utility::Binary_Stream::channelid(v23);
    Outpop::Utility::Binary_Stream::channelid((Outpop::Utility::Binary_Stream *)v14, v24);
    v25 = this[2];
    v26 = *(_WORD *)(v25 + 96) >> 12;
    if ( v26 )
      v27 = *(_WORD *)(v26 + *(_DWORD *)(v25 + 100));
    else
      v27 = -1;
    v28 = *(_BYTE *)(*(_DWORD *)(v25 + 100) + 1);
    v29 = this[5];
    v50[0] = v28;
    if ( Outpop::Message::Handler_Manager::get_message_handler(
           *(Outpop::Message::Handler_Manager **)(v29 + 48),
           v28,
           v27) )
    {
      v30 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v48 + 10);
      v31 = (int *)((char *)v48 + 40);
      if ( v30 )
        Outpop::Utility::Ref_Object::release(v30);
      *v31 = v14;
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v14);
      Outpop::Utility::Event_Base::signal((Outpop::Utility::Ref_Object *)((char *)v48 + 28));
    }
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      *(_DWORD *)v50 = Outpop::Utility::Logger::instance() + 144;
      Outpop::Utility::Lock::lock(*(Outpop::Utility::Lock **)v50);
      LOBYTE(v52) = 3;
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v32);
      v34 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v35);
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v36);
      v38 = sub_10023490(
              0xFFFF - v34,
              &log_buffer[v34],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
              235);
      v39 = this[2];
      v40 = *(_BYTE *)(v39 + 97) & 0xF;
      v41 = v38 + v34;
      if ( v40 )
        v42 = *(_DWORD *)(v40 + *(_DWORD *)(v39 + 100));
      else
        v42 = -1;
      sub_10023490(
        0xFFFF - v41,
        &log_buffer[v41],
        L"Request_Ack::SSynchRequestAckItem::handle_time_out time out token %d ",
        v42);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v43);
      }
      LOBYTE(v52) = 2;
      Outpop::Utility::Lock::unlock(*(Outpop::Utility::Lock **)v50);
    }
    LOBYTE(v52) = 0;
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v14);
    v52 = -1;
    if ( v48 )
      Outpop::Utility::Ref_Object::release(v48);
  }
  else
  {
    v52 = -1;
  }
}
