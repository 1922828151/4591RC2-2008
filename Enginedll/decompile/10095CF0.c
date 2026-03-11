/*
 * func-name: ??1FuncTimer@@QAE@XZ
 * func-address: 0x10095cf0
 * callers: 0x10174aa0
 * callees: 0x1007e3d0, 0x1007e670, 0x100e2550
 */

void __thiscall FuncTimer::~FuncTimer(FuncTimer *this)
{
  CRETimer *v2; // eax
  const char *v3; // eax
  float v4; // [esp+Ch] [ebp-14h]

  v2 = REGetGlobalTimer();
  v4 = CRETimer::StopMiniTimer(v2);
  v3 = (const char *)std::string::c_str(this);
  LogPrintf("%s spend %.3f", v3, v4);
  std::string::~string(this);
}
