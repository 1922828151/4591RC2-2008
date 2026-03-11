/*
 * func-name: sub_100D91A0
 * func-address: 0x100d91a0
 * callers: 0x10007b76
 * callees: 0x102c1270, 0x102c9ea2
 */

int __thiscall sub_100D91A0(int this, struct World *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
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
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [esp+628h] [ebp-ECh] BYREF
  int v22; // [esp+62Ch] [ebp-E8h]
  int v23; // [esp+630h] [ebp-E4h]
  int v24; // [esp+634h] [ebp-E0h]
  int v25; // [esp+638h] [ebp-DCh]
  int v26; // [esp+63Ch] [ebp-D8h]
  int v27; // [esp+640h] [ebp-D4h]
  int v28; // [esp+644h] [ebp-D0h]
  int v29; // [esp+648h] [ebp-CCh] BYREF
  int v30; // [esp+64Ch] [ebp-C8h]
  int v31; // [esp+650h] [ebp-C4h]
  int v32; // [esp+654h] [ebp-C0h]
  int v33; // [esp+658h] [ebp-BCh]
  int v34; // [esp+65Ch] [ebp-B8h]
  int v35; // [esp+660h] [ebp-B4h]
  int v36; // [esp+664h] [ebp-B0h] BYREF
  int v37; // [esp+668h] [ebp-ACh]
  int v38; // [esp+66Ch] [ebp-A8h]
  int v39; // [esp+670h] [ebp-A4h]
  int v40; // [esp+674h] [ebp-A0h]
  int v41; // [esp+678h] [ebp-9Ch]
  void *v42; // [esp+67Ch] [ebp-98h]
  int v43; // [esp+680h] [ebp-94h]
  size_t v44; // [esp+684h] [ebp-90h]
  int v45; // [esp+69Ch] [ebp-78h]
  int *v46; // [esp+6A0h] [ebp-74h]
  int *v47; // [esp+6A4h] [ebp-70h]
  _BYTE v48[96]; // [esp+6A8h] [ebp-6Ch] BYREF
  int v49; // [esp+710h] [ebp-4h]

  v45 = this;
  Actor::Actor((Actor *)this, a2);
  v49 = 0;
  *(_DWORD *)this = &ChainedLightEntity::`vftable';
  std::string::string((void *)(this + 1056));
  std::string::string((void *)(this + 1088));
  std::string::string((void *)(this + 1132));
  std::string::string((void *)(this + 1160));
  std::string::string((void *)(this + 1188));
  *(float *)(this + 1276) = 0.0;
  *(float *)(this + 1280) = 0.0;
  v44 = 64;
  *(float *)(this + 1284) = 0.0;
  v43 = 0;
  *(float *)(this + 1292) = 0.0;
  *(float *)(this + 1296) = 0.0;
  v42 = (void *)(this + 1276);
  *(float *)(this + 1300) = 0.0;
  LOBYTE(v49) = 5;
  *(float *)(this + 1308) = 0.0;
  *(float *)(this + 1312) = 0.0;
  *(float *)(this + 1316) = 0.0;
  *(float *)(this + 1324) = 0.0;
  *(float *)(this + 1328) = 0.0;
  *(float *)(this + 1332) = 0.0;
  memset(v42, v43, v44);
  sub_102C1270(1.0);
  *(float *)(this + 1336) = 1.0;
  v44 = 64;
  v43 = 0;
  *(float *)(this + 1340) = 0.0;
  v42 = (void *)(this + 1340);
  *(float *)(this + 1344) = 0.0;
  *(float *)(this + 1348) = 0.0;
  *(float *)(this + 1356) = 0.0;
  *(float *)(this + 1360) = 0.0;
  *(float *)(this + 1364) = 0.0;
  *(float *)(this + 1372) = 0.0;
  *(float *)(this + 1376) = 0.0;
  *(float *)(this + 1380) = 0.0;
  *(float *)(this + 1388) = 0.0;
  *(float *)(this + 1392) = 0.0;
  *(float *)(this + 1396) = 0.0;
  memset(v42, v43, v44);
  sub_102C1270(1.0);
  *(float *)(this + 1400) = 1.0;
  *(float *)(this + 1404) = 0.0;
  *(float *)(this + 1408) = 0.0;
  v44 = 64;
  *(float *)(this + 1412) = 0.0;
  v43 = 0;
  *(float *)(this + 1420) = 0.0;
  v42 = (void *)(this + 1404);
  *(float *)(this + 1424) = 0.0;
  *(float *)(this + 1428) = 0.0;
  *(float *)(this + 1436) = 0.0;
  *(float *)(this + 1440) = 0.0;
  *(float *)(this + 1444) = 0.0;
  *(float *)(this + 1452) = 0.0;
  *(float *)(this + 1456) = 0.0;
  *(float *)(this + 1460) = 0.0;
  memset(v42, v43, v44);
  sub_102C1270(1.0);
  *(float *)(this + 1464) = 1.0;
  v44 = (size_t)"chainlink.dds";
  *(float *)(this + 1244) = 0.25799999;
  *(_DWORD *)(this + 1240) = 10;
  *(float *)(this + 1248) = 3.4000001;
  *(_BYTE *)(this + 1052) = 0;
  *(_BYTE *)(this + 353) = 1;
  *(float *)(this + 1120) = 0.014;
  *(_DWORD *)(this + 1216) = 0;
  *(float *)(this + 1124) = 2.6500001;
  *(float *)(this + 1128) = 0.0;
  *(float *)(this + 1220) = 0.0;
  *(float *)(this + 1224) = 0.0;
  *(float *)(this + 1228) = 0.0;
  *(float *)(this + 1232) = 0.0;
  std::string::operator=(this + 1132, v44);
  std::string::operator=(this + 1160, "chainlink.dds");
  *(float *)(this + 1264) = 0.12;
  v44 = 0;
  v43 = 1;
  *(float *)(this + 1268) = 0.16;
  *(float *)(this + 1260) = 1.0;
  std::string::string(&v36, "The magnitude of the impulse that the chain swings with.");
  v46 = &v29;
  LOBYTE(v49) = 6;
  std::string::string(&v29, "Physics");
  v28 = this + 1120;
  v47 = &v21;
  LOBYTE(v49) = 7;
  std::string::string(&v21, "Swing Magnitude");
  LOBYTE(v49) = 5;
  v3 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 8;
  std::vector<EditorVar>::push_back(this + 424, v3);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The period the chain's swinging.");
  v47 = &v29;
  LOBYTE(v49) = 9;
  std::string::string(&v29, "Physics");
  v28 = this + 1124;
  v46 = &v21;
  LOBYTE(v49) = 10;
  std::string::string(&v21, "Swing Period");
  LOBYTE(v49) = 5;
  v4 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 11;
  std::vector<EditorVar>::push_back(this + 424, v4);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The number of links in the chain.");
  v47 = &v29;
  LOBYTE(v49) = 12;
  std::string::string(&v29, "Physics");
  v28 = this + 1240;
  v46 = &v21;
  LOBYTE(v49) = 13;
  std::string::string(&v21, "Number of Links");
  LOBYTE(v49) = 5;
  v5 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 14;
  std::vector<EditorVar>::push_back(this + 424, v5);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "A scaling value for the mass of each link.");
  v47 = &v29;
  LOBYTE(v49) = 15;
  std::string::string(&v29, "Physics");
  v28 = this + 1260;
  v46 = &v21;
  LOBYTE(v49) = 16;
  std::string::string(&v21, "Link Mass Factor");
  LOBYTE(v49) = 5;
  v6 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 17;
  std::vector<EditorVar>::push_back(this + 424, v6);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The width of each visual chain particle.");
  v47 = &v29;
  LOBYTE(v49) = 18;
  std::string::string(&v29, "Visuals");
  v28 = this + 1264;
  v46 = &v21;
  LOBYTE(v49) = 19;
  std::string::string(&v21, "Particle Width");
  LOBYTE(v49) = 5;
  v7 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 20;
  std::vector<EditorVar>::push_back(this + 424, v7);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The height of each visual chain particle.");
  v47 = &v29;
  LOBYTE(v49) = 21;
  std::string::string(&v29, "Visuals");
  v28 = this + 1268;
  LOBYTE(v49) = 22;
  v46 = &v21;
  std::string::string(&v21, "Particle Height");
  LOBYTE(v49) = 5;
  v8 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 23;
  std::vector<EditorVar>::push_back(this + 424, v8);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The length of each link in the chain.");
  v47 = &v29;
  LOBYTE(v49) = 24;
  std::string::string(&v29, "Physics");
  v28 = this + 1244;
  v46 = &v21;
  LOBYTE(v49) = 25;
  std::string::string(&v21, "Link Length");
  LOBYTE(v49) = 5;
  v9 = EditorVar::EditorVar(
         v48,
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
         v39,
         v40,
         v41,
         v42,
         v43,
         v44);
  LOBYTE(v49) = 26;
  std::vector<EditorVar>::push_back(this + 424, v9);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The Mass of the Chain Base (the swinging object).");
  v47 = &v29;
  LOBYTE(v49) = 27;
  std::string::string(&v29, "Physics");
  v28 = this + 1248;
  v46 = &v21;
  LOBYTE(v49) = 28;
  std::string::string(&v21, "Mass of Base");
  LOBYTE(v49) = 5;
  v10 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 29;
  std::vector<EditorVar>::push_back(this + 424, v10);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "Light that this system binds to.");
  v47 = &v29;
  LOBYTE(v49) = 30;
  std::string::string(&v29, "Visuals");
  v28 = this + 1056;
  v46 = &v21;
  LOBYTE(v49) = 31;
  std::string::string(&v21, "Light Name");
  LOBYTE(v49) = 5;
  v11 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 32;
  std::vector<EditorVar>::push_back(this + 424, v11);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "Shadow Projector that this system binds to.");
  v47 = &v29;
  LOBYTE(v49) = 33;
  std::string::string(&v29, "Visuals");
  v28 = this + 1088;
  v46 = &v21;
  LOBYTE(v49) = 34;
  std::string::string(&v21, "Shadow Name");
  LOBYTE(v49) = 5;
  v12 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 35;
  std::vector<EditorVar>::push_back(this + 424, v12);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(
    &v36,
    "Enables rigid body physics for this object within Reality Builder. To refresh physics state with new values when phy"
    "sics are already enabled, set this to False then True again.");
  LOBYTE(v49) = 36;
  v47 = &v29;
  std::string::string(&v29, "Physics");
  v28 = this + 1052;
  v46 = &v21;
  LOBYTE(v49) = 37;
  std::string::string(&v21, "Editor Physics");
  LOBYTE(v49) = 5;
  v13 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 38;
  std::vector<EditorVar>::push_back(this + 424, v13);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The texture file used to display the chain links.");
  v47 = &v29;
  LOBYTE(v49) = 39;
  std::string::string(&v29, "Visuals");
  v28 = this + 1132;
  v46 = &v21;
  LOBYTE(v49) = 40;
  std::string::string(&v21, "Link Texture Filename");
  LOBYTE(v49) = 5;
  v14 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 41;
  std::vector<EditorVar>::push_back(this + 424, v14);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The name of an additional Actor to bind to this Chained Light (i.e. visual fx system).");
  v47 = &v29;
  LOBYTE(v49) = 42;
  std::string::string(&v29, "Visuals");
  v28 = this + 1188;
  v46 = &v21;
  LOBYTE(v49) = 43;
  std::string::string(&v21, "Secondary Actor Name");
  LOBYTE(v49) = 5;
  v15 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 44;
  std::vector<EditorVar>::push_back(this + 424, v15);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The Y offset of the main mesh.");
  v47 = &v29;
  LOBYTE(v49) = 45;
  std::string::string(&v29, "Visuals");
  v28 = this + 1220;
  v46 = &v21;
  LOBYTE(v49) = 46;
  std::string::string(&v21, "Main Y Offset");
  LOBYTE(v49) = 5;
  v16 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 47;
  std::vector<EditorVar>::push_back(this + 424, v16);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The Y offset of the secondary Actor.");
  v47 = &v29;
  LOBYTE(v49) = 48;
  std::string::string(&v29, "Visuals");
  v28 = this + 1232;
  v46 = &v21;
  LOBYTE(v49) = 49;
  std::string::string(&v21, "Secondary Y Offset");
  LOBYTE(v49) = 5;
  v17 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 50;
  std::vector<EditorVar>::push_back(this + 424, v17);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The Y offset of the Light.");
  v47 = &v29;
  LOBYTE(v49) = 51;
  std::string::string(&v29, "Visuals");
  v28 = this + 1224;
  v46 = &v21;
  LOBYTE(v49) = 52;
  std::string::string(&v21, "Light Y Offset");
  LOBYTE(v49) = 5;
  v18 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 53;
  std::vector<EditorVar>::push_back(this + 424, v18);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  v44 = 0;
  v43 = 1;
  std::string::string(&v36, "The Y offset of the Shadow.");
  v47 = &v29;
  LOBYTE(v49) = 54;
  std::string::string(&v29, "Visuals");
  v28 = this + 1228;
  v46 = &v21;
  LOBYTE(v49) = 55;
  std::string::string(&v21, "Shadow Y Offset");
  LOBYTE(v49) = 5;
  v19 = EditorVar::EditorVar(
          v48,
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
  LOBYTE(v49) = 56;
  std::vector<EditorVar>::push_back(this + 424, v19);
  LOBYTE(v49) = 5;
  EditorVar::~EditorVar((EditorVar *)v48);
  *(_DWORD *)(this + 1084) = 0;
  *(_DWORD *)(this + 1116) = 0;
  *(_DWORD *)(this + 1468) = 0;
  *(_BYTE *)(this + 1272) = 0;
  if ( byte_103B80F1 || *(_BYTE *)(this + 1052) )
  {
    *(_DWORD *)(this + 728) = 2;
    *(_BYTE *)(this + 724) = 0;
  }
  else
  {
    *(_BYTE *)(this + 724) = 1;
  }
  return this;
}
