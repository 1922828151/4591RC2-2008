/*
 * func-name: ?Update@Profiler@@QAEXXZ
 * func-address: 0x10001b30
 * callers: none
 * callees: 0x101a251c
 */

void __thiscall Profiler::Update(Profiler *this)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // edi
  float v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  if ( (double)*((int *)this + 16) * GDeltaTime > 0.5 )
  {
    v5 = *((float *)this + 33);
    v2 = *((_DWORD *)this + 41);
    v3 = *((_DWORD *)this + 42);
    v4 = *((_DWORD *)this + 40);
    v6 = *((_DWORD *)this + 43);
    memset(this, 0, 0xB0u);
    *((float *)this + 33) = v5;
    *((_DWORD *)this + 40) = v4;
    *((_DWORD *)this + 42) = v3;
    *((_DWORD *)this + 41) = v2;
    *((_DWORD *)this + 43) = v6;
    *((_DWORD *)this + 16) = 0;
  }
  ++*((_DWORD *)this + 16);
  *((float *)this + 35) = GDeltaTime * 1000.0 + *((float *)this + 35);
}
