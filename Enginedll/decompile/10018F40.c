/*
 * func-name: ?SetCurrentState@Light@@QAEXAAVLightState@@@Z
 * func-address: 0x10018f40
 * callers: none
 * callees: none
 */

void __thiscall Light::SetCurrentState(Light *this, struct LightState *a2)
{
  qmemcpy((char *)this + 1076, a2, 0x48u);
}
