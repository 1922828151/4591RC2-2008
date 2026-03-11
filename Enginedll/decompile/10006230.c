/*
 * func-name: sub_10006230
 * func-address: 0x10006230
 * callers: 0x10009140
 * callees: 0x10001ca0, 0x10005610, 0x10005a20, 0x10005ad0, 0x10011140, 0x100111d0, 0x100116a0, 0x101786e0, 0x101a251c
 */

char __thiscall sub_10006230(int *this, FILE *Stream)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  void *v7; // eax
  void *v8; // eax
  int i; // ebx
  int j; // ebx
  int v11; // eax
  int *v13; // ebx
  char v14; // [esp+15h] [ebp-203h] BYREF
  char v15; // [esp+16h] [ebp-202h] BYREF
  char v16; // [esp+17h] [ebp-201h] BYREF
  int v17; // [esp+18h] [ebp-200h] BYREF
  void *v18; // [esp+1Ch] [ebp-1FCh] BYREF
  char v19; // [esp+23h] [ebp-1F5h] BYREF
  int v20; // [esp+24h] [ebp-1F4h] BYREF
  int Buffer; // [esp+28h] [ebp-1F0h] BYREF
  int *v22; // [esp+2Ch] [ebp-1ECh]
  int v23[7]; // [esp+30h] [ebp-1E8h] BYREF
  int v24; // [esp+4Ch] [ebp-1CCh] BYREF
  int v25[23]; // [esp+50h] [ebp-1C8h] BYREF
  char v26; // [esp+ACh] [ebp-16Ch]
  char v27; // [esp+ADh] [ebp-16Bh]
  int v28[7]; // [esp+B0h] [ebp-168h] BYREF
  int v29[7]; // [esp+CCh] [ebp-14Ch] BYREF
  _BYTE v30[28]; // [esp+E8h] [ebp-130h] BYREF
  _BYTE v31[28]; // [esp+104h] [ebp-114h] BYREF
  _BYTE v32[56]; // [esp+120h] [ebp-F8h] BYREF
  int v33[4]; // [esp+158h] [ebp-C0h] BYREF
  int v34[4]; // [esp+168h] [ebp-B0h] BYREF
  _BYTE v35[4]; // [esp+178h] [ebp-A0h] BYREF
  float v36[16]; // [esp+17Ch] [ebp-9Ch] BYREF
  _BYTE v37[16]; // [esp+1BCh] [ebp-5Ch] BYREF
  float v38[16]; // [esp+1CCh] [ebp-4Ch] BYREF
  int v39; // [esp+214h] [ebp-4h]

  v22 = this;
  sub_10001CA0((int)v28, Stream);
  v2 = 0;
  v39 = 0;
  Buffer = 0;
  fread(&Buffer, 4u, 1u, Stream);
  memset(v36, 0, sizeof(v36));
  sub_101786E0(1.0);
  v36[15] = 1.0;
  fread(v36, 0x40u, 1u, Stream);
  fread(v37, 0x10u, 1u, Stream);
  sub_10001CA0((int)v29, Stream);
  LOBYTE(v39) = 1;
  v20 = 0;
  fread(&v20, 4u, 1u, Stream);
  memset(&unk_10283728, 0, 0x400u);
  if ( v20 > 0 )
  {
    do
    {
      std::string::string(&v25[1]);
      LOBYTE(v39) = 2;
      std::string::string(&v25[8]);
      LOBYTE(v39) = 3;
      std::string::string(&v25[15]);
      v26 = 1;
      v27 = 0;
      LOBYTE(v39) = 4;
      v18 = &unk_10283728;
      sub_10005610(v25, &v18, Stream, &v24, (int)&v25[1]);
      LOBYTE(v39) = 6;
      std::string::~string(&v25[15]);
      LOBYTE(v39) = 5;
      std::string::~string(&v25[8]);
      LOBYTE(v39) = 1;
      std::string::~string(&v25[1]);
      ++v2;
    }
    while ( v2 < v20 );
  }
  memset(v38, 0, sizeof(v38));
  sub_101786E0(1.0);
  v38[15] = 1.0;
  fread(v38, 0x40u, 1u, Stream);
  ScriptData::ScriptData((ScriptData *)v30);
  LOBYTE(v39) = 7;
  v16 = 0;
  fread(&v16, 1u, 1u, Stream);
  if ( v16 )
  {
    v3 = sub_10001CA0((int)v23, Stream);
    LOBYTE(v39) = 8;
    std::string::operator=(v30, v3);
    LOBYTE(v39) = 7;
    std::string::~string(v23);
    v4 = sub_10001CA0((int)v23, Stream);
    LOBYTE(v39) = 9;
    std::string::operator=(v31, v4);
    LOBYTE(v39) = 7;
    std::string::~string(v23);
    v5 = sub_10001CA0((int)v23, Stream);
    LOBYTE(v39) = 10;
    std::string::operator=(v32, v5);
    LOBYTE(v39) = 7;
    std::string::~string(v23);
    fread(v35, 1u, 1u, Stream);
    v6 = 0;
    v18 = 0;
    fread(&v18, 4u, 1u, Stream);
    if ( (int)v18 > 0 )
    {
      do
      {
        v7 = (void *)sub_10001CA0((int)v23, Stream);
        LOBYTE(v39) = 11;
        sub_100116A0((int)v33, v7);
        LOBYTE(v39) = 7;
        std::string::~string(v23);
        v8 = (void *)sub_10001CA0((int)v23, Stream);
        LOBYTE(v39) = 12;
        sub_100116A0((int)v34, v8);
        LOBYTE(v39) = 7;
        std::string::~string(v23);
        ++v6;
      }
      while ( v6 < (int)v18 );
    }
  }
  v17 = 0;
  fread(&v17, 4u, 1u, Stream);
  fread(&v19, 1u, 1u, Stream);
  for ( i = 0; i < v17; ++i )
  {
    sub_10001CA0((int)v23, Stream);
    std::string::~string(v23);
  }
  fread(&v17, 4u, 1u, Stream);
  for ( j = 0; j < v17; ++j )
  {
    sub_10001CA0((int)v23, Stream);
    std::string::~string(v23);
  }
  v11 = Buffer;
  v15 = 0;
  if ( Buffer || (fread(&v15, 1u, 1u, Stream), (v11 = Buffer) != 0) && (!v15 || !v35[0]) )
  {
    if ( v11 == 1 )
      sub_10005A20(Stream);
    goto LABEL_16;
  }
  if ( !v15 )
  {
LABEL_16:
    LOBYTE(v39) = 1;
    ScriptData::~ScriptData((ScriptData *)v30);
    LOBYTE(v39) = 0;
    std::string::~string(v29);
    v39 = -1;
    std::string::~string(v28);
    return 1;
  }
  v13 = v22;
  if ( sub_10005AD0(v22, Stream, 0) )
  {
    if ( v13[11] >= 3 )
    {
      v14 = 0;
      fread(&v14, 1u, 1u, Stream);
      if ( v14 )
      {
        memset(v25, 0, 0x40u);
        sub_101786E0(1.0);
        *(float *)&v25[15] = 1.0;
        fread(v25, 0x40u, 1u, Stream);
        sub_10005AD0(v13, Stream, 0);
      }
    }
    goto LABEL_16;
  }
  LOBYTE(v39) = 1;
  ScriptData::~ScriptData((ScriptData *)v30);
  LOBYTE(v39) = 0;
  std::string::~string(v29);
  v39 = -1;
  std::string::~string(v28);
  return 0;
}
