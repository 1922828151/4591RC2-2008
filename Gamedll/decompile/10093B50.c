/*
 * func-name: ??0Effect_Precipitation@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10093b50
 * callers: 0x10013e12
 * callees: 0x10005187, 0x102c26d0
 */

Effect_Precipitation *__thiscall Effect_Precipitation::Effect_Precipitation(
        Effect_Precipitation *this,
        struct World *a2)
{
  int v3; // eax
  float v4; // eax
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v18; // [esp+354h] [ebp-100h] BYREF
  int v19; // [esp+358h] [ebp-FCh]
  int v20; // [esp+35Ch] [ebp-F8h]
  int v21; // [esp+360h] [ebp-F4h]
  int v22; // [esp+364h] [ebp-F0h]
  int v23; // [esp+368h] [ebp-ECh]
  int v24; // [esp+36Ch] [ebp-E8h]
  char *v25; // [esp+370h] [ebp-E4h]
  int v26; // [esp+374h] [ebp-E0h] BYREF
  int v27; // [esp+378h] [ebp-DCh]
  int v28; // [esp+37Ch] [ebp-D8h]
  int v29; // [esp+380h] [ebp-D4h]
  int v30; // [esp+384h] [ebp-D0h]
  int v31; // [esp+388h] [ebp-CCh]
  int v32; // [esp+38Ch] [ebp-C8h]
  int v33; // [esp+390h] [ebp-C4h] BYREF
  int v34; // [esp+394h] [ebp-C0h] BYREF
  int v35; // [esp+398h] [ebp-BCh]
  int v36; // [esp+39Ch] [ebp-B8h]
  int v37; // [esp+3A0h] [ebp-B4h]
  int v38; // [esp+3A4h] [ebp-B0h]
  float v39; // [esp+3A8h] [ebp-ACh]
  int v40; // [esp+3ACh] [ebp-A8h]
  float v41; // [esp+3B0h] [ebp-A4h]
  Effect_Precipitation *v42; // [esp+3C8h] [ebp-8Ch]
  int *v43; // [esp+3CCh] [ebp-88h]
  int *v44; // [esp+3D0h] [ebp-84h]
  int *v45; // [esp+3D4h] [ebp-80h]
  float v46; // [esp+3D8h] [ebp-7Ch]
  float v47; // [esp+3DCh] [ebp-78h]
  float v48; // [esp+3E0h] [ebp-74h]
  float v49; // [esp+3E4h] [ebp-70h]
  _BYTE v50[96]; // [esp+3E8h] [ebp-6Ch] BYREF
  int v51; // [esp+450h] [ebp-4h]

