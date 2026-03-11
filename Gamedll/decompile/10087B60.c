/*
 * func-name: ?SetTransform@Effect_LightBeam@@UAEXABVMatrix@@@Z_0
 * func-address: 0x10087b60
 * callers: 0x10019e25
 * callees: 0x10010e33, 0x10015e01, 0x102c0ed0
 */

void __thiscall Effect_LightBeam::SetTransform(LightBeam **this, const struct Matrix *a2)
{
  LightBeam *v3; // edi
  struct Vector *v4; // eax
  _BYTE v5[12]; // [esp+8h] [ebp-Ch] BYREF

  Effect_Base::SetTransform((Effect_Base *)this, a2);
  v3 = this[263];
  if ( v3 )
  {
    v4 = (struct Vector *)sub_102C0ED0(v5);
    LightBeam::setPosDir(v3, (struct Vector *)(this + 214), v4);
  }
}
