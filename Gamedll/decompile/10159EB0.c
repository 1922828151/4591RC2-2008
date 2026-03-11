/*
 * func-name: ?Update@Equip@GameClient@@UAEXM@Z_0
 * func-address: 0x10159eb0
 * callers: 0x1000f85d
 * callees: 0x10003f2b, 0x10004da4, 0x10006a19, 0x10008062, 0x100081c5, 0x1000bf05, 0x1000f1ff, 0x10010519, 0x10012deb, 0x1001371e, 0x10014669, 0x100163b0, 0x10018aca, 0x102c1270, 0x102c9ea2
 */

void __thiscall GameClient::Equip::Update(GameClient::Equip *this, float a2)
{
  double v3; // st7
  int v4; // esi
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int (__thiscall *v10)(int, _BYTE *, _DWORD *, int); // edx
  char v11; // bl
  const void *v12; // esi
  void (__thiscall *v13)(GameClient::Equip *, _DWORD *); // edx
  int v14; // ecx
  int v15; // eax
  float *v16; // eax
  GameClient::WorldObject *v17; // ecx
  int v18; // eax
  unsigned int v19; // esi
  int i; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // ecx
  float v30; // [esp+0h] [ebp-1B0h]
  float v31; // [esp+0h] [ebp-1B0h]
  float v32; // [esp+4h] [ebp-1ACh]
  float v33; // [esp+4h] [ebp-1ACh]
  float v34; // [esp+8h] [ebp-1A8h]
  float v35; // [esp+8h] [ebp-1A8h]
  int v36; // [esp+Ch] [ebp-1A4h]
  float v37; // [esp+Ch] [ebp-1A4h]
  int v38; // [esp+24h] [ebp-18Ch]
  int j; // [esp+28h] [ebp-188h]
  int v40; // [esp+2Ch] [ebp-184h]
  float v41[16]; // [esp+30h] [ebp-180h] BYREF
  _DWORD v42[3]; // [esp+70h] [ebp-140h] BYREF
  _DWORD v43[16]; // [esp+7Ch] [ebp-134h] BYREF
  _BYTE v44[12]; // [esp+BCh] [ebp-F4h] BYREF
  _BYTE v45[28]; // [esp+C8h] [ebp-E8h] BYREF
  _BYTE v46[64]; // [esp+E4h] [ebp-CCh] BYREF
  _BYTE v47[64]; // [esp+124h] [ebp-8Ch] BYREF
  _BYTE v48[64]; // [esp+164h] [ebp-4Ch] BYREF
  int v49; // [esp+1ACh] [ebp-4h]

  v3 = 0.0;
  v4 = *((_DWORD *)this + 2);
  v40 = v4;
  if ( !*((_DWORD *)this + 67) )
  {
    if ( *((_DWORD *)this + 37) )
    {
      if ( !*((_BYTE *)this + 184) )
      {
        v5 = 0.2;
        if ( GameClient::WorldObject::IsLocal(this) )
        {
          v6 = (int *)*((_DWORD *)this + 45);
          v34 = 1.0;
          v32 = 1.0;
          v30 = 0.2;
          if ( *(_DWORD *)(*((_DWORD *)this + 37) + 356) )
            GameClient::AEquip::PlayAnimationFPV((GameClient::AEquip *)v6, v6[551], v30, v32, v34, 0);
          else
            GameClient::AEquip::PlayAnimationFPV((GameClient::AEquip *)v6, v6[550], v30, v32, v34, 0);
          v5 = 0.2;
        }
        v35 = 1.0;
        v7 = (int *)*((_DWORD *)this + 45);
        v33 = 1.0;
        v31 = v5;
        if ( *(_DWORD *)(*((_DWORD *)this + 37) + 356) )
          GameClient::AEquip::PlayAnimation((GameClient::AEquip *)v7, v7[546], v31, v33, v35, 0);
        else
          GameClient::AEquip::PlayAnimation((GameClient::AEquip *)v7, v7[545], v31, v33, v35, 0);
      }
      v8 = *((_DWORD *)this + 37);
      if ( !*(_BYTE *)(v8 + 700) )
      {
        if ( *(GameClient::Equip **)(v8 + 228) == this )
        {
          if ( *(_DWORD *)(v4 + 312) == 2 && *(_DWORD *)(*((_DWORD *)this + 45) + 1272) )
          {
            sub_1001371E((int)this + 36);
            v14 = *((_DWORD *)this + 8);
            v15 = *((_DWORD *)this + 7);
            v43[12] = *((_DWORD *)this + 6);
            v43[14] = v14;
            v43[13] = v15;
            v36 = sub_10008062((int)v46);
            GameClient::Robot::GetAssistantPos((int)v48);
            qmemcpy(
              (void *)(*(_DWORD *)(*((_DWORD *)this + 45) + 1272) + 100),
              (const void *)sub_10018ACA(v47, v36),
              0x40u);
          }
        }
        else if ( GameClient::SystemPart::GetSystemPartType(this) == 3 )
        {
          sub_10014669(v43);
          std::string::string(v45, "BackPoint");
          v9 = *((_DWORD *)this + 45);
          v10 = *(int (__thiscall **)(int, _BYTE *, _DWORD *, int))(*(_DWORD *)v9 + 120);
          v49 = 0;
          v11 = v10(v9, v45, v43, 1);
          v49 = -1;
          std::string::~string(v45);
          if ( v11 )
          {
            sub_10008062((int)v46);
            v12 = (const void *)sub_10018ACA(v47, (int)this + 36);
            v13 = *(void (__thiscall **)(GameClient::Equip *, _DWORD *))(*(_DWORD *)this + 40);
            qmemcpy(v43, v12, sizeof(v43));
            v13(this, v43);
            (*(void (__thiscall **)(GameClient::Equip *, _DWORD *))(*(_DWORD *)this + 36))(this, &v43[12]);
          }
        }
      }
      *(_BYTE *)(*((_DWORD *)this + 45) + 421) = *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 37) + 172) + 421);
      *(_BYTE *)(*((_DWORD *)this + 45) + 422) = *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 37) + 172) + 422);
    }
    v16 = (float *)*((_DWORD *)this + 45);
    qmemcpy(v41, v16 + 217, sizeof(v41));
    v41[12] = v16[214];
    v41[13] = v16[215];
    v41[14] = v16[216];
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v16 + 136))(v16, v41);
    v3 = 0.0;
  }
  v17 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
  if ( v17 )
  {
    if ( GameClient::WorldObject::IsLocal(v17) )
      (*(void (__thiscall **)(GameClient::Equip *))(*(_DWORD *)this + 188))(this);
    v3 = 0.0;
  }
  if ( *((_DWORD *)this + 67) || (v18 = *((_DWORD *)this + 37)) != 0 && !*(_BYTE *)(v18 + 700) )
  {
    memset(v43, 0, sizeof(v43));
    sub_102C1270(1.0);
    v19 = 0;
    *(float *)&v43[15] = 1.0;
    for ( i = 0; ; i += 148 )
    {
      v21 = *((_DWORD *)this + 70);
      if ( !v21 || v19 >= (*((_DWORD *)this + 71) - v21) / 148 )
        break;
      v22 = *((_DWORD *)this + 70);
      if ( !v22 || v19 >= (*((_DWORD *)this + 71) - v22) / 148 )
        _invalid_parameter_noinfo();
      if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
      {
        v23 = *((_DWORD *)this + 70);
        if ( !v23 || v19 >= (*((_DWORD *)this + 71) - v23) / 148 )
          _invalid_parameter_noinfo();
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD *, _DWORD))(**((_DWORD **)this + 45) + 120))(
               *((_DWORD *)this + 45),
               i + *((_DWORD *)this + 70),
               v43,
               0) )
        {
          sub_10010519((int)v43, (int)&v43[12]);
        }
        else
        {
          sub_10010519((int)this + 36, (int)this + 24);
        }
      }
      ++v19;
    }
    v24 = 0;
    v38 = 0;
    for ( j = 0; ; j += 120 )
    {
      v25 = *((_DWORD *)this + 78);
      if ( !v25 || v24 >= (*((_DWORD *)this + 79) - v25) / 120 )
        break;
      v26 = *((_DWORD *)this + 78);
      if ( !v26 || v24 >= (*((_DWORD *)this + 79) - v26) / 120 )
        _invalid_parameter_noinfo();
      if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
      {
        memset(v41, 0, sizeof(v41));
        sub_102C1270(1.0);
        v41[15] = 1.0;
        v27 = *(_DWORD *)(v40 + 660);
        if ( !v27 || v24 >= (*(_DWORD *)(v40 + 664) - v27) / 28 )
          _invalid_parameter_noinfo();
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, float *, _DWORD))(**((_DWORD **)this + 45) + 120))(
               *((_DWORD *)this + 45),
               v38 + *(_DWORD *)(v40 + 660),
               v41,
               0) )
        {
          sub_10010519((int)v41, (int)&v41[12]);
        }
        else
        {
          sub_10010519((int)this + 36, (int)this + 24);
        }
      }
      ++v24;
      v38 += 28;
    }
    v3 = 0.0;
  }
  if ( *((_DWORD *)this + 67) )
  {
    if ( *((_DWORD *)this + 119) )
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 67) + 44))(*((_DWORD *)this + 67), v44);
      (*(void (__stdcall **)(char *, _BYTE *, _DWORD))(**((_DWORD **)this + 119) + 16))((char *)this + 24, v44, 0.0);
    }
  }
  else
  {
    v28 = (_DWORD *)*((_DWORD *)this + 37);
    if ( v28 && *((_DWORD *)this + 119) )
    {
      v42[0] = v28[188];
      v29 = *((_DWORD *)this + 119);
      v42[1] = v28[189];
      v42[2] = v28[190];
      v37 = v3;
      (*(void (__stdcall **)(char *, _DWORD *, _DWORD))(*(_DWORD *)v29 + 16))((char *)this + 24, v42, LODWORD(v37));
    }
  }
  GameClient::WorldObject::Update(this, a2);
}
