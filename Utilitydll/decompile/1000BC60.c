/*
 * func-name: ??0Event_Base@Utility@Outpop@@QAE@_N0PB_W@Z
 * func-address: 0x1000bc60
 * callers: 0x1000bf90, 0x1000c0e0
 * callees: 0x100023b0, 0x100023e0, 0x10002410, 0x10005380, 0x1000cd90, 0x10016850
 */

Outpop::Utility::Event_Base *__thiscall Outpop::Utility::Event_Base::Event_Base(
        Outpop::Utility::Event_Base *this,
        bool a2,
        bool a3,
        const wchar_t *lpName)
{
  HANDLE EventW; // eax
  struct _RTL_CRITICAL_SECTION *v6; // ebp
  struct Outpop::Utility::Logger *v7; // eax
  wchar_t *v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // edi
  DWORD LastError; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *tm; // [esp-4h] [ebp-24h]

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  EventW = CreateEventW(0, a2, a3, lpName);
  *(_DWORD *)this = EventW;
  if ( !EventW
    && (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
     || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
    && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
    EnterCriticalSection(v6);
    v7 = Outpop::Utility::Logger::instance();
    v8 = *(wchar_t **)sub_10005380((int)v7);
    v9 = Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v9);
    v10 = Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v10);
    v12 = sub_1000CD90(v8, L"\nLOGINFO %s:%s Message:", dt, tm);
    LastError = GetLastError();
    sub_1000CD90(&v8[v12], L"Event_Base construct function CreateEventW event faled,errcode is :%d", LastError);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v8);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v14 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v14, v8);
    }
    LeaveCriticalSection(v6);
  }
  return this;
}
