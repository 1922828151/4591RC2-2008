/*
 * func-name: ?SetScale@Effect_DynamicLasers@@UAEXM@Z_0
 * func-address: 0x1007f3a0
 * callers: 0x10012e68
 * callees: 0x100134d5
 */

void __thiscall Effect_DynamicLasers::SetScale(Effect_DynamicLasers *this, float a2)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]

  v2 = a2;
  v4 = *((float *)this + 285) * a2;
  *(float *)(*((_DWORD *)this + 263) + 232) = v4;
  v3 = v2;
  Effect_Base::SetScale(this, v3);
}
