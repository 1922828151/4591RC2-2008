/*
 * func-name: ??0SamplePlayer@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100e7070
 * callers: 0x100192ef
 * callees: 0x1000842c, 0x10010587, 0x100198ad, 0x102c9d98
 */

SamplePlayer *__thiscall SamplePlayer::SamplePlayer(SamplePlayer *this, struct World *a2)
{
  double v3; // st6
  double v4; // st6
  double v5; // st6
  double v6; // st6
  Light *v7; // eax
  Light *v8; // edi
  double v9; // st7
  struct World *v10; // edx
  SampleWeapon *v11; // eax
  SampleWeapon *v12; // eax
  int v13; // eax
  int ControlHandle; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD v33[6]; // [esp+B4h] [ebp-74h] BYREF
  const char *v34; // [esp+CCh] [ebp-5Ch]
  int v35; // [esp+D0h] [ebp-58h] BYREF
  float v36; // [esp+D4h] [ebp-54h]
  float v37; // [esp+D8h] [ebp-50h]
  float v38; // [esp+DCh] [ebp-4Ch]
  float v39; // [esp+E0h] [ebp-48h]
  float v40; // [esp+E4h] [ebp-44h]
  unsigned int v41; // [esp+E8h] [ebp-40h]
  float v42; // [esp+100h] [ebp-28h]
  float v43; // [esp+104h] [ebp-24h]
  SamplePlayer *v44; // [esp+108h] [ebp-20h]
  float v45; // [esp+10Ch] [ebp-1Ch] BYREF
  float v46; // [esp+110h] [ebp-18h]
  float v47; // [esp+114h] [ebp-14h]
  float v48; // [esp+118h] [ebp-10h]
  int v49; // [esp+124h] [ebp-4h]
  float v50; // [esp+12Ch] [ebp+4h]

  v44 = this;
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SamplePlayer::`vftable';
  *((float *)this + 263) = 0.0;
  *((float *)this + 264) = 0.0;
  *((float *)this + 265) = 0.0;
  *((_BYTE *)this + 1009) = 1;
  v3 = *((float *)this + 214);
  v41 = 1456;
  v49 = 0;
  v50 = v3 + 0.0;
  v42 = *((float *)this + 215) + 1.799999952316284;
  v4 = *((float *)this + 216) + 0.0;
  *((_BYTE *)this + 1064) = 1;
  *((_BYTE *)this + 1065) = 0;
  *((_BYTE *)this + 1066) = 0;
  v43 = v4;
  *((_DWORD *)this + 267) = 1;
  *((_DWORD *)this + 182) = 0;
  v5 = v42;
  *((float *)this + 263) = v50;
  v46 = v5;
  v6 = v43;
  *((float *)this + 264) = v46;
  v47 = v6;
  *((float *)this + 265) = v47;
  *((float *)this + 196) = -0.25;
  *((float *)this + 197) = 0.0;
  *((float *)this + 198) = -0.44999999;
  v45 = 0.25;
  *((float *)this + 199) = 0.25;
  v46 = 2.0;
  *((float *)this + 200) = 2.0;
  v47 = 0.44999999;
  *((float *)this + 201) = 0.44999999;
  *((_DWORD *)this + 62) = 2;
  v7 = (Light *)operator new(v41);
  v8 = v7;
  v9 = 1.0;
  LOBYTE(v49) = 1;
  if ( v7 )
  {
    v10 = (struct World *)*((_DWORD *)this + 178);
    v45 = 0.60000002;
    v46 = 0.60000002;
    v47 = 0.60000002;
    v48 = 1.0;
    Light::Light(v7, v10, (const struct FloatColor *)&v45, 50.0);
    v9 = 1.0;
    *(_DWORD *)v8 = &Light::`vftable';
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v49) = 0;
  *((_DWORD *)this + 268) = v8;
  if ( v8 )
  {
    v41 = 0;
    v40 = 0.0;
    *((_DWORD *)v8 + 357) = 2;
    v39 = v9;
    v38 = v39;
    v37 = 0.0;
    v36 = 0.0;
    v35 = 0;
    std::string::string(v33, "flashlight.dds");
    Texture::Load(
      *((_DWORD *)this + 268) + 1264,
      v33[0],
      v33[1],
      v33[2],
      v33[3],
      v33[4],
      v33[5],
      v34,
      v35,
      LODWORD(v36),
      LODWORD(v37),
      LODWORD(v38),
      LODWORD(v39),
      LODWORD(v40),
      v41);
    *((float *)Light::GetCurrentState(*((Light **)this + 268)) + 17) = 30.0;
    *((float *)Light::GetCurrentState(*((Light **)this + 268)) + 16) = 35.0;
    *((float *)Light::GetCurrentState(*((Light **)this + 268)) + 4) = 0.0;
  }
  v11 = (SampleWeapon *)operator new(0x450u);
  LOBYTE(v49) = 2;
  if ( v11 )
    v12 = SampleWeapon::SampleWeapon(v11, *((struct World **)this + 178));
  else
    v12 = 0;
  LOBYTE(v49) = 0;
  *((_DWORD *)this + 269) = v12;
  if ( v12 )
  {
    *((_BYTE *)v12 + 724) = 1;
    *(_DWORD *)(*((_DWORD *)this + 269) + 1052) = this;
    SampleWeapon::LoadResource(*((SampleWeapon **)this + 269));
  }
  std::string::string(&v35, "walk_forwards");
  LOBYTE(v49) = 3;
  v13 = Input::Instance(v35);
  ControlHandle = Input::GetControlHandle(v13);
  v34 = "walk_backwards";
  *((_DWORD *)this + 271) = ControlHandle;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 4;
  v15 = Input::Instance(v35);
  v16 = Input::GetControlHandle(v15);
  v34 = "strafe_left";
  *((_DWORD *)this + 272) = v16;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 5;
  v17 = Input::Instance(v35);
  v18 = Input::GetControlHandle(v17);
  v34 = "strafe_right";
  *((_DWORD *)this + 273) = v18;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 6;
  v19 = Input::Instance(v35);
  v20 = Input::GetControlHandle(v19);
  v34 = "squat";
  *((_DWORD *)this + 274) = v20;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 7;
  v21 = Input::Instance(v35);
  v22 = Input::GetControlHandle(v21);
  v34 = "jump";
  *((_DWORD *)this + 275) = v22;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 8;
  v23 = Input::Instance(v35);
  v24 = Input::GetControlHandle(v23);
  v34 = "changeview";
  *((_DWORD *)this + 276) = v24;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 9;
  v25 = Input::Instance(v35);
  v26 = Input::GetControlHandle(v25);
  v34 = "light";
  *((_DWORD *)this + 277) = v26;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 10;
  v27 = Input::Instance(v35);
  v28 = Input::GetControlHandle(v27);
  v34 = "fire";
  *((_DWORD *)this + 278) = v28;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 11;
  v29 = Input::Instance(v35);
  v30 = Input::GetControlHandle(v29);
  v34 = "altfire";
  *((_DWORD *)this + 279) = v30;
  std::string::string(&v35, v34);
  LOBYTE(v49) = 12;
  v31 = Input::Instance(v35);
  *((_DWORD *)this + 280) = Input::GetControlHandle(v31);
  *((_DWORD *)this + 281) = -1;
  *((_DWORD *)this + 282) = -1;
  *((_DWORD *)this + 283) = -1;
  *((_DWORD *)this + 284) = -1;
  *((_DWORD *)this + 285) = -1;
  *((_DWORD *)this + 286) = -1;
  *((_DWORD *)this + 287) = -1;
  *((_DWORD *)this + 288) = -1;
  *((_DWORD *)this + 289) = -1;
  *((_DWORD *)this + 290) = -1;
  *((_DWORD *)this + 291) = -1;
  *((_DWORD *)this + 292) = -1;
  SamplePlayer::LoadResource(this);
  return this;
}
