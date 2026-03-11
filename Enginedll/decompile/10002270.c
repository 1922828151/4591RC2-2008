/*
 * func-name: sub_10002270
 * func-address: 0x10002270
 * callers: 0x10005230
 * callees: 0x10001370, 0x10001c10, 0x10002020, 0x1007ec70, 0x10095c40, 0x100971c0, 0x10102130, 0x101374b0, 0x101374f0, 0x10137510, 0x10137540, 0x1017a0b0
 */

int __fastcall sub_10002270(int a1, int a2, FILE *Stream, World **a4)
{
  World *v4; // eax
  int v5; // edx
  int v6; // ecx
  World *v7; // eax
  int v8; // edx
  World *v9; // edx
  World *v10; // eax
  World *v11; // edx
  World *v12; // eax
  World *v13; // edx
  World *v14; // eax
  World *v15; // edx
  World *v16; // eax
  World *v17; // edx
  World *v18; // eax
  World *v19; // edx
  World *v20; // eax
  int v21; // edx
  World *v22; // eax
  float *v23; // eax
  struct Editor *v24; // eax
  struct Editor *v25; // eax
  struct Editor *v26; // eax
  char v28; // [esp-40h] [ebp-108h] BYREF
  int v29; // [esp-3Ch] [ebp-104h]
  int v30; // [esp-38h] [ebp-100h]
  FILE *v31; // [esp-34h] [ebp-FCh]
  int v32; // [esp-30h] [ebp-F8h]
  int v33; // [esp-2Ch] [ebp-F4h]
  int v34; // [esp-28h] [ebp-F0h]
  FILE *v35; // [esp-24h] [ebp-ECh]
  char *v36; // [esp-20h] [ebp-E8h] BYREF
  int v37; // [esp-1Ch] [ebp-E4h] BYREF
  int v38; // [esp-18h] [ebp-E0h]
  FILE *v39; // [esp-14h] [ebp-DCh]
  int v40; // [esp-10h] [ebp-D8h]
  size_t v41; // [esp-Ch] [ebp-D4h]
  size_t v42; // [esp-8h] [ebp-D0h]
  FILE *v43; // [esp-4h] [ebp-CCh]
  int *v44; // [esp+10h] [ebp-B8h]
  char Buffer; // [esp+17h] [ebp-B1h] BYREF
  fpos_t Position; // [esp+18h] [ebp-B0h] BYREF
  float v47; // [esp+20h] [ebp-A8h] BYREF
  float v48; // [esp+24h] [ebp-A4h]
  float v49; // [esp+28h] [ebp-A0h]
  float v50; // [esp+2Ch] [ebp-9Ch] BYREF
  float v51; // [esp+30h] [ebp-98h]
  float v52; // [esp+34h] [ebp-94h]
  int v53; // [esp+38h] [ebp-90h]
  float FogStartDistance; // [esp+3Ch] [ebp-8Ch] BYREF
  float v55; // [esp+40h] [ebp-88h] BYREF
  float FogExponent; // [esp+44h] [ebp-84h] BYREF
  float v57; // [esp+48h] [ebp-80h] BYREF
  float ClipPlane; // [esp+4Ch] [ebp-7Ch] BYREF
  float v59[2]; // [esp+50h] [ebp-78h] BYREF
  int v60; // [esp+58h] [ebp-70h] BYREF
  float v61; // [esp+5Ch] [ebp-6Ch] BYREF
  fpos_t v62; // [esp+60h] [ebp-68h] BYREF
  float v63[3]; // [esp+68h] [ebp-60h] BYREF
  float v64[3]; // [esp+74h] [ebp-54h] BYREF
  _DWORD v65[5]; // [esp+80h] [ebp-48h] BYREF
  float v66[4]; // [esp+94h] [ebp-34h] BYREF
  int v67[3]; // [esp+A4h] [ebp-24h] BYREF
  char v68[12]; // [esp+B0h] [ebp-18h] BYREF
  int v69; // [esp+C4h] [ebp-4h]

  LODWORD(v59[1]) = a1;
  v53 = *((_DWORD *)Editor::Instance() + 62);
  *((_DWORD *)Editor::Instance() + 62) = 0;
  Buffer = *((_BYTE *)Engine::Instance() + 1);
  fwrite(&Buffer, 1u, 1u, Stream);
  if ( Buffer )
  {
    v43 = Stream;
    v44 = (int *)&v36;
    Engine::Instance();
    Engine::GetModuleName(&v36);
    sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  }
  fwrite((char *)*a4 + 724, 1u, 1u, Stream);
  v4 = *a4;
  v65[0] = *((_DWORD *)*a4 + 6);
  v65[1] = *((_DWORD *)v4 + 7);
  v5 = *((_DWORD *)v4 + 8);
  v39 = Stream;
  v38 = 1;
  v65[2] = v5;
  v65[3] = *((_DWORD *)v4 + 9);
  fwrite(v65, 0x10u, 1u, Stream);
  v59[0] = World::GetFogDistance(*a4);
  fwrite(v59, 4u, 1u, Stream);
  FogExponent = World::GetFogExponent(*a4);
  fwrite(&FogExponent, 4u, 1u, Stream);
  FogStartDistance = World::GetFogStartDistance(*a4);
  fwrite(&FogStartDistance, 4u, 1u, Stream);
  v61 = *((float *)*a4 + 11);
  fwrite(&v61, 4u, 1u, Stream);
  v57 = *((float *)*a4 + 13);
  fwrite(&v57, 4u, 1u, Stream);
  v55 = *((float *)*a4 + 15);
  fwrite(&v55, 4u, 1u, Stream);
  fwrite((char *)*a4 + 748, 1u, 1u, Stream);
  fwrite((char *)*a4 + 752, 4u, 1u, Stream);
  fwrite((char *)*a4 + 536, 4u, 1u, Stream);
  fwrite((char *)*a4 + 540, 4u, 1u, Stream);
  fwrite((char *)*a4 + 544, 4u, 1u, Stream);
  fwrite((char *)*a4 + 548, 4u, 1u, Stream);
  fwrite((char *)*a4 + 560, 0xCu, 1u, Stream);
  v64[0] = 0.0;
  v64[1] = 0.0;
  v64[2] = 0.0;
  v63[0] = 0.0;
  v63[1] = 0.0;
  v63[2] = 0.0;
  sub_10001370(v66, v63, v64);
  v6 = *((_DWORD *)*a4 + 189);
  v69 = 0;
  if ( v6 )
    sub_10102130(v66);
  fwrite(v67, 0xCu, 1u, Stream);
  fwrite(v68, 0xCu, 1u, Stream);
  v7 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v7 + 596);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v8 = *((_DWORD *)*a4 + 156);
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, v8 + 100);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  fwrite((char *)*a4 + 3288, 0x6Cu, 1u, Stream);
  v9 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v9 + 3396);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v10 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v10 + 3424);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v11 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v11 + 3452);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v12 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v12 + 3480);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v13 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v13 + 3508);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v14 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v14 + 3536);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v15 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v15 + 3564);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v16 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v16 + 3592);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v17 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v17 + 3620);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v18 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v18 + 3648);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v19 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v19 + 3676);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v20 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v20 + 3704);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v43 = Stream;
  v21 = (int)*a4 + 3732;
  v44 = (int *)&v36;
  std::string::string(&v36, v21);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  v22 = *a4;
  v43 = Stream;
  v44 = (int *)&v36;
  std::string::string(&v36, (char *)v22 + 3760);
  sub_10001C10((char)v36, v37, v38, (int)v39, v40, v41, v42, v43);
  fwrite((char *)*a4 + 3788, 4u, 1u, Stream);
  v23 = (float *)*a4;
  v50 = 0.0;
  v51 = 0.0;
  v31 = Stream;
  v52 = 0.0;
  v30 = 1;
  v47 = 0.0;
  v29 = 12;
  v48 = 0.0;
  v49 = 0.0;
  v50 = v23[143];
  v51 = v23[144];
  v52 = v23[145];
  v47 = v23[146];
  v48 = v23[147];
  v49 = v23[148];
  fwrite(&v50, 0xCu, 1u, Stream);
  fwrite(&v47, 0xCu, 1u, Stream);
  ClipPlane = World::GetClipPlane(*a4);
  fwrite(&ClipPlane, 4u, 1u, Stream);
  fwrite((char *)*a4 + 76, 4u, 1u, Stream);
  fwrite((char *)*a4 + 84, 1u, 1u, Stream);
  fwrite((char *)*a4 + 782, 1u, 1u, Stream);
  fwrite((char *)*a4 + 20, 1u, 1u, Stream);
  fwrite((char *)*a4 + 776, 4u, 1u, Stream);
  v43 = Stream;
  v42 = 1;
  v41 = 12;
  v24 = Editor::Instance();
  fwrite((char *)v24 + 628, v41, v42, v43);
  v43 = Stream;
  v42 = 1;
  v41 = 12;
  v25 = Editor::Instance();
  fwrite((char *)v25 + 604, v41, v42, v43);
  v43 = Stream;
  v42 = 1;
  v41 = 4;
  v26 = Editor::Instance();
  fwrite((char *)v26 + 240, v41, v42, v43);
  fwrite(&unk_10283304, 4u, 1u, Stream);
  v44 = &v37;
  std::string::string(&v37, &unk_101BAB6B);
  v36 = (char *)*a4 + 896;
  v35 = Stream;
  v65[4] = &v28;
  LOBYTE(v69) = 1;
  std::string::string(&v28, "[These are the scene defaults]");
  LOBYTE(v69) = 0;
  sub_10002020(v28, v29, v30, (int)v31, v32, v33, v34, (int)v35, v36, v37, v38, (int)v39, v40, v41, v42, (int)v43);
  Position = 0;
  fgetpos(Stream, &Position);
  v62 = 4;
  fsetpos(Stream, &v62);
  v60 = Position;
  fwrite(&v60, 4u, 1u, Stream);
  fsetpos(Stream, &Position);
  *((_DWORD *)Editor::Instance() + 62) = v53;
  v69 = -1;
  return sub_1017A0B0(v66);
}
