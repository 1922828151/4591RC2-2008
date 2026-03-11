/*
 * func-name: sub_10003130
 * func-address: 0x10003130
 * callers: 0x100085f0
 * callees: 0x10001440, 0x10001ca0, 0x10002f20, 0x1007ec70, 0x10095c40, 0x100971c0, 0x100977a0, 0x10136530, 0x101372b0, 0x10137530, 0x1017a0b0, 0x101a26c0
 */

void __thiscall sub_10003130(int *this, FILE *Stream, World **a3)
{
  int *v3; // edi
  bool v4; // zf
  int v5; // eax
  int ModuleName; // eax
  int v7; // edi
  const char *v8; // eax
  _BYTE *v9; // eax
  double v10; // st7
  int v11; // eax
  World *v12; // ecx
  int v13; // eax
  World *v14; // ecx
  int v15; // eax
  World *v16; // ecx
  int v17; // eax
  World *v18; // ecx
  int v19; // eax
  World *v20; // ecx
  int v21; // eax
  World *v22; // ecx
  int v23; // eax
  World *v24; // ecx
  int v25; // eax
  World *v26; // ecx
  int v27; // eax
  World *v28; // ecx
  int v29; // eax
  World *v30; // ecx
  int v31; // eax
  World *v32; // ecx
  int v33; // eax
  World *v34; // ecx
  int v35; // eax
  World *v36; // ecx
  int v37; // eax
  World *v38; // ecx
  int v39; // eax
  World *v40; // ecx
  float *v41; // eax
  float *v42; // eax
  struct Editor *v43; // eax
  struct Editor *v44; // eax
  struct Editor *v45; // eax
  char v46; // [esp-20h] [ebp-110h] BYREF
  int v47; // [esp-1Ch] [ebp-10Ch]
  int v48; // [esp-18h] [ebp-108h]
  int v49; // [esp-14h] [ebp-104h]
  int v50; // [esp-10h] [ebp-100h]
  int v51; // [esp-Ch] [ebp-FCh]
  int v52; // [esp-8h] [ebp-F8h]
  int v53; // [esp-4h] [ebp-F4h]
  float v54; // [esp+0h] [ebp-F0h]
  float v55; // [esp+4h] [ebp-ECh]
  float v56; // [esp+8h] [ebp-E8h]
  size_t v57; // [esp+Ch] [ebp-E4h]
  size_t v58; // [esp+10h] [ebp-E0h]
  float v59; // [esp+14h] [ebp-DCh]
  int *v60; // [esp+28h] [ebp-C8h]
  char Buffer; // [esp+2Eh] [ebp-C2h] BYREF
  char v62; // [esp+2Fh] [ebp-C1h]
  float v63; // [esp+30h] [ebp-C0h] BYREF
  float v64; // [esp+34h] [ebp-BCh]
  float v65; // [esp+38h] [ebp-B8h]
  int v66[7]; // [esp+3Ch] [ebp-B4h] BYREF
  float v67; // [esp+58h] [ebp-98h] BYREF
  float v68; // [esp+5Ch] [ebp-94h] BYREF
  float v69; // [esp+60h] [ebp-90h] BYREF
  float v70; // [esp+64h] [ebp-8Ch]
  float v71; // [esp+68h] [ebp-88h]
  float v72; // [esp+6Ch] [ebp-84h]
  float v73; // [esp+70h] [ebp-80h] BYREF
  float v74; // [esp+74h] [ebp-7Ch] BYREF
  float v75; // [esp+78h] [ebp-78h] BYREF
  float v76; // [esp+7Ch] [ebp-74h]
  float v77; // [esp+80h] [ebp-70h]
  int v78[7]; // [esp+84h] [ebp-6Ch] BYREF
  _BYTE v79[28]; // [esp+A0h] [ebp-50h] BYREF
  float v80[4]; // [esp+BCh] [ebp-34h] BYREF
  _BYTE v81[12]; // [esp+CCh] [ebp-24h] BYREF
  int v82[3]; // [esp+D8h] [ebp-18h] BYREF
  int v83; // [esp+ECh] [ebp-4h]

  v3 = this;
  v4 = this[24] == 0;
  v60 = this;
  if ( v4 )
  {
    Buffer = 0;
    fread(&Buffer, 1u, 1u, Stream);
    std::string::string(v79);
    v83 = 0;
    if ( Buffer )
    {
      v5 = sub_10001CA0((int)v78, Stream);
      LOBYTE(v83) = 1;
      std::string::operator=(v79, v5);
      LOBYTE(v83) = 0;
      std::string::~string(v78);
    }
    if ( *((_BYTE *)Engine::Instance() + 1) )
    {
      if ( std::string::length(v79) )
      {
        Engine::Instance();
        ModuleName = Engine::GetModuleName(v78);
        LOBYTE(v83) = 2;
        v62 = std::operator!=<char>(v79, ModuleName);
        LOBYTE(v83) = 0;
        std::string::~string(v78);
        if ( v62 )
        {
          Engine::Instance();
          v7 = Engine::GetModuleName(v78);
          LOBYTE(v83) = 3;
          v59 = COERCE_FLOAT(std::string::c_str(v79));
          v8 = (const char *)std::string::c_str(v7);
          SeriousWarning(
            "Game is running module '%s' but tried to load map of module '%s'. Continuing anyway...",
            v8,
            (const char *)LODWORD(v59));
          LOBYTE(v83) = 0;
          std::string::~string(v78);
          v3 = v60;
        }
      }
    }
    if ( v3[14] >= 10 )
    {
      fread(v60 + 11, 1u, 1u, Stream);
      *((_BYTE *)*a3 + 724) = *((_BYTE *)v60 + 44);
      if ( *((_BYTE *)Editor::Instance() + 2056) )
      {
        v9 = v60 + 11;
        *((_BYTE *)*a3 + 724) = 0;
        *v9 = 0;
      }
    }
    v69 = 0.0;
    v70 = 0.0;
    v71 = 0.0;
    v72 = 0.0;
    fread(&v69, 0x10u, 1u, Stream);
    v67 = 0.0;
    fread(&v67, 4u, 1u, Stream);
    if ( v60[14] < 6 )
    {
      v59 = 0.0;
      v10 = 2.0;
    }
    else
    {
      v68 = 0.0;
      fread(&v68, 4u, 1u, Stream);
      v74 = 0.0;
      fread(&v74, 4u, 1u, Stream);
      v59 = v74;
      v10 = v68;
    }
    *(float *)&v58 = v10;
    World::SetFog(*a3, LODWORD(v69), LODWORD(v70), LODWORD(v71), LODWORD(v72), LODWORD(v67), v58, LODWORD(v59));
    if ( v60[14] >= 11 )
    {
      fread((char *)*a3 + 44, 4u, 1u, Stream);
      fread((char *)*a3 + 52, 4u, 1u, Stream);
      fread((char *)*a3 + 60, 4u, 1u, Stream);
    }
    if ( v60[14] >= 7 )
    {
      fread((char *)*a3 + 748, 1u, 1u, Stream);
      fread((char *)*a3 + 752, 4u, 1u, Stream);
    }
    if ( v60[14] >= 8 )
    {
      fread((char *)*a3 + 536, 4u, 1u, Stream);
      fread((char *)*a3 + 540, 4u, 1u, Stream);
      fread((char *)*a3 + 544, 4u, 1u, Stream);
      fread((char *)*a3 + 548, 4u, 1u, Stream);
      fread((char *)*a3 + 560, 0xCu, 1u, Stream);
      sub_10001440(v80);
      LOBYTE(v83) = 4;
      fread(v81, 0xCu, 1u, Stream);
      fread(v82, 0xCu, 1u, Stream);
      v11 = sub_10001CA0((int)v66, Stream);
      v12 = *a3;
      LOBYTE(v83) = 5;
      std::string::operator=((char *)v12 + 596, v11);
      LOBYTE(v83) = 4;
      std::string::~string(v66);
      sub_10001CA0((int)v78, Stream);
      LOBYTE(v83) = 6;
      if ( (unsigned __int8)std::operator!=<char>(v78, "UNLOAD") && v60[23] )
      {
        v59 = 0.0;
        *(float *)&v58 = 0.0;
        *(float *)&v57 = 1.0;
        v56 = 1.0;
        v55 = 0.0;
        v54 = 0.0;
        v53 = 0;
        v68 = COERCE_FLOAT(&v46);
        std::string::string(&v46, v78);
        Texture::Load(
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          *(float *)&v57,
          *(float *)&v58,
          SLODWORD(v59));
      }
      LOBYTE(v83) = 4;
      std::string::~string(v78);
      LOBYTE(v83) = 0;
      sub_1017A0B0(v80);
    }
    fread((char *)*a3 + 3288, 0x6Cu, 1u, Stream);
    v13 = sub_10001CA0((int)v66, Stream);
    v14 = *a3;
    LOBYTE(v83) = 7;
    std::string::operator=((char *)v14 + 3396, v13);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v15 = sub_10001CA0((int)v66, Stream);
    v16 = *a3;
    LOBYTE(v83) = 8;
    std::string::operator=((char *)v16 + 3424, v15);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v17 = sub_10001CA0((int)v66, Stream);
    v18 = *a3;
    LOBYTE(v83) = 9;
    std::string::operator=((char *)v18 + 3452, v17);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v19 = sub_10001CA0((int)v66, Stream);
    v20 = *a3;
    LOBYTE(v83) = 10;
    std::string::operator=((char *)v20 + 3480, v19);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v21 = sub_10001CA0((int)v66, Stream);
    v22 = *a3;
    LOBYTE(v83) = 11;
    std::string::operator=((char *)v22 + 3508, v21);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v23 = sub_10001CA0((int)v66, Stream);
    v24 = *a3;
    LOBYTE(v83) = 12;
    std::string::operator=((char *)v24 + 3536, v23);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v25 = sub_10001CA0((int)v66, Stream);
    v26 = *a3;
    LOBYTE(v83) = 13;
    std::string::operator=((char *)v26 + 3564, v25);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v27 = sub_10001CA0((int)v66, Stream);
    v28 = *a3;
    LOBYTE(v83) = 14;
    std::string::operator=((char *)v28 + 3592, v27);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v29 = sub_10001CA0((int)v66, Stream);
    v30 = *a3;
    LOBYTE(v83) = 15;
    std::string::operator=((char *)v30 + 3620, v29);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v31 = sub_10001CA0((int)v66, Stream);
    v32 = *a3;
    LOBYTE(v83) = 16;
    std::string::operator=((char *)v32 + 3648, v31);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v33 = sub_10001CA0((int)v66, Stream);
    v34 = *a3;
    LOBYTE(v83) = 17;
    std::string::operator=((char *)v34 + 3676, v33);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v35 = sub_10001CA0((int)v66, Stream);
    v36 = *a3;
    LOBYTE(v83) = 18;
    std::string::operator=((char *)v36 + 3704, v35);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v37 = sub_10001CA0((int)v66, Stream);
    v38 = *a3;
    LOBYTE(v83) = 19;
    std::string::operator=((char *)v38 + 3732, v37);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    v39 = sub_10001CA0((int)v66, Stream);
    v40 = *a3;
    LOBYTE(v83) = 20;
    std::string::operator=((char *)v40 + 3760, v39);
    LOBYTE(v83) = 0;
    std::string::~string(v66);
    if ( v60[14] >= 4 )
      fread((char *)*a3 + 3788, 4u, 1u, Stream);
    if ( v60[14] >= 12 )
    {
      v75 = 0.0;
      v76 = 0.0;
      v77 = 0.0;
      v63 = 0.0;
      v64 = 0.0;
      v65 = 0.0;
      fread(&v75, 0xCu, 1u, Stream);
      fread(&v63, 0xCu, 1u, Stream);
      v41 = (float *)*a3;
      v41[143] = v75;
      v41[144] = v76;
      v41[145] = v77;
      v42 = (float *)*a3;
      v42[146] = v63;
      v42[147] = v64;
      v42[148] = v65;
    }
    v73 = 0.0;
    fread(&v73, 4u, 1u, Stream);
    World::SetClipPlane(*a3, (int)v73);
    if ( v60[14] >= 11 )
      fread((char *)*a3 + 76, 4u, 1u, Stream);
    fread((char *)*a3 + 84, 1u, 1u, Stream);
    fread((char *)*a3 + 782, 1u, 1u, Stream);
    fread((char *)*a3 + 20, 1u, 1u, Stream);
    fread((char *)*a3 + 776, 4u, 1u, Stream);
    v4 = *((_BYTE *)Editor::Instance() + 2076) == 0;
    v59 = *(float *)&Stream;
    v58 = 1;
    v57 = 12;
    if ( v4 )
    {
      v43 = Editor::Instance();
      fread((char *)v43 + 628, v57, v58, (FILE *)LODWORD(v59));
      v59 = *(float *)&Stream;
      v58 = 1;
      v57 = 12;
      v44 = Editor::Instance();
      fread((char *)v44 + 604, v57, v58, (FILE *)LODWORD(v59));
      v59 = *(float *)&Stream;
      v58 = 1;
      v57 = 4;
      v45 = Editor::Instance();
      fread((char *)v45 + 240, v57, v58, (FILE *)LODWORD(v59));
    }
    else
    {
      v63 = 0.0;
      v64 = 0.0;
      v65 = 0.0;
      fread(&v63, v57, v58, (FILE *)LODWORD(v59));
      fread(&v63, 0xCu, 1u, Stream);
      fread(&v63, 4u, 1u, Stream);
    }
    fread(&unk_10283304, 4u, 1u, Stream);
    sub_10002F20(Stream, (char *)*a3 + 896);
    v83 = -1;
    std::string::~string(v79);
  }
}
