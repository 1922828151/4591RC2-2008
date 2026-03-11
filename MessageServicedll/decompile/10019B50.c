/*
 * func-name: sub_10019B50
 * func-address: 0x10019b50
 * callers: 0x1001a4c0
 * callees: 0x10004250, 0x10004300, 0x100222f0, 0x10023490
 */

char __thiscall sub_10019B50(_DWORD *this, Outpop::Message::Message **a2)
{
  Outpop::Message::Message *v3; // ecx
  int v4; // eax
  int v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Message::Message *v13; // ebx
  int v14; // esi
  int multi_type; // eax
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Lock *v17; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // edi
  int v21; // ebx
  Outpop::Utility::Ref_Object *v22; // ecx
  Outpop::Utility::Ref_Object *v23; // ecx
  bool v24; // zf
  Outpop::Utility::Timer_Queue *v25; // eax
  wchar_t *tm; // [esp-18h] [ebp-54h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  int type; // [esp-4h] [ebp-40h]
  int v31; // [esp+0h] [ebp-3Ch]
  int v32; // [esp+0h] [ebp-3Ch]
  int v33; // [esp+4h] [ebp-38h]
  int v34; // [esp+8h] [ebp-34h]
  int v35; // [esp+Ch] [ebp-30h]
  unsigned __int8 v36; // [esp+17h] [ebp-25h]
  unsigned int v37; // [esp+18h] [ebp-24h] BYREF
  int v38; // [esp+1Ch] [ebp-20h]
  Outpop::Utility::Lock *v39; // [esp+20h] [ebp-1Ch]
  _DWORD *v40; // [esp+24h] [ebp-18h] BYREF
  int v41; // [esp+28h] [ebp-14h]
  int v42; // [esp+38h] [ebp-4h]

  v3 = *a2;
  if ( *a2 )
  {
    v4 = **((_BYTE **)v3 + 25) & 0x60;
    if ( v4 == 32 )
      v5 = 1;
    else
      v5 = v4 != 64 ? 0 : 2;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) != 1 )
        {
          return 0;
        }
        v39 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v39);
        v42 = 0;
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
        v8 = sub_10023490(log_buffer, L"\n%s", L"LOG_WARNING");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v9);
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v10);
        v12 = sub_10023490(
                &log_buffer[v8],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Group_Request_Ack.cpp",
                105);
        v13 = *a2;
        v14 = v12 + v8;
        v36 = *(_BYTE *)(*((_DWORD *)*a2 + 25) + 1);
        type = Outpop::Message::Message::get_type(*a2);
        multi_type = Outpop::Message::Message::get_multi_type((_BYTE **)v13);
        sub_10023490(
          &log_buffer[v14],
          L"Asynch Group Item on ack error ack multi type %d message catalog %d type %d!",
          multi_type,
          v36,
          type);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v16);
        }
        goto LABEL_14;
      }
      if ( (*((_BYTE *)v3 + 96) & 0xF) != 0 )
        v19 = *(_DWORD *)((*((_BYTE *)v3 + 96) & 0xF) + *((_DWORD *)v3 + 25));
      else
        v19 = -1;
    }
    else
    {
      v19 = Outpop::Utility::Binary_Stream::channelid(v3);
    }
    v37 = v19;
    v39 = (Outpop::Utility::Lock *)(this + 15);
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 15));
    v42 = 1;
    if ( !this[22] )
    {
      v42 = -1;
      v17 = (Outpop::Utility::Lock *)(this + 15);
      goto LABEL_15;
    }
    sub_100222F0(&v40, &v37);
    v20 = v40;
    v38 = this[6];
    if ( !v40 || v40 != this + 5 )
      invalid_parameter_noinfo();
    v21 = v41;
    if ( v41 == v38 )
      goto LABEL_14;
    if ( !v20 )
      invalid_parameter_noinfo();
    if ( v21 == v20[1] )
      invalid_parameter_noinfo();
    v22 = *(Outpop::Utility::Ref_Object **)(v21 + 12);
    if ( v22 )
      Outpop::Utility::Ref_Object::release(v22);
    v23 = *a2;
    v24 = *a2 == 0;
    *(_DWORD *)(v21 + 12) = *a2;
    if ( !v24 )
      Outpop::Utility::Ref_Object::addref(v23);
    if ( ++this[14] != this[7] )
    {
LABEL_14:
      v42 = -1;
      v17 = v39;
LABEL_15:
      Outpop::Utility::Lock::unlock(v17);
      return 0;
    }
    if ( this[23] )
    {
      v25 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(this[23], v31, v33, v34, v35);
      Outpop::Utility::Timer_Queue::cancel(v25, v32);
    }
    this[22] = 2;
    v42 = -1;
    Outpop::Utility::Lock::unlock(v39);
  }
  return 1;
}
