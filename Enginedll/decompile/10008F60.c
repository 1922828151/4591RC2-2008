/*
 * func-name: sub_10008F60
 * func-address: 0x10008f60
 * callers: 0x10009140
 * callees: 0x10001ca0, 0x10005610, 0x1000d3d0, 0x10015e90, 0x10122ce0, 0x101a251c
 */

size_t __thiscall sub_10008F60(int *this, FILE *Stream)
{
  size_t result; // eax
  int v4; // edi
  int v5; // eax
  char v6; // [esp-28h] [ebp-1ACh] BYREF
  int v7; // [esp-24h] [ebp-1A8h]
  int v8; // [esp-20h] [ebp-1A4h]
  int v9; // [esp-1Ch] [ebp-1A0h]
  int v10; // [esp-18h] [ebp-19Ch]
  int v11; // [esp-14h] [ebp-198h]
  int v12; // [esp-10h] [ebp-194h]
  int v13; // [esp-Ch] [ebp-190h]
  int v14; // [esp-8h] [ebp-18Ch]
  int v15; // [esp-4h] [ebp-188h]
  int v16; // [esp+10h] [ebp-174h] BYREF
  int v17; // [esp+14h] [ebp-170h]
  int Buffer; // [esp+18h] [ebp-16Ch] BYREF
  int v19; // [esp+1Ch] [ebp-168h] BYREF
  int v20; // [esp+20h] [ebp-164h] BYREF
  int v21; // [esp+24h] [ebp-160h] BYREF
  int v22[7]; // [esp+28h] [ebp-15Ch] BYREF
  int v23[7]; // [esp+44h] [ebp-140h] BYREF
  int v24; // [esp+60h] [ebp-124h] BYREF
  int v25[69]; // [esp+64h] [ebp-120h] BYREF
  int v26; // [esp+180h] [ebp-4h]

  result = fread(&Buffer, 4u, 1u, Stream);
  v4 = 0;
  v17 = 0;
  if ( Buffer > 0 )
  {
    while ( 1 )
    {
      v21 = 0;
      fread(&v21, 4u, 1u, Stream);
      sub_10001CA0((int)v23, Stream);
      v26 = 0;
      v16 = 0;
      fread(&v16, 4u, 1u, Stream);
      fread(&v16, 4u, 1u, Stream);
      fread(&v16, 4u, 1u, Stream);
      if ( this[11] >= 2 )
        fread(&v16, 4u, 1u, Stream);
      v5 = sub_10001CA0((int)v22, Stream);
      LOBYTE(v26) = 1;
      sub_10015E90(v5);
      LOBYTE(v26) = 0;
      std::string::~string(v22);
      sub_10001CA0((int)v22, Stream);
      std::string::~string(v22);
      fread(&v16, 4u, 1u, Stream);
      memset(&unk_10283B28, 0, 0x400u);
      if ( v16 > 0 )
      {
        do
        {
          v15 = 0;
          v14 = 0;
          v13 = 3;
          v19 = (int)&v6;
          std::string::string(&v6, &unk_101BABA3);
          ShaderVar::ShaderVar(v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
          LOBYTE(v26) = 2;
          v20 = 0;
          v19 = (int)&unk_10283B28;
          sub_10005610(&v24, (void **)&v19, Stream, &v20, (int)v25);
          LOBYTE(v26) = 0;
          ShaderVar::~ShaderVar((ShaderVar *)&v24);
          ++v4;
        }
        while ( v4 < v16 );
      }
      v26 = -1;
      std::string::~string(v23);
      result = ++v17;
      if ( v17 >= Buffer )
        break;
      v4 = 0;
    }
  }
  return result;
}
