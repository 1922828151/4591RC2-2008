/*
 * func-name: ??1TraceLineSystem@@UAE@XZ_0
 * func-address: 0x100cd530
 * callers: 0x100162de
 * callees: 0x10010a1e, 0x102c9d50
 */

void __thiscall TraceLineSystem::~TraceLineSystem(TraceLineSystem *this)
{
  void **v2; // esi
  int v3; // eax

  v2 = (void **)((char *)this + 176);
  *(_DWORD *)this = &TraceLineSystem::`vftable';
  v3 = *((_DWORD *)this + 45);
  if ( v3 )
  {
    sub_10010A1E(v3, *((_DWORD *)this + 46));
    operator delete(v2[1]);
  }
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  FXSystem::~FXSystem(this);
}
