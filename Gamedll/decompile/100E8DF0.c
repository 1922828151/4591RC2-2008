/*
 * func-name: ??0SenceBackgroundMusicPlayer@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100e8df0
 * callers: 0x1000eb88
 * callees: none
 */

SenceBackgroundMusicPlayer *__thiscall SenceBackgroundMusicPlayer::SenceBackgroundMusicPlayer(
        SenceBackgroundMusicPlayer *this,
        struct World *a2)
{
  Editor *v3; // eax
  World *v4; // ecx
  Editor *v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+4Ch] [ebp-ECh] BYREF
  int v10; // [esp+50h] [ebp-E8h]
  int v11; // [esp+54h] [ebp-E4h]
  int v12; // [esp+58h] [ebp-E0h]
  int v13; // [esp+5Ch] [ebp-DCh]
  int v14; // [esp+60h] [ebp-D8h]
  int v15; // [esp+64h] [ebp-D4h]
  char *v16; // [esp+68h] [ebp-D0h]
  int v17; // [esp+6Ch] [ebp-CCh] BYREF
  int v18; // [esp+70h] [ebp-C8h]
  int v19; // [esp+74h] [ebp-C4h]
  int v20; // [esp+78h] [ebp-C0h]
  int v21; // [esp+7Ch] [ebp-BCh]
  int v22; // [esp+80h] [ebp-B8h]
  int v23; // [esp+84h] [ebp-B4h] BYREF
  int v24; // [esp+88h] [ebp-B0h] BYREF
  int v25; // [esp+8Ch] [ebp-ACh]
  int v26; // [esp+90h] [ebp-A8h]
  int v27; // [esp+94h] [ebp-A4h]
  int v28; // [esp+98h] [ebp-A0h]
  int v29; // [esp+9Ch] [ebp-9Ch]
  int v30; // [esp+A0h] [ebp-98h]
  int v31; // [esp+A4h] [ebp-94h]
  int v32; // [esp+A8h] [ebp-90h]
  int v33; // [esp+ACh] [ebp-8Ch]
  int v34; // [esp+B0h] [ebp-88h]
  SenceBackgroundMusicPlayer *v35; // [esp+C0h] [ebp-78h]
  int *v36; // [esp+C4h] [ebp-74h]
  int *v37; // [esp+C8h] [ebp-70h]
  _BYTE v38[96]; // [esp+CCh] [ebp-6Ch] BYREF
  int v39; // [esp+134h] [ebp-4h]

  v35 = this;
  Actor::Actor(this, a2);
  v39 = 0;
  *(_DWORD *)this = &SenceBackgroundMusicPlayer::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1084);
  LOBYTE(v39) = 2;
  v3 = (Editor *)Editor::Instance(v33, v34);
  if ( Editor::GetEditorMode(v3) )
  {
    v32 = 1;
    v31 = 0;
    v30 = 0;
    std::string::string(&v23, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  std::string::operator=((char *)this + 1052, &unk_10310C83);
  std::string::operator=((char *)this + 1084, &unk_10310C9F);
  v4 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 270) = 1.0;
  *((_BYTE *)this + 724) = 1;
  if ( v4 && World::IsLoading(v4) || (v5 = (Editor *)Editor::Instance(v33, v34), Editor::GetEditorMode(v5)) )
  {
    v32 = 0;
    v31 = 1;
    std::string::string(&v24, &unk_10310CB0);
    v36 = &v17;
    LOBYTE(v39) = 3;
    std::string::string(&v17, &unk_10310CC0);
    v16 = (char *)this + 1080;
    v37 = &v9;
    LOBYTE(v39) = 4;
    std::string::string(&v9, "Volume");
    LOBYTE(v39) = 2;
    v6 = EditorVar::EditorVar(
           v38,
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
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
           v32);
    LOBYTE(v39) = 5;
    std::vector<EditorVar>::push_back((char *)this + 424, v6);
    LOBYTE(v39) = 2;
    EditorVar::~EditorVar((EditorVar *)v38);
    v32 = 0;
    v31 = 1;
    std::string::string(&v24, &unk_10310CD4);
    v37 = &v17;
    LOBYTE(v39) = 6;
    std::string::string(&v17, &unk_10310CE4);
    v16 = (char *)this + 1052;
    v36 = &v9;
    LOBYTE(v39) = 7;
    std::string::string(&v9, "MusicFilename");
    LOBYTE(v39) = 2;
    v7 = EditorVar::EditorVar(
           v38,
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
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
           v32);
    LOBYTE(v39) = 8;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v39) = 2;
    EditorVar::~EditorVar((EditorVar *)v38);
  }
  return this;
}
