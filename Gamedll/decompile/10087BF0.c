/*
 * func-name: ?DeserializationComplete@Effect_LightBeam@@UAEXXZ_0
 * func-address: 0x10087bf0
 * callers: 0x10004395
 * callees: 0x100044b7, 0x10005646, 0x1001a875, 0x102c9d98
 */

void __thiscall Effect_LightBeam::DeserializationComplete(Effect_LightBeam *this)
{
  void *v2; // eax
  LightBeam *v3; // edi
  int v4; // eax
  double v5; // st7
  float v6; // edx
  struct World *v7; // ecx
  struct Texture *v8; // eax
  LightBeam *v9; // eax
  _BYTE v10[8]; // [esp-8h] [ebp-38h] BYREF
  float v11; // [esp+Ch] [ebp-24h]
  unsigned int v12; // [esp+10h] [ebp-20h]
  LightBeam *v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-4h]

  v2 = (void *)(*((_DWORD *)this + 295) + 100);
  v13 = (LightBeam *)v10;
  std::string::string(v10, v2);
  Precacher::UpdateTexture(*((_DWORD *)this + 295));
  if ( !*((_DWORD *)this + 263) )
  {
    v3 = (LightBeam *)operator new(0x134u);
    v13 = v3;
    v14 = 0;
    if ( v3 )
    {
      v4 = sub_10005646();
      v5 = *((float *)this + 289);
      v6 = *((float *)this + 284);
      v7 = (struct World *)*((_DWORD *)this + 178);
      v12 = v4;
      v8 = (struct Texture *)*((_DWORD *)this + 295);
      v11 = v5;
      v9 = LightBeam::LightBeam(
             v3,
             v7,
             v8,
             v6,
             *((float *)this + 285),
             *((float *)this + 287),
             *((float *)this + 288),
             v11,
             v12);
    }
    else
    {
      v9 = 0;
    }
    v14 = -1;
    *((_DWORD *)this + 263) = v9;
    *((_BYTE *)this + 724) = 0;
  }
  Effect_Base::DeserializationComplete(this);
}
