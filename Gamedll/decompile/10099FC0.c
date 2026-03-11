/*
 * func-name: ??1Effect_TraceLineSystem@@UAE@XZ_0
 * func-address: 0x10099fc0
 * callers: 0x1001004b
 * callees: none
 */

void __thiscall Effect_TraceLineSystem::~Effect_TraceLineSystem(Effect_TraceLineSystem *this)
{
  *(_DWORD *)this = &Effect_TraceLineSystem::`vftable';
  *(float *)(*((_DWORD *)this + 270) + 108) = 0.0;
  Precacher::PurgeModel((struct Model **)this + 179);
  std::string::~string((char *)this + 1052);
  Actor::~Actor(this);
}
