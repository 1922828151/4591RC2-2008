/*
 * func-name: sub_1002B140
 * func-address: 0x1002b140
 * callers: 0x100112cf
 * callees: 0x102bde10, 0x102c9d62
 */

void __cdecl sub_1002B140(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  char v8; // [esp-Ch] [ebp-74h] BYREF
  int v9; // [esp-8h] [ebp-70h]
  int v10; // [esp-4h] [ebp-6Ch]
  int v11; // [esp+0h] [ebp-68h]
  int v12; // [esp+4h] [ebp-64h]
  int v13; // [esp+8h] [ebp-60h]
  int v14; // [esp+Ch] [ebp-5Ch] BYREF
  int v15; // [esp+10h] [ebp-58h] BYREF
  int v16; // [esp+14h] [ebp-54h]
  int v17; // [esp+18h] [ebp-50h]
  int v18; // [esp+1Ch] [ebp-4Ch]
  int v19; // [esp+20h] [ebp-48h]
  int v20; // [esp+24h] [ebp-44h]
  int v21; // [esp+28h] [ebp-40h]
  float v22; // [esp+38h] [ebp-30h]
  char *v23; // [esp+3Ch] [ebp-2Ch] BYREF
  _BYTE v24[24]; // [esp+40h] [ebp-28h] BYREF
  int v25; // [esp+64h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+68h] [ebp+0h]

  v1 = OggPlayer::Instance();
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 28))(v1) )
  {
    v2 = OggPlayer::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2);
  }
  std::string::string(&v23, a1);
  v25 = 0;
  if ( (unsigned __int8)FindMedia(&v23, "Music", 0, 0) )
  {
    v21 = 0x10000;
    v3 = OggPlayer::Instance();
    v4 = std::string::c_str(v24);
    v22 = COERCE_FLOAT(&v14);
    std::string::string(&v14, v4);
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)v3 + 4))(
      v3,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v5 = OggPlayer::Instance();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, 1);
    v6 = OggPlayer::Instance();
    v22 = COERCE_FLOAT(&v15);
    v7 = v6;
    std::string::string(&v15, &unk_1030890D);
    v23 = &v8;
    std::string::string(&v8, "MusicVolume");
    Engine::Instance();
    LOBYTE(retaddr) = 0;
    v22 = sub_102BDE10(v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
    (*(void (__thiscall **)(int, float))(*(_DWORD *)v7 + 20))(v7, COERCE_FLOAT(LODWORD(v22)));
  }
  v25 = -1;
  std::string::~string(&v23);
}
