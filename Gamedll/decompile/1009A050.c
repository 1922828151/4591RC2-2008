/*
 * func-name: ?Tick@Effect_TraceLineSystem@@UAEXXZ_0
 * func-address: 0x1009a050
 * callers: 0x10016e46
 * callees: 0x102c0ed0
 */

void __thiscall Effect_TraceLineSystem::Tick(Effect_TraceLineSystem *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*((_DWORD *)this + 270) + 20);
  *v2 = *((_DWORD *)this + 214);
  v2[1] = *((_DWORD *)this + 215);
  v2[2] = *((_DWORD *)this + 216);
  v3 = (_DWORD *)sub_102C0ED0(v5);
  v4 = (_DWORD *)(*((_DWORD *)this + 270) + 216);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  Actor::Tick(this);
}
