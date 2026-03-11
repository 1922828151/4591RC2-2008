/*
 * func-name: ?MergeScene@Editor@@QAEXPBD@Z
 * func-address: 0x10087570
 * callers: none
 * callees: 0x10012a30, 0x10052ae0, 0x1007bf30, 0x1007da70, 0x10080030, 0x10080200, 0x10082690, 0x10091470, 0x1009ff60, 0x100a01c0, 0x1011acf0, 0x1013a9b0, 0x1013df40, 0x101a2500
 */

void __thiscall Editor::MergeScene(Editor *this, const char *a2)
{
  int v3; // eax
  int v4; // eax
  _BYTE *v5; // edx
  _DWORD *v6; // ecx
  unsigned int i; // esi
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // eax
  _DWORD **v18; // eax
  int *v19; // eax
  _DWORD *v20; // ecx
  _DWORD **v21; // ecx
  _DWORD *v22; // ecx
  int v23; // edi
  bool v24; // zf
  FXManager *v25; // eax
  _BYTE *v26; // eax
  char *v27; // esi
  char *v28; // edi
  int v29; // eax
  char *v30; // ebp
  char v31; // [esp-3Ch] [ebp-F98h] BYREF
  int v32; // [esp-38h] [ebp-F94h]
  int v33; // [esp-34h] [ebp-F90h]
  int v34; // [esp-30h] [ebp-F8Ch]
  int v35; // [esp-2Ch] [ebp-F88h]
  int v36; // [esp-28h] [ebp-F84h]
  int v37; // [esp-24h] [ebp-F80h]
  char v38; // [esp-20h] [ebp-F7Ch] BYREF
  int v39; // [esp-1Ch] [ebp-F78h]
  int v40; // [esp-18h] [ebp-F74h]
  int v41; // [esp-14h] [ebp-F70h]
  int v42; // [esp-10h] [ebp-F6Ch]
  int v43; // [esp-Ch] [ebp-F68h]
  struct World *v44; // [esp-8h] [ebp-F64h]
  int *v45; // [esp-4h] [ebp-F60h]
  int v46; // [esp+10h] [ebp-F4Ch] BYREF
  char v47; // [esp+14h] [ebp-F48h] BYREF
  void *v48; // [esp+18h] [ebp-F44h]
  int v49; // [esp+1Ch] [ebp-F40h]
  int v50; // [esp+20h] [ebp-F3Ch]
  int v51; // [esp+24h] [ebp-F38h] BYREF
  void *v52; // [esp+28h] [ebp-F34h]
  int v53; // [esp+2Ch] [ebp-F30h]
  int v54; // [esp+30h] [ebp-F2Ch]
  _DWORD v55[4]; // [esp+34h] [ebp-F28h] BYREF
  int v56; // [esp+44h] [ebp-F18h]
  int v57; // [esp+48h] [ebp-F14h]
  char v58; // [esp+4Ch] [ebp-F10h]
  char v59; // [esp+4Dh] [ebp-F0Fh]
  float v60; // [esp+50h] [ebp-F0Ch]
  float v61; // [esp+54h] [ebp-F08h]
  _DWORD v62[9]; // [esp+58h] [ebp-F04h] BYREF
  _BYTE v63[3224]; // [esp+7Ch] [ebp-EE0h] BYREF
  void *Destination; // [esp+D14h] [ebp-248h]
  void *Source; // [esp+D18h] [ebp-244h]
  int v66; // [esp+F58h] [ebp-4h]

  *((_BYTE *)Editor::inst + 2076) = 0;
  Editor::UnSelectAll(this);
  *((_BYTE *)this + 2060) = 1;
  World::World((World *)v63);
  v66 = 1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v45 = (int *)v63;
  v46 = (int)&v38;
  std::string::string(&v38, a2);
  Serializer::LoadWorld(v38, v39, v40, v41, v42, v43, v44, v45);
  v3 = *((_DWORD *)this + 512);
  v45 = (int *)&v47;
  v4 = std::string::c_str(v3 + 3188);
  v46 = (int)&v38;
  std::string::string(&v38, v4);
  v62[8] = &v31;
  LOBYTE(v66) = 2;
  std::string::string(&v31, a2);
  LOBYTE(v66) = 1;
  Editor::CopyPrtFiles(v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, (int)v44, v45);
  v60 = 100.0;
  v58 = 1;
  v61 = 100.0;
  v56 = 0;
  v55[1] = 0;
  LOWORD(v55[0]) = 0;
  v59 = 0;
  v55[2] = 0;
  v57 = 0;
  v55[3] = GetTickCount();
  v56 = *((_DWORD *)this + 512);
  v58 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v5 = Source;
  v6 = Destination;
  LOBYTE(v66) = 4;
  for ( i = 0; v6 && i < (v5 - (_BYTE *)v6) >> 2; ++i )
  {
    v8 = (_DWORD *)v6[i];
    v9 = v8[64];
    v8 += 64;
    v62[0] = v9;
    v62[1] = v8[1];
    v10 = v8[2];
    v11 = v8[3];
    v62[2] = v10;
    v62[3] = v11;
    sub_10080030((GUID *)v6[i]);
    v12 = Destination;
    if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v12 = Destination;
    }
    v13 = (_DWORD *)v12[i];
    v14 = v13[65];
    v15 = v13[64];
    v13 += 64;
    v62[5] = v14;
    v62[4] = v15;
    v16 = v13[2];
    v17 = v13[3];
    v62[6] = v16;
    v62[7] = v17;
    sub_10091470((int)&v51, v62);
    v18 = (_DWORD **)Destination;
    if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v18 = (_DWORD **)Destination;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v18[i] + 28))(v18[i], *((_DWORD *)this + 512));
    v19 = (int *)Destination;
    if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v19 = (int *)Destination;
    }
    std::vector<Actor *>::push_back((_DWORD *)(*((_DWORD *)this + 512) + 3220), &v19[i]);
    v20 = Destination;
    if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v20 = Destination;
    }
    sub_1007DA70(v55, v20[i]);
    v21 = (_DWORD **)Destination;
    if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
    {
      invalid_parameter_noinfo();
      v21 = (_DWORD **)Destination;
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v21[i] + 40))(v21[i]) )
    {
      v22 = Destination;
      if ( !Destination || i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2 )
      {
        invalid_parameter_noinfo();
        v22 = Destination;
      }
      v46 = v22[i];
      sub_10052AE0((_DWORD *)(*((_DWORD *)this + 512) + 3236), &v46);
    }
    v6 = Destination;
    if ( !Destination || (v5 = Source, i >= ((_BYTE *)Source - (_BYTE *)Destination) >> 2) )
    {
      invalid_parameter_noinfo();
      v5 = Source;
      v6 = Destination;
    }
    v23 = v6[i];
    v24 = *(_BYTE *)(v23 + 442) == 0;
    v46 = v23;
    if ( !v24 )
    {
      if ( !*(_BYTE *)(v23 + 441) )
      {
        v45 = &v46;
        *((_BYTE *)this + 2060) = 1;
        std::vector<Actor *>::push_back((_DWORD *)this + 561, v45);
      }
      *(_BYTE *)(v23 + 441) = 1;
      v5 = Source;
      v6 = Destination;
    }
  }
  v45 = (int *)*((_DWORD *)this + 512);
  v44 = (struct World *)v63;
  v25 = FXManager::Instance();
  FXManager::ChangeSystemsWorld(v25, v44, (struct World *)v45);
  v26 = Source;
  v27 = (char *)Destination;
  v28 = (char *)Source;
  if ( Destination > Source )
  {
    invalid_parameter_noinfo();
    v26 = Source;
    v27 = (char *)Destination;
    if ( Destination > Source )
    {
      invalid_parameter_noinfo();
      v26 = Source;
    }
  }
  if ( v27 != v28 )
  {
    v29 = (v26 - v28) >> 2;
    v30 = &v27[4 * v29];
    if ( v29 > 0 )
      memmove_s(v27, 4 * v29, v28, 4 * v29);
    Source = v30;
  }
  *((_BYTE *)Editor::inst + 2076) = 1;
  if ( v52 )
    operator delete(v52);
  v52 = 0;
  v53 = 0;
  v54 = 0;
  LOBYTE(v66) = 1;
  nullsub_1();
  if ( v48 )
    operator delete(v48);
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v66 = -1;
  World::~World((World *)v63);
}
