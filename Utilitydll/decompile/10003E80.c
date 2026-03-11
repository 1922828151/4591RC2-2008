/*
 * func-name: ??0Timer_Queue@Utility@Outpop@@QAE@XZ
 * func-address: 0x10003e80
 * callers: 0x100040d0
 * callees: 0x100023b0, 0x100023e0, 0x10002410, 0x10005380, 0x10006b60, 0x1000bb00, 0x1000cd90, 0x1000cdb0, 0x10016850
 */

Outpop::Utility::Timer_Queue *__thiscall Outpop::Utility::Timer_Queue::Timer_Queue(Outpop::Utility::Timer_Queue *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // ebp
  wchar_t *v3; // edi
  Outpop::Utility::Logger *v4; // eax
  Outpop::Utility::Logger *v5; // eax
  wchar_t *dt; // eax
  int v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *tm; // [esp-4h] [ebp-30h]
  char v11; // [esp+17h] [ebp-15h] BYREF
  Outpop::Utility::Timer_Queue *v12; // [esp+18h] [ebp-14h]
  struct _RTL_CRITICAL_SECTION *v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+28h] [ebp-4h]

  v12 = this;
  Outpop::Utility::Task::Task(this);
  v14 = 0;
  *(_DWORD *)this = &Outpop::Utility::Timer_Queue::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 76));
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((char *)this + 76), 0xAu);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  Outpop::Utility::Event_Base::Event_Base((Outpop::Utility::Timer_Queue *)((char *)this + 120), 0, 0, 0);
  LOBYTE(v14) = 5;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  sub_10006B60((char *)this + 136, &v11);
  LOBYTE(v14) = 7;
  if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
     || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
    && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
    v13 = v2;
    EnterCriticalSection(v2);
    LOBYTE(v14) = 8;
    Outpop::Utility::Logger::instance();
    v3 = *(wchar_t **)sub_10005380();
    v4 = Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v4);
    v5 = Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v5);
    v7 = sub_1000CD90(v3, L"\nLOGINFO %s:%s Message:", dt, tm);
    sub_1000CD90(&v3[v7], L"Timer queue create...");
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v3);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v8 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v8, v3);
    }
    LOBYTE(v14) = 7;
    LeaveCriticalSection(v2);
  }
  *((_BYTE *)this + 132) = 1;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  return this;
}
