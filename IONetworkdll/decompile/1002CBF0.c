/*
 * func-name: ??0Dgram_Channel@IONetwork@Outpop@@QAE@AAUChannel_Config@12@AAUIO_Channel_Config@12@@Z
 * func-address: 0x1002cbf0
 * callers: 0x10026cd0, 0x100372d0
 * callees: 0x10004f50, 0x10007400, 0x100231a0, 0x100327f0, 0x1003c620
 */

Outpop::IONetwork::Dgram_Channel *__thiscall Outpop::IONetwork::Dgram_Channel::Dgram_Channel(
        Outpop::IONetwork::Dgram_Channel *this,
        struct Outpop::IONetwork::Channel_Config *a2,
        struct in_addr *a3)
{
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // edi
  char *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  wchar_t *tm; // [esp+8h] [ebp-48h]
  int v22; // [esp+8h] [ebp-48h]
  Outpop::Utility::Ref_Object *v23; // [esp+20h] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object *v24; // [esp+24h] [ebp-2Ch] BYREF
  Outpop::Utility::Lock *v25; // [esp+28h] [ebp-28h]
  Outpop::IONetwork::Dgram_Channel *v26; // [esp+2Ch] [ebp-24h]
  char *v27; // [esp+30h] [ebp-20h]
  _BYTE v28[8]; // [esp+34h] [ebp-1Ch] BYREF
  _BYTE v29[8]; // [esp+3Ch] [ebp-14h] BYREF
  int v30; // [esp+4Ch] [ebp-4h]

  v26 = this;
  Outpop::IONetwork::Channel::Channel(this);
  v30 = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Channel::`vftable';
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_WORD *)this + 96) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 215) = 1;
  *((_BYTE *)this + 216) = 1;
  Outpop::IONetwork::Comminute_Container::Comminute_Container((Outpop::IONetwork::Dgram_Channel *)((char *)this + 220));
  sub_100327F0((char *)this + 288, this);
  Outpop::IONetwork::Sequence_Container::Sequence_Container((Outpop::IONetwork::Dgram_Channel *)((char *)this + 444));
  *((_BYTE *)this + 620) = 0;
  *((_DWORD *)this + 157) = 0;
  *((_BYTE *)this + 640) = 0;
  v27 = (char *)this + 644;
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 163) = 0;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 165) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Dgram_Channel *)((char *)this + 664));
  LOBYTE(v30) = 7;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v25 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v25);
    LOBYTE(v30) = 8;
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
    v22 = ntohs(a3[12].S_un.S_un_w.s_w2);
    v10 = inet_ntoa(a3[13]);
    sub_10007400(0xFFFF - v9, &log_buffer[v9], L"Dgram_Channel::Dgram_Channel ip is %S,port is %d", v10, v22);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    LOBYTE(v30) = 7;
    Outpop::Utility::Lock::unlock(v25);
  }
  *((_DWORD *)this + 172) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 156) = 0;
  *((_DWORD *)this + 159) = 0;
  v12 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v28);
  LOBYTE(v30) = 9;
  *((_DWORD *)this + 41) = *v12;
  *((_DWORD *)this + 42) = v12[1];
  LOBYTE(v30) = 7;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v28);
  *((_WORD *)this + 101) = 0;
  *((_WORD *)this + 102) = 0;
  *((_WORD *)this + 103) = 0;
  *((_WORD *)this + 104) = 0;
  *((_WORD *)this + 105) = 0;
  *((_WORD *)this + 106) = 0;
  qmemcpy((char *)this + 8, a2, 0x2Cu);
  *((struct in_addr *)this + 31) = a3[1];
  v13 = (_DWORD *)(*(int (__thiscall **)(struct in_addr *))(a3[9].S_un.S_addr + 16))(a3 + 9);
  v14 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 20) + 16))((char *)this + 80);
  *v14 = *v13;
  v14[1] = v13[1];
  v14[2] = v13[2];
  v14[3] = v13[3];
  v15 = (_DWORD *)(*(int (__thiscall **)(struct in_addr *))(a3[2].S_un.S_addr + 16))(a3 + 2);
  v16 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 13) + 16))((char *)this + 52);
  *v16 = *v15;
  v16[1] = v15[1];
  v16[2] = v15[2];
  v16[3] = v15[3];
  *((struct in_addr *)this + 40) = a3[17];
  v17 = *((_DWORD *)this + 9);
  *((_BYTE *)this + 200) = a3[18].S_un.S_un_b.s_b1;
  *((struct in_addr *)this + 45) = a3[16];
  v24 = 0;
  LOBYTE(v30) = 10;
  v18 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v29, 0, 1000 * v17);
  LOBYTE(v30) = 11;
  v23 = this;
  Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v30) = 12;
  v19 = Outpop::Utility::Timer_Queue::instance(&v23, v18, &v24, 0, 0);
  *((_DWORD *)this + 158) = Outpop::Utility::Timer_Queue::schedule_repeating_timer(v19);
  LOBYTE(v30) = 11;
  if ( v23 )
    Outpop::Utility::Ref_Object::release(v23);
  LOBYTE(v30) = 10;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v29);
  LOBYTE(v30) = 7;
  if ( v24 )
    Outpop::Utility::Ref_Object::release(v24);
  return this;
}
