/*
 * func-name: ?EnableFramerateCap@Engine@@QAEXM@Z
 * func-address: 0x100958c0
 * callers: none
 * callees: none
 */

void __thiscall Engine::EnableFramerateCap(Engine *this, float a2)
{
  *((_BYTE *)this + 8) = 1;
  *((float *)this + 3) = 1.0 / a2;
}
