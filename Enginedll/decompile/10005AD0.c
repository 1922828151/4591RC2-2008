/*
 * func-name: sub_10005AD0
 * func-address: 0x10005ad0
 * callers: 0x10005ad0, 0x10006230
 * callees: 0x10001ca0, 0x10005900, 0x10005ad0, 0x100158b0, 0x101786e0, 0x101a251c
 */

char __thiscall sub_10005AD0(int *this, FILE *Stream, int a3)
{
  int last_of; // eax
  int v5; // eax
  char v7; // [esp+15h] [ebp-EFh] BYREF
  char v8; // [esp+16h] [ebp-EEh] BYREF
  char v9; // [esp+17h] [ebp-EDh] BYREF
  int v10; // [esp+18h] [ebp-ECh] BYREF
  float v11[3]; // [esp+1Ch] [ebp-E8h] BYREF
  float v12[3]; // [esp+28h] [ebp-DCh] BYREF
  _BYTE v13[4]; // [esp+34h] [ebp-D0h] BYREF
  int v14[7]; // [esp+38h] [ebp-CCh] BYREF
  _BYTE v15[16]; // [esp+54h] [ebp-B0h] BYREF
  int v16[7]; // [esp+64h] [ebp-A0h] BYREF
  _BYTE v17[28]; // [esp+80h] [ebp-84h] BYREF
  _BYTE v18[28]; // [esp+9Ch] [ebp-68h] BYREF
  float Buffer[16]; // [esp+B8h] [ebp-4Ch] BYREF
  int v20; // [esp+100h] [ebp-4h]

  sub_10001CA0((int)v14, Stream);
  v20 = 0;
  memset(Buffer, 0, sizeof(Buffer));
  sub_101786E0(1.0);
  Buffer[15] = 1.0;
  fread(Buffer, 0x40u, 1u, Stream);
  v10 = 0;
  fread(&v10, 4u, 1u, Stream);
  v8 = 0;
  fread(&v8, 1u, 1u, Stream);
  if ( v8 )
  {
    sub_10001CA0((int)v16, Stream);
    LOBYTE(v20) = 1;
    fread(v13, 4u, 1u, Stream);
    if ( this[11] > 8 )
    {
      v12[0] = 0.0;
      v12[1] = 0.0;
      v12[2] = 0.0;
      v11[0] = 0.0;
      v11[1] = 0.0;
      v11[2] = 0.0;
      fread(v12, 0xCu, 1u, Stream);
      fread(v11, 0xCu, 1u, Stream);
    }
    last_of = std::string::find_last_of(this + 12, "\\", std::string::npos);
    v5 = std::string::substr(this + 12, v18, 0, last_of + 1);
    LOBYTE(v20) = 2;
    std::operator+<char>(v17, v5, v16);
    LOBYTE(v20) = 4;
    std::string::~string(v18);
    sub_100158B0(v17);
    fread(v15, 0x10u, 1u, Stream);
    fread(v15, 0x10u, 1u, Stream);
    v9 = 0;
    fread(&v9, 1u, 1u, Stream);
    if ( v9 )
      sub_10005900(Stream);
    LOBYTE(v20) = 1;
    std::string::~string(v17);
    LOBYTE(v20) = 0;
    std::string::~string(v16);
  }
  v7 = 0;
  fread(&v7, 1u, 1u, Stream);
  if ( v7 && !(unsigned __int8)sub_10005AD0(Stream, a3 + 1)
    || (fread(&v7, 1u, 1u, Stream), v7) && !(unsigned __int8)sub_10005AD0(Stream, a3) )
  {
    v20 = -1;
    std::string::~string(v14);
    return 0;
  }
  else
  {
    v20 = -1;
    std::string::~string(v14);
    return 1;
  }
}