  v42 = this;
  Effect_ParticleSystem::Effect_ParticleSystem(this, a2);
  *(_DWORD *)this = &Effect_Precipitation::`vftable';
  v51 = 0;
  *((_DWORD *)this + 321) = 0;
  *((_DWORD *)this + 322) = 0;
  *((_DWORD *)this + 323) = 0;
  std::string::string((char *)this + 1300);
  std::string::string((char *)this + 1328);
  *((float *)this + 345) = 0.0;
  *((float *)this + 346) = 0.0;
  v41 = COERCE_FLOAT("Iceyrain_03.WAV");
  *((float *)this + 347) = 0.0;
  LOBYTE(v51) = 3;
  *((_DWORD *)this + 324) = 0;
  std::string::operator=((char *)this + 1300, LODWORD(v41));
  std::string::operator=((char *)this + 1328, &unk_1030DB51);
  LODWORD(v41) = 1;
  v43 = &v34;
  std::string::string(&v34, "watersplash.dds");
  v3 = Precacher::CacheTexture();
  v46 = 0.0;
  v47 = 0.0;
  v48 = 0.0;
  *((float *)this + 348) = 0.0;
  *((float *)this + 345) = 0.0;
  v41 = 0.0;
  *((_DWORD *)this + 350) = v3;
  v4 = v48;
  *(float *)&v40 = 0.0;
  *((float *)this + 346) = 0.0;
  v39 = 1.5707964;
  *((float *)this + 347) = v4;
  sub_102C26D0(v39, *(float *)&v40, v41);
  *((float *)this + 296) = 2.0;
  *((_BYTE *)this + 1224) = 1;
  *((_DWORD *)this + 273) = 6;
  *((float *)this + 290) = 13.0;
  *((_DWORD *)this + 284) = 1400;
  *((float *)this + 292) = 800.0;
  *((float *)this + 293) = 100.0;
  *((float *)this + 287) = 0.2;
  *((float *)this + 288) = 0.2;
  *((float *)this + 289) = 0.2;
  *((float *)this + 301) = 10.0;
  *((float *)this + 302) = 5.0;
  *((float *)this + 303) = 10.0;
  v46 = 1.0;
  v47 = 1.0;
  v48 = 1.0;
  *((float *)this + 274) = 1.0;
  v49 = 0.1;
  *((float *)this + 275) = 1.0;
  *((float *)this + 307) = 2.0;
  *((float *)this + 276) = 1.0;
  *((float *)this + 277) = 0.1;
  v5 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 285) = 10.0;
  *((float *)this + 352) = 1000.0;
  *((_BYTE *)this + 1404) = 0;
  *((float *)this + 353) = 1.28;
  *((_BYTE *)this + 1356) = 1;
  *((_DWORD *)this + 341) = 6;
  *((float *)this + 340) = 7.0;
  *((_BYTE *)this + 1368) = 0;
  *((float *)this + 343) = 0.0;
  *((float *)this + 344) = 24.0;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v41 = 0.0;
    v40 = 1;
    v43 = &v33;
    std::string::string(&v33, &unk_1030DB74);
    v44 = &v26;
    LOBYTE(v51) = 4;
    std::string::string(&v26, &unk_1030DB84);
    v25 = (char *)this + 1356;
    v45 = &v18;
    LOBYTE(v51) = 5;
    std::string::string(&v18, "FollowCamera");
    LOBYTE(v51) = 3;
    v7 = EditorVar::EditorVar(
           v50,
           v18,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           LODWORD(v39),
           v40,
           LODWORD(v41));
    LOBYTE(v51) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DBA0);
    v44 = &v26;
    LOBYTE(v51) = 7;
    std::string::string(&v26, &unk_1030DBB8);
    v25 = (char *)this + 1360;
    v43 = &v18;
    LOBYTE(v51) = 8;
    std::string::string(&v18, "SpawnHeight");
    LOBYTE(v51) = 3;
    v8 = EditorVar::EditorVar(
           v50,
           v18,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           LODWORD(v39),
           v40,
           LODWORD(v41));
    LOBYTE(v51) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DBD0);
    v44 = &v26;
    LOBYTE(v51) = 10;
    std::string::string(&v26, &unk_1030DBE8);
    v25 = (char *)this + 1364;
    v43 = &v18;
    LOBYTE(v51) = 11;
    std::string::string(&v18, "ImpactDensity");
    LOBYTE(v51) = 3;
    v9 = EditorVar::EditorVar(
           v50,
           v18,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           LODWORD(v39),
           v40,
           LODWORD(v41));
    LOBYTE(v51) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DC04);
    v44 = &v26;
    LOBYTE(v51) = 13;
    std::string::string(&v26, &unk_1030DC18);
    v25 = (char *)this + 1368;
    v43 = &v18;
    LOBYTE(v51) = 14;
    std::string::string(&v18, "AdjustByTime");
    LOBYTE(v51) = 3;
    v10 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DC34);
    v44 = &v26;
    LOBYTE(v51) = 16;
    std::string::string(&v26, &unk_1030DC40);
    v25 = (char *)this + 1372;
    v43 = &v18;
    LOBYTE(v51) = 17;
    std::string::string(&v18, "StartTime");
    LOBYTE(v51) = 3;
    v11 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DC58);
    v44 = &v26;
    LOBYTE(v51) = 19;
    std::string::string(&v26, &unk_1030DC64);
    v25 = (char *)this + 1376;
    v43 = &v18;
    LOBYTE(v51) = 20;
    std::string::string(&v18, "EndTime");
    LOBYTE(v51) = 3;
    v12 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DC78);
    v44 = &v26;
    LOBYTE(v51) = 22;
    std::string::string(&v26, &unk_1030DC84);
    v25 = (char *)this + 1300;
    v43 = &v18;
    LOBYTE(v51) = 23;
    std::string::string(&v18, "SoundEffect");
    LOBYTE(v51) = 3;
    v13 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DC9C);
    v44 = &v26;
    LOBYTE(v51) = 25;
    std::string::string(&v26, &unk_1030DCA8);
    v25 = (char *)*((_DWORD *)this + 350);
    v43 = &v18;
    LOBYTE(v51) = 26;
    std::string::string(&v18, "TextureSpark");
    LOBYTE(v51) = 3;
    v14 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DCC4);
    v44 = &v26;
    LOBYTE(v51) = 28;
    std::string::string(&v26, &unk_1030DCD4);
    v25 = (char *)this + 1412;
    v43 = &v18;
    LOBYTE(v51) = 29;
    std::string::string(&v18, "SpeedSpark");
    LOBYTE(v51) = 3;
    v15 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0.0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030DCEC);
    v44 = &v26;
    LOBYTE(v51) = 31;
    std::string::string(&v26, &unk_1030DCFC);
    v25 = (char *)this + 1408;
    LOBYTE(v51) = 32;
    v43 = &v18;
    std::string::string(&v18, "LifeTimeSpark");
    LOBYTE(v51) = 3;
    v16 = EditorVar::EditorVar(
            v50,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            LODWORD(v39),
            v40,
            LODWORD(v41));
    LOBYTE(v51) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
  }
  return this;
}
