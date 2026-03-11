/*
 * func-name: ?SetStartEnd@Effect_Laser@@UAEXAAVVector@@0@Z_0
 * func-address: 0x10080eb0
 * callers: 0x100097eb
 * callees: 0x100055fb, 0x10007b8f, 0x102c1be0, 0x102c23d0
 */

void __thiscall Effect_Laser::SetStartEnd(Laser **this, struct Vector *a2, struct Vector *a3)
{
  Laser *v4; // edi
  float v5; // [esp+4h] [ebp-64h] BYREF
  float v6; // [esp+8h] [ebp-60h]
  float v7; // [esp+Ch] [ebp-5Ch]
  float v8[3]; // [esp+10h] [ebp-58h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  _BYTE v10[64]; // [esp+28h] [ebp-40h] BYREF

  if ( !*((_BYTE *)this + 1156) )
  {
    Effect_Base::SetStartEnd((Effect_Base *)this, a2, a3);
    v4 = this[263];
    if ( v4 )
    {
      sub_102C23D0(v10);
      v5 = 0.0;
      v6 = 0.0;
      v7 = 0.0;
      sub_102C1BE0(this + 270, &v5);
      v8[0] = *((float *)this + 214) + v5;
      v8[1] = *((float *)this + 215) + v6;
      v8[2] = *((float *)this + 216) + v7;
      v9[0] = *((float *)this + 267) + *((float *)this + 214);
      v9[1] = *((float *)this + 268) + *((float *)this + 215);
      v9[2] = *((float *)this + 269) + *((float *)this + 216);
      Laser::SetEndPoints(v4, (struct Vector *)v9, (struct Vector *)v8);
    }
  }
}
