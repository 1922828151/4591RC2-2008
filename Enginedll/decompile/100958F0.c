/*
 * func-name: ?Update@Engine@@QAEXPAVCamera@@@Z
 * func-address: 0x100958f0
 * callers: 0x1008ce00
 * callees: 0x10054c00, 0x1007e380, 0x1007e3d0, 0x1007e540, 0x1007e670, 0x100dad30, 0x100e2550, 0x10116f70, 0x101189f0, 0x1016ed30, 0x10173030
 */

void __thiscall Engine::Update(Engine *this, struct Camera *a2)
{
  CRETimer *v3; // eax
  CRETimer *v4; // eax
  CRETimer *v5; // eax
  double v6; // st7
  LARGE_INTEGER *v7; // eax
  struct Input *v8; // eax
  struct RenderDevice *v9; // eax
  CRETimer *v10; // eax
  LARGE_INTEGER *v11; // eax
  struct AudioDevice *v12; // eax
  CRETimer *v13; // eax
  LARGE_INTEGER *v14; // eax
  struct EventAttemper *v15; // eax
  CRETimer *v16; // eax
  LARGE_INTEGER *v17; // eax
  CRETimer *v18; // eax
  float dwMilliseconds; // [esp+48h] [ebp-Ch]
  float dwMilliseconds_4d; // [esp+4Ch] [ebp-8h]
  double dwMilliseconds_4e; // [esp+4Ch] [ebp-8h]
  float dwMilliseconds_4; // [esp+4Ch] [ebp-8h]
  double dwMilliseconds_4f; // [esp+4Ch] [ebp-8h]
  float dwMilliseconds_4a; // [esp+4Ch] [ebp-8h]
  double dwMilliseconds_4g; // [esp+4Ch] [ebp-8h]
  float dwMilliseconds_4b; // [esp+4Ch] [ebp-8h]
  double dwMilliseconds_4h; // [esp+4Ch] [ebp-8h]
  float dwMilliseconds_4c; // [esp+4Ch] [ebp-8h]

  if ( *((_BYTE *)this + 8) )
  {
    v3 = REGetGlobalTimer();
    dwMilliseconds = CRETimer::GetAbsoluteTime(v3) - GSeconds;
    if ( *((float *)this + 3) > (double)dwMilliseconds )
      Sleep((__int64)((*((float *)this + 3) - dwMilliseconds) * 1000.0));
  }
  v4 = REGetGlobalTimer();
  GSeconds = CRETimer::GetAbsoluteTime(v4) + *((double *)this + 13);
  v5 = REGetGlobalTimer();
  dwMilliseconds_4d = CRETimer::GetAbsoluteTime(v5);
  GDeltaTime = dwMilliseconds_4d - flt_1028784C;
  flt_1028784C = dwMilliseconds_4d;
  v6 = GDeltaTime;
  if ( GDeltaTime < 0.0 )
  {
    LogPrintf("I'm very fast!!!");
    ++*((_DWORD *)this + 37);
    v6 = GDeltaTime;
  }
  if ( v6 <= 0.2000000029802322 )
  {
    if ( v6 < 0.001 )
      GDeltaTime = 0.001;
  }
  else
  {
    GDeltaTime = 0.2;
  }
  v7 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v7);
  v8 = Input::Instance();
  (*(void (__thiscall **)(struct Input *))(*(_DWORD *)v8 + 8))(v8);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, struct Camera *))(*(_DWORD *)v9 + 32))(v9, a2);
  v10 = REGetGlobalTimer();
  dwMilliseconds_4e = CRETimer::StopMiniTimer(v10);
  dwMilliseconds_4 = dwMilliseconds_4e / (double)*((int *)Profiler::Get() + 16);
  if ( dwMilliseconds_4 > 2.0 )
    LogPrintf("soundElesp: %.2f", dwMilliseconds_4);
  v11 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v11);
  v12 = AudioDevice::Instance();
  (*(void (__thiscall **)(struct AudioDevice *, struct Camera *))(*(_DWORD *)v12 + 32))(v12, a2);
  v13 = REGetGlobalTimer();
  dwMilliseconds_4f = CRETimer::StopMiniTimer(v13);
  dwMilliseconds_4a = dwMilliseconds_4f / (double)*((int *)Profiler::Get() + 16);
  if ( dwMilliseconds_4a > 2.0 )
    LogPrintf("AudioElesp: %.2f", dwMilliseconds_4a);
  v14 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v14);
  v15 = EventAttemper::Instance();
  (*(void (__thiscall **)(struct EventAttemper *, _DWORD))(*(_DWORD *)v15 + 8))(v15, LODWORD(GDeltaTime));
  v16 = REGetGlobalTimer();
  dwMilliseconds_4g = CRETimer::StopMiniTimer(v16);
  dwMilliseconds_4b = dwMilliseconds_4g / (double)*((int *)Profiler::Get() + 16);
  if ( dwMilliseconds_4b > 2.0 )
    LogPrintf("eventElesp: %.2f", dwMilliseconds_4b);
  v17 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v17);
  AsyncLoader::Update(AsyncLoader::s_pInstance, GDeltaTime);
  v18 = REGetGlobalTimer();
  dwMilliseconds_4h = CRETimer::StopMiniTimer(v18);
  dwMilliseconds_4c = dwMilliseconds_4h / (double)*((int *)Profiler::Get() + 16);
  if ( dwMilliseconds_4c > 2.0 )
    LogPrintf("asyncElesp: %.2f", dwMilliseconds_4c);
  if ( flt_10287848 > 1.0 )
    flt_10287848 = 0.0;
  flt_10287848 = flt_10287848 + GDeltaTime;
}
