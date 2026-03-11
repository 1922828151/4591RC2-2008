/*
 * func-name: ??0PRTSettings@@QAE@XZ
 * func-address: 0x100e8d80
 * callers: 0x100300f0, 0x1013a9b0
 * callees: 0x10009330, 0x10009550, 0x10012c20, 0x10017220, 0x10017310, 0x10017400, 0x101189f0
 */

PRTSettings *__thiscall PRTSettings::PRTSettings(PRTSettings *this)
{
  PRTSettings *v2; // ebp
  _DWORD *v3; // edi
  float v4; // edx
  struct RenderDevice *v5; // eax
  struct EditorVar *v6; // eax
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  struct EditorVar *v9; // eax
  struct EditorVar *v10; // eax
  struct EditorVar *v11; // eax
  struct EditorVar *v12; // eax
  struct EditorVar *v13; // eax
  struct EditorVar *v14; // eax
  struct EditorVar *v15; // eax
  struct EditorVar *v16; // eax
  char v18; // [esp-64h] [ebp-FCh] BYREF
  int v19; // [esp-60h] [ebp-F8h]
  int v20; // [esp-5Ch] [ebp-F4h]
  int v21; // [esp-58h] [ebp-F0h]
  int v22; // [esp-54h] [ebp-ECh]
  int v23; // [esp-50h] [ebp-E8h]
  int v24; // [esp-4Ch] [ebp-E4h]
  PRTSettings *v25; // [esp-48h] [ebp-E0h]
  char v26; // [esp-44h] [ebp-DCh] BYREF
  int v27; // [esp-40h] [ebp-D8h]
  int v28; // [esp-3Ch] [ebp-D4h]
  int v29; // [esp-38h] [ebp-D0h]
  int v30; // [esp-34h] [ebp-CCh]
  int v31; // [esp-30h] [ebp-C8h]
  int v32; // [esp-2Ch] [ebp-C4h]
  char v33; // [esp-28h] [ebp-C0h] BYREF
  int v34; // [esp-24h] [ebp-BCh]
  int v35; // [esp-20h] [ebp-B8h]
  int v36; // [esp-1Ch] [ebp-B4h]
  int v37; // [esp-18h] [ebp-B0h]
  int v38; // [esp-14h] [ebp-ACh]
  int v39; // [esp-10h] [ebp-A8h]
  int v40; // [esp-Ch] [ebp-A4h]
  int v41; // [esp-8h] [ebp-A0h]
  PRTSettings *v42; // [esp+Ch] [ebp-8Ch]
  char *v43; // [esp+10h] [ebp-88h]
  char *v44; // [esp+14h] [ebp-84h]
  char *v45; // [esp+18h] [ebp-80h]
  float v46; // [esp+1Ch] [ebp-7Ch]
  float v47; // [esp+20h] [ebp-78h]
  float v48; // [esp+24h] [ebp-74h]
  float v49; // [esp+28h] [ebp-70h]
  _DWORD v50[24]; // [esp+2Ch] [ebp-6Ch] BYREF
  int v51; // [esp+94h] [ebp-4h]

  *(float *)((char *)this + 1587) = 0.0;
  v2 = (PRTSettings *)((char *)this + 1587);
  *(float *)((char *)this + 1591) = 0.0;
  *(float *)((char *)this + 1595) = 0.0;
  *(float *)((char *)this + 1599) = 0.0;
  v3 = (_DWORD *)((char *)this + 2215);
  *(float *)((char *)this + 1603) = 0.0;
  v42 = this;
  *(float *)((char *)this + 1607) = 0.0;
  *(_DWORD *)((char *)this + 2219) = 0;
  *(float *)((char *)this + 1611) = 0.0;
  *(_DWORD *)((char *)this + 2223) = 0;
  *(float *)((char *)this + 1615) = 0.0;
  *(_DWORD *)((char *)this + 2227) = 0;
  *(float *)((char *)this + 1619) = 0.0;
  *(float *)((char *)this + 1623) = 0.0;
  *(float *)((char *)this + 1627) = 0.0;
  *(float *)((char *)this + 1631) = 0.0;
  v51 = 0;
  *(_DWORD *)((char *)this + 2235) = 0;
  *(_DWORD *)((char *)this + 2239) = 0;
  *(_DWORD *)((char *)this + 2243) = 0;
  *(_DWORD *)((char *)this + 2251) = 0;
  *(_DWORD *)((char *)this + 2255) = 0;
  *(_DWORD *)((char *)this + 2259) = 0;
  std::string::string((char *)this + 2263);
  *(float *)((char *)this + 1578) = 1.0;
  LOBYTE(v51) = 3;
  v46 = 0.69999999;
  *((_BYTE *)this + 2201) = 1;
  v47 = 1.22;
  *(float *)((char *)this + 1619) = v46;
  v48 = 1.9;
  *(float *)((char *)this + 1623) = v47;
  *(float *)((char *)this + 1627) = v48;
  *(float *)((char *)this + 1631) = 1.0;
  *(float *)((char *)this + 1603) = 0.0014;
  *(float *)((char *)this + 1607) = 0.0024999999;
  *(_BYTE *)this = 0;
  *(_DWORD *)((char *)this + 1561) = 1024;
  *(_DWORD *)((char *)this + 1573) = 1;
  *(_DWORD *)((char *)this + 2211) = 64;
  *((_BYTE *)this + 2210) = 0;
  *(_DWORD *)((char *)this + 1569) = 3;
  *(_DWORD *)((char *)this + 1565) = 6;
  *((_BYTE *)this + 1577) = 0;
  *(float *)((char *)this + 1611) = 0.0142;
  *(float *)((char *)this + 1615) = 1.0;
  *(float *)((char *)this + 1635) = 1.3;
  *(_DWORD *)((char *)this + 1583) = 0;
  *((_BYTE *)this + 1643) = 0;
  v46 = 1.0;
  v47 = 1.0;
  v48 = 1.0;
  v49 = 1.0;
  *(float *)v2 = 1.0;
  v4 = v49;
  *(float *)((char *)this + 1645) = 0.0;
  *((float *)v2 + 1) = 1.0;
  *((float *)v2 + 2) = 1.0;
  *(float *)((char *)this + 1654) = 0.029999999;
  *((float *)v2 + 3) = v4;
  *((_BYTE *)this + 1644) = 1;
  *(float *)((char *)this + 1658) = 0.000079999998;
  *(_DWORD *)((char *)this + 1649) = 2;
  *((_BYTE *)this + 1653) = 1;
  *(float *)((char *)this + 1667) = 0.029999999;
  *(_DWORD *)((char *)this + 1662) = 3;
  *((_BYTE *)this + 1666) = 0;
  *(_DWORD *)((char *)this + 1675) = 3;
  *(float *)((char *)this + 1671) = 0.000079999998;
  *(_DWORD *)((char *)this + 2206) = 24;
  *(_DWORD *)((char *)this + 2202) = 1;
  *(float *)((char *)this + 1639) = 2.0;
  v5 = RenderDevice::Instance();
  if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 124))(v5) )
  {
    v41 = 0;
    v40 = 1;
    v43 = &v33;
    std::string::string(&v33, &unk_101C7770);
    v44 = &v26;
    LOBYTE(v51) = 4;
    std::string::string(&v26, "SH - General");
    v25 = this;
    v45 = &v18;
    LOBYTE(v51) = 5;
    std::string::string(&v18, " SH Enabled");
    LOBYTE(v51) = 3;
    v6 = (struct EditorVar *)EditorVar::EditorVar(
                               v50,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               (int)v25,
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
                               v41);
    LOBYTE(v51) = 6;
    std::vector<EditorVar>::push_back(v3, v6);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Light rays casted. Higher gives more accurate results, but is slower. Default = 1024");
    v44 = &v26;
    LOBYTE(v51) = 7;
    std::string::string(&v26, "SH - General");
    v25 = (PRTSettings *)((char *)this + 1561);
    v43 = &v18;
    LOBYTE(v51) = 8;
    std::string::string(&v18, "Rays");
    LOBYTE(v51) = 3;
    v7 = (struct EditorVar *)EditorVar::EditorVar(
                               v50,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               (int)v25,
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
                               v41);
    LOBYTE(v51) = 9;
    std::vector<EditorVar>::push_back(v3, v7);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(
      &v33,
      "Bounces of light. Used in interreflections and scattered lighting. Each bounce requires another computing pass!");
    v44 = &v26;
    LOBYTE(v51) = 10;
    std::string::string(&v26, "SH - General");
    v25 = (PRTSettings *)((char *)this + 1573);
    v43 = &v18;
    LOBYTE(v51) = 11;
    std::string::string(&v18, "Bounces");
    LOBYTE(v51) = 3;
    v8 = (struct EditorVar *)EditorVar::EditorVar(
                               v50,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               (int)v25,
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
                               v41);
    LOBYTE(v51) = 12;
    std::vector<EditorVar>::push_back(v3, v8);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Per-pixel lighting or per-vertex? Per pixel is more expensive, but often looks better.");
    v44 = &v26;
    LOBYTE(v51) = 13;
    std::string::string(&v26, "SH - General");
    v25 = (PRTSettings *)((char *)this + 2210);
    v43 = &v18;
    LOBYTE(v51) = 14;
    std::string::string(&v18, "PerPixel");
    LOBYTE(v51) = 3;
    v9 = (struct EditorVar *)EditorVar::EditorVar(
                               v50,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               (int)v25,
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
                               v41);
    LOBYTE(v51) = 15;
    std::vector<EditorVar>::push_back(v3, v9);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Per-pixel lighting texture size. Must be pow2 (32,64,128,etc)");
    v44 = &v26;
    LOBYTE(v51) = 16;
    std::string::string(&v26, "SH - General");
    v25 = (PRTSettings *)((char *)this + 2211);
    v43 = &v18;
    LOBYTE(v51) = 17;
    std::string::string(&v18, "Texture Size");
    LOBYTE(v51) = 3;
    v10 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 18;
    std::vector<EditorVar>::push_back(v3, v10);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Diffuse color in PRT calculations");
    v44 = &v26;
    LOBYTE(v51) = 19;
    std::string::string(&v26, "SH - General");
    v25 = v2;
    v43 = &v18;
    LOBYTE(v51) = 20;
    std::string::string(&v18, "Diffuse");
    LOBYTE(v51) = 3;
    v11 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 21;
    std::vector<EditorVar>::push_back(v3, v11);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Light rays casted. Higher gives more accurate results, but is slower. Default = 1024");
    v44 = &v26;
    LOBYTE(v51) = 22;
    std::string::string(&v26, "SH - Subsurface");
    v25 = (PRTSettings *)((char *)this + 1577);
    v43 = &v18;
    LOBYTE(v51) = 23;
    std::string::string(&v18, "Subsurface Enabled");
    LOBYTE(v51) = 3;
    v12 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 24;
    std::vector<EditorVar>::push_back(v3, v12);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "See A Practical Model for Subsurface Light Transport, SIGGRAPH 2001");
    v44 = &v26;
    LOBYTE(v51) = 25;
    std::string::string(&v26, "SH - Subsurface");
    v25 = (PRTSettings *)((char *)this + 1619);
    v43 = &v18;
    LOBYTE(v51) = 26;
    std::string::string(&v18, "Reduced Scattering");
    LOBYTE(v51) = 3;
    v13 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 27;
    std::vector<EditorVar>::push_back(v3, v13);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(
      &v33,
      "Relative index of refraction is the ratio between two absolute indexes of refraction. An index of refraction is ra"
      "tio of the sine of the angle of incidence to the sine of the angle of refraction. ");
    v44 = &v26;
    LOBYTE(v51) = 28;
    std::string::string(&v26, "SH - Subsurface");
    v25 = (PRTSettings *)((char *)this + 1635);
    v43 = &v18;
    LOBYTE(v51) = 29;
    std::string::string(&v18, "Rel.Refraction Index");
    LOBYTE(v51) = 3;
    v14 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 30;
    std::vector<EditorVar>::push_back(v3, v14);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Scaling factor for object. Smaller scale = more SSS.");
    v44 = &v26;
    LOBYTE(v51) = 31;
    std::string::string(&v26, "SH - Subsurface");
    v25 = (PRTSettings *)((char *)this + 1578);
    LOBYTE(v51) = 32;
    v43 = &v18;
    std::string::string(&v18, "Subsurface Scale");
    LOBYTE(v51) = 3;
    v15 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 33;
    std::vector<EditorVar>::push_back(v3, v15);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, "Lighting multiplier for SSS component of calculations");
    v44 = &v26;
    LOBYTE(v51) = 34;
    std::string::string(&v26, "SH - Subsurface");
    v25 = (PRTSettings *)((char *)this + 1639);
    v43 = &v18;
    LOBYTE(v51) = 35;
    std::string::string(&v18, "Subsurface Multiplier");
    LOBYTE(v51) = 3;
    v16 = (struct EditorVar *)EditorVar::EditorVar(
                                v50,
                                v18,
                                v19,
                                v20,
                                v21,
                                v22,
                                v23,
                                v24,
                                (int)v25,
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
                                v41);
    LOBYTE(v51) = 36;
    std::vector<EditorVar>::push_back(v3, v16);
    LOBYTE(v51) = 3;
    EditorVar::~EditorVar((EditorVar *)v50);
  }
  return this;
}
