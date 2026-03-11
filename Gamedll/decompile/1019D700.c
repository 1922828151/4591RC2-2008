/*
 * func-name: ?Update@ControlledEstab@GameClient@@UAEXM@Z_0
 * func-address: 0x1019d700
 * callers: 0x10010807
 * callees: 0x1000194c, 0x1000236f, 0x10003e2c, 0x10007ff9, 0x10008d4b, 0x1000bf05, 0x1000ea57, 0x1000f687, 0x1000fab0, 0x10016324, 0x10018165
 */

void __thiscall GameClient::ControlledEstab::Update(GameClient::ControlledEstab *this, float a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int i; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int (__thiscall *v15)(char *, _BYTE *); // eax
  float *v16; // eax
  int v17; // ecx
  double v18; // st7
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  unsigned int v22; // edi
  int j; // ebx
  int v24; // eax
  int v25; // eax
  double v26; // st6
  int v27; // eax
  int v28[12]; // [esp-10h] [ebp-80h] BYREF
  float v29; // [esp+20h] [ebp-50h]
  float v30; // [esp+24h] [ebp-4Ch]
  float v31; // [esp+28h] [ebp-48h]
  float v32; // [esp+2Ch] [ebp-44h]
  float v33; // [esp+34h] [ebp-3Ch]
  _BYTE v34[12]; // [esp+3Ch] [ebp-34h] BYREF
  _BYTE v35[28]; // [esp+48h] [ebp-28h] BYREF
  float v36; // [esp+6Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 116);
  if ( v3 )
  {
    if ( v3 != 1 )
      goto LABEL_7;
    v4 = *((_DWORD *)this + 118);
  }
  else
  {
    v4 = *((_DWORD *)this + 117);
  }
  if ( v4 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 16))(LODWORD(a2));
LABEL_7:
  GameClient::ControlledEstab::_updateEngineSound(this);
  if ( *((_DWORD *)this + 75) )
  {
    v5 = sub_1000194C(0);
    if ( v5 && *(_DWORD *)(v5 + 48) == *((_DWORD *)this + 27) )
    {
      std::string::string(v35, &unk_1031544D);
      v36 = 0.0;
      sub_10018165((int)v35);
      v36 = NAN;
      std::string::~string(v35);
      v6 = *((_DWORD *)this + 39);
      if ( v6 )
        v6 = (*((_DWORD *)this + 40) - v6) / 20;
      sub_1000236F(v6);
      v7 = 0;
      for ( i = 0; ; i += 20 )
      {
        v9 = *((_DWORD *)this + 39);
        if ( !v9 || v7 >= (*((_DWORD *)this + 40) - v9) / 20 )
          break;
        v10 = *((_DWORD *)this + 39);
        if ( !v10 || v7 >= (*((_DWORD *)this + 40) - v10) / 20 )
          _invalid_parameter_noinfo();
        v11 = *(_DWORD *)(*((_DWORD *)this + 39) + i);
        v29 = COERCE_FLOAT(v28);
        GameClient::DamageManager::GetArmorProg(v28, v11);
        sub_10008D4B(v7, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6]);
        v12 = *((_DWORD *)this + 39);
        if ( !v12 || v7 >= (*((_DWORD *)this + 40) - v12) / 20 )
          _invalid_parameter_noinfo();
        v13 = *((_DWORD *)this + 39);
        v14 = i + v13;
        if ( !v13 || v7 >= (*((_DWORD *)this + 40) - v13) / 20 )
          _invalid_parameter_noinfo();
        v29 = *(float *)(v14 + 8) / (double)*(int *)(i + *((_DWORD *)this + 39) + 4);
        sub_1000FAB0(v7++, v29);
      }
      *(_BYTE *)(*((_DWORD *)this + 75) + 1261) = 1;
    }
    else
    {
      *(_BYTE *)(*((_DWORD *)this + 75) + 1261) = 0;
    }
    v15 = *(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8);
    v33 = *(float *)(*((_DWORD *)this + 75) + 800);
    v16 = (float *)v15((char *)this + 148, v34);
    v17 = *((_DWORD *)this + 75);
    v30 = *v16 + 0.0;
    v31 = v16[1] + v33;
    v18 = v16[2] + 0.0;
    v19 = *(float **)(v17 + 1268);
    v20 = v31;
    *v19 = v30;
    v32 = v18;
    v21 = v32;
    v19[1] = v20;
    v19[2] = v21;
  }
  GameClient::Establishment::Update(this, a2);
  if ( *((_DWORD *)this + 114) )
  {
    v22 = 0;
    for ( j = 0; ; j += 120 )
    {
      v24 = *((_DWORD *)this + 129);
      if ( !v24 || v22 >= (*((_DWORD *)this + 130) - v24) / 120 )
        break;
      v25 = *((_DWORD *)this + 129);
      if ( !v25 || v22 >= (*((_DWORD *)this + 130) - v25) / 120 )
        _invalid_parameter_noinfo();
      if ( sub_1000BF05() )
      {
        if ( *(float *)(*((_DWORD *)this + 114) + 188) <= 1.0 )
          v26 = *((float *)this + 132) - GDeltaTime;
        else
          v26 = GDeltaTime + *((float *)this + 132);
        *((float *)this + 132) = v26;
        if ( *((float *)this + 132) > 1.0 )
          *((float *)this + 132) = 1.0;
        if ( *((float *)this + 132) < 0.0 )
          *((float *)this + 132) = 0.0;
        sub_1000EA57(*((float *)this + 132));
        v27 = *((_DWORD *)this + 129);
        if ( !v27 || v22 >= (*((_DWORD *)this + 130) - v27) / 120 )
          _invalid_parameter_noinfo();
        sub_10003E2C();
      }
      ++v22;
    }
  }
}
