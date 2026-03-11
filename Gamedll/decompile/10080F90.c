/*
 * func-name: ?SetTransform@Effect_Laser@@UAEXABVMatrix@@@Z_0
 * func-address: 0x10080f90
 * callers: 0x100062b2
 * callees: 0x10007b8f, 0x10015e01, 0x102c1be0, 0x102c23d0
 */

void __thiscall Effect_Laser::SetTransform(Laser **this, const struct Matrix *a2)
{
  Laser *v3; // edi
  float v4; // [esp+8h] [ebp-64h] BYREF
  float v5; // [esp+Ch] [ebp-60h]
  float v6; // [esp+10h] [ebp-5Ch]
  float v7[3]; // [esp+14h] [ebp-58h] BYREF
  float v8[3]; // [esp+20h] [ebp-4Ch] BYREF
  _BYTE v9[64]; // [esp+2Ch] [ebp-40h] BYREF

  Effect_Base::SetTransform((Effect_Base *)this, a2);
  v3 = this[263];
  if ( v3 )
  {
    sub_102C23D0(v9);
    v4 = 0.0;
    v5 = 0.0;
    v6 = 0.0;
    sub_102C1BE0(this + 270, &v4);
    v7[0] = *((float *)this + 214) + v4;
    v7[1] = *((float *)this + 215) + v5;
    v7[2] = *((float *)this + 216) + v6;
    v8[0] = *((float *)this + 267) + *((float *)this + 214);
    v8[1] = *((float *)this + 268) + *((float *)this + 215);
    v8[2] = *((float *)this + 269) + *((float *)this + 216);
    Laser::SetEndPoints(v3, (struct Vector *)v8, (struct Vector *)v7);
  }
}
