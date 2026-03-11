/*
 * func-name: sub_10019F50
 * func-address: 0x10019f50
 * callers: 0x1001a6c0
 * callees: 0x10004250, 0x10004300, 0x100222f0, 0x10023490
 */

char __thiscall sub_10019F50(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  int v5; // eax
  int v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Message::Message *v14; // ebp
  unsigned __int8 v15; // bl
  int v16; // esi
  int multi_type; // eax
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Lock *v19; // ecx
  unsigned int v20; // eax
  _DWORD *v21; // edi
  int v22; // ebx
  int v23; // ebp
  Outpop::Utility::Ref_Object *v24; // ecx
  Outpop::Utility::Ref_Object *v25; // ecx
  bool v26; // zf
  int v27; // eax
  Outpop::Utility::Timer_Queue *v28; // eax
  wchar_t *tm; // [esp-18h] [ebp-50h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-4Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-48h]
  DWORD LastError; // [esp-Ch] [ebp-44h]
  int type; // [esp-4h] [ebp-3Ch]
  int v35; // [esp+0h] [ebp-38h]
  int v36; // [esp+0h] [ebp-38h]
  int v37; // [esp+4h] [ebp-34h]
  int v38; // [esp+8h] [ebp-30h]
  int v39; // [esp+Ch] [ebp-2Ch]
  unsigned int v40; // [esp+18h] [ebp-20h] BYREF
  Outpop::Utility::Lock *v41; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v42; // [esp+20h] [ebp-18h] BYREF
  int v43; // [esp+24h] [ebp-14h]
  int v44; // [esp+34h] [ebp-4h]
  Outpop::Utility::Lock *v45; // [esp+3Ch] [ebp+4h]

  v4 = *a2;
  if ( !*a2 )
    return 1;
  v5 = **((_BYTE **)v4 + 25) & 0x60;
  if ( v5 == 32 )
    v6 = 1;
  else
    v6 = v5 != 64 ? 0 : 2;
  if ( !v6 )
  {
    v20 = Outpop::Utility::Binary_Stream::channelid(v4);
LABEL_19:
    v40 = v20;
    v41 = (Outpop::Utility::Lock *)(this + 15);
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 15));
    v44 = 1;
    if ( !this[22] )
    {
      v44 = -1;
      v19 = (Outpop::Utility::Lock *)(this + 15);
      goto LABEL_39;
    }
    sub_100222F0(&v42, &v40);
    v21 = v42;
    v22 = this[6];
    if ( !v42 || v42 != this + 5 )
      invalid_parameter_noinfo();
    v23 = v43;
    if ( v43 == v22 )
      goto LABEL_38;
    if ( !v21 )
      invalid_parameter_noinfo();
    if ( v23 == v21[1] )
      invalid_parameter_noinfo();
    v24 = *(Outpop::Utility::Ref_Object **)(v23 + 12);
    if ( v24 )
      Outpop::Utility::Ref_Object::release(v24);
    v25 = *a2;
    v26 = *a2 == 0;
    *(_DWORD *)(v23 + 12) = *a2;
    if ( !v26 )
      Outpop::Utility::Ref_Object::addref(v25);
    if ( ++this[14] != this[7] )
    {
LABEL_38:
      v44 = -1;
      v19 = v41;
      goto LABEL_39;
    }
    v27 = this[23];
    this[22] = 2;
    if ( v27 )
    {
      v28 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(v27, v35, v37, v38, v39);
      Outpop::Utility::Timer_Queue::cancel(v28, v36);
    }
    Outpop::Utility::Event_Base::signal((Outpop::Utility::Event_Base *)(this + 24));
    v44 = -1;
    Outpop::Utility::Lock::unlock(v41);
    return 1;
  }
  if ( v6 == 1 )
  {
    if ( (*((_BYTE *)v4 + 96) & 0xF) != 0 )
      v20 = *(_DWORD *)((*((_BYTE *)v4 + 96) & 0xF) + *((_DWORD *)v4 + 25));
    else
      v20 = -1;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
    || *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) != 1 )
  {
    return 0;
  }
  v45 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
  Outpop::Utility::Lock::lock(v45);
  v44 = 0;
  v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
  log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
  v9 = sub_10023490(log_buffer, L"\n%s", L"LOG_WARNING");
  LastError = GetLastError();
  CurrentThreadId = GetCurrentThreadId();
  CurrentProcessId = GetCurrentProcessId();
  v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
  tm = Outpop::Utility::Logger::make_tm(v10);
  v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
  dt = Outpop::Utility::Logger::make_dt(v11);
  v13 = sub_10023490(
          &log_buffer[v9],
          L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
          dt,
          tm,
          CurrentProcessId,
          CurrentThreadId,
          LastError,
          L"D:\\R3\\OutpopGameProject\\MessageService\\Group_Request_Ack.cpp",
          161);
  v14 = *a2;
  v15 = *(_BYTE *)(*((_DWORD *)v14 + 25) + 1);
  v16 = v13 + v9;
  type = Outpop::Message::Message::get_type(v14);
  multi_type = Outpop::Message::Message::get_multi_type((_BYTE **)v14);
  sub_10023490(
    &log_buffer[v16],
    L"Synch Group Item on ack error ack multi type %d message catalog %d type %d!",
    multi_type,
    v15,
    type);
  if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
    wprintf(L"%s", log_buffer);
  if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
  {
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    Outpop::Utility::Logger::write_file(v18);
  }
  v44 = -1;
  v19 = v45;
LABEL_39:
  Outpop::Utility::Lock::unlock(v19);
  return 0;
}
