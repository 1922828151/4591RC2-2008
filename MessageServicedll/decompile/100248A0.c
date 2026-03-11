/*
 * func-name: sub_100248A0
 * func-address: 0x100248a0
 * callers: none
 * callees: 0x1001fcf0, 0x10020860, 0x10023490, 0x10024380, 0x10026cd0
 */

void __thiscall sub_100248A0(Outpop::Utility::Ref_Object **this, int a2, int a3, int a4, int a5)
{
  Outpop::Utility::Ref_Object *v6; // eax
  Outpop::Utility::Ref_Object **v7; // ebp
  int v8; // eax
  Outpop::Utility::Sect_Block_Allocator *v9; // eax
  Outpop::Utility::Lock *v10; // eax
  Outpop::Utility::Ref_Object *v11; // esi
  _BYTE *v12; // ecx
  int v13; // edx
  int v14; // edi
  Outpop::Utility::Ref_Object *v15; // eax
  unsigned __int16 v16; // cx
  __int16 v17; // dx
  Outpop::Utility::Ref_Object *v18; // eax
  unsigned __int16 v19; // cx
  int v20; // edx
  int v21; // edx
  Outpop::Utility::Binary_Stream *v22; // ecx
  Outpop::Utility::Binary_Stream *v23; // esi
  unsigned int v24; // eax
  Outpop::Utility::Ref_Object *v25; // eax
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // dx
  unsigned __int8 v28; // cl
  Outpop::Utility::Ref_Object *v29; // eax
  struct Outpop::Message::Message_Handler *message_handler; // eax
  Outpop::Utility::Lock *v31; // ebx
  Outpop::Utility::Logger *v32; // eax
  wchar_t *log_buffer; // edi
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *dt; // eax
  int v38; // eax
  Outpop::Utility::Ref_Object *v39; // ebp
  unsigned __int8 v40; // cl
  int v41; // esi
  int v42; // eax
  Outpop::Utility::Logger *v43; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  Outpop::Utility::Ref_Object *v48; // [esp+14h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object **v49; // [esp+18h] [ebp-1Ch] BYREF
  int v50; // [esp+1Ch] [ebp-18h]
  char v51[4]; // [esp+20h] [ebp-14h]
  Outpop::Utility::Lock *v52; // [esp+24h] [ebp-10h]
  int v53; // [esp+30h] [ebp-4h]

  v6 = this[2];
  v7 = this + 2;
  if ( (*((_BYTE *)v6 + 97) & 0xF) != 0 )
    v8 = *(_DWORD *)((*((_BYTE *)v6 + 97) & 0xF) + *((_DWORD *)v6 + 25));
  else
    v8 = -1;
  Outpop::Message::Request_Ack::get_asynch_request_item(&v49, v8);
  v53 = 0;
  if ( v49 )
  {
    v9 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
    v10 = (Outpop::Utility::Lock *)Outpop::Utility::Sect_Block_Allocator::malloc(v9);
    v52 = v10;
    LOBYTE(v53) = 1;
    if ( v10 )
    {
      v11 = *v7;
      v12 = (_BYTE *)*((_DWORD *)*v7 + 25);
      LOBYTE(v50) = (*v12 & 2) == 2;
      v13 = *v12 & 0x60;
      if ( v13 == 32 )
        v14 = 1;
      else
        v14 = v13 != 64 ? 0 : 2;
      v51[0] = (**((_BYTE **)v11 + 25) & 0x80) == 0x80;
      v15 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::Message(
                                             (int)v10,
                                             *(const char **)v51,
                                             v14,
                                             2,
                                             v50,
                                             0);
    }
    else
    {
      v15 = 0;
    }
    LOBYTE(v53) = 0;
    v48 = v15;
    if ( v15 )
      Outpop::Utility::Ref_Object::addref(v15);
    LOBYTE(v53) = 2;
    *(_BYTE *)(*((_DWORD *)v48 + 25) + 1) = *(_BYTE *)(*((_DWORD *)*v7 + 25) + 1);
    v16 = *((_WORD *)*v7 + 48) >> 12;
    if ( v16 )
      v17 = *(_WORD *)(v16 + *((_DWORD *)*v7 + 25));
    else
      v17 = -1;
    v18 = v48;
    v19 = *((_WORD *)v48 + 48) >> 12;
    if ( v19 )
    {
      *(_WORD *)(v19 + *((_DWORD *)v48 + 25)) = v17;
      v18 = v48;
    }
    if ( (*((_BYTE *)*v7 + 97) & 0xF) != 0 )
      v20 = *(_DWORD *)((*((_BYTE *)*v7 + 97) & 0xF) + *((_DWORD *)*v7 + 25));
    else
      v20 = -1;
    if ( (*((_BYTE *)v18 + 97) & 0xF) != 0 )
    {
      *(_DWORD *)((*((_BYTE *)v18 + 97) & 0xF) + *((_DWORD *)v18 + 25)) = v20;
      v18 = v48;
    }
    if ( (*((_BYTE *)*v7 + 96) & 0xF) != 0 )
      v21 = *(_DWORD *)((*((_BYTE *)*v7 + 96) & 0xF) + *((_DWORD *)*v7 + 25));
    else
      v21 = -1;
    if ( (*((_BYTE *)v18 + 96) & 0xF) != 0 )
    {
      *(_DWORD *)((*((_BYTE *)v18 + 96) & 0xF) + *((_DWORD *)v18 + 25)) = v21;
      v18 = v48;
    }
    if ( ((*((_BYTE *)v18 + 96) >> 4) & 0xF) != 0 )
    {
      *(_WORD *)(((*((_BYTE *)v18 + 96) >> 4) & 0xF) + *((_DWORD *)v18 + 25)) = 1;
      v18 = v48;
    }
    v22 = *v7;
    this[6] = (Outpop::Utility::Ref_Object *)-1;
    v23 = v18;
    v24 = Outpop::Utility::Binary_Stream::channelid(v22);
    Outpop::Utility::Binary_Stream::channelid(v23, v24);
    v25 = *v7;
    v26 = *((_WORD *)*v7 + 48) >> 12;
    if ( v26 )
      v27 = *(_WORD *)(v26 + *((_DWORD *)v25 + 25));
    else
      v27 = -1;
    v28 = *(_BYTE *)(*((_DWORD *)v25 + 25) + 1);
    v29 = this[5];
    v51[0] = v28;
    message_handler = Outpop::Message::Handler_Manager::get_message_handler(
                        *((Outpop::Message::Handler_Manager **)v29 + 12),
                        v28,
                        v27);
    if ( message_handler )
      Outpop::Message::Asynch_Ack_Handler::handle_time_out((int)message_handler, &v48, v7, v49 + 7);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v31 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v52 = v31;
      Outpop::Utility::Lock::lock(v31);
      LOBYTE(v53) = 3;
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
              213);
      v39 = *v7;
      v40 = *((_BYTE *)v39 + 97) & 0xF;
      v41 = v38 + v34;
      if ( v40 )
        v42 = *(_DWORD *)(v40 + *((_DWORD *)v39 + 25));
      else
        v42 = -1;
      sub_10023490(
        0xFFFF - v41,
        &log_buffer[v41],
        L"Request_Ack::SAsynchRequestAckItem::handle_time_out time out token %d",
        v42);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v43);
      }
      LOBYTE(v53) = 2;
      Outpop::Utility::Lock::unlock(v31);
    }
    LOBYTE(v53) = 0;
    if ( v48 )
      Outpop::Utility::Ref_Object::release(v48);
    v53 = -1;
    if ( v49 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v49);
  }
  else
  {
    v53 = -1;
  }
}
