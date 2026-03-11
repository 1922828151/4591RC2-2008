/*
 * func-name: ?DeserializationComplete@Effect_LightDizzy@@UAEXXZ_0
 * func-address: 0x1008a200
 * callers: 0x10006294
 * callees: 0x10004200
 */

void __thiscall Effect_LightDizzy::DeserializationComplete(Effect_LightDizzy *this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  float v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  Actor::DeserializationComplete(this);
  Effect_LightDizzy::Refresh(this);
  v2 = -*((float *)this + 282);
  *((_BYTE *)this + 724) = 0;
  v6 = v2;
  v3 = *((float *)this + 282);
  *((float *)this + 196) = v6;
  v7 = v3;
  v4 = *((float *)this + 282);
  *((float *)this + 197) = v6;
  v8 = v4;
  v5 = *((float *)this + 282);
  *((float *)this + 198) = v6;
  *((float *)this + 199) = v7;
  v9 = v5;
  *((float *)this + 200) = v8;
  *((float *)this + 201) = v9;
}
