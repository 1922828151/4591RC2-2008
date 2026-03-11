/*
 * func-name: sub_10129250
 * func-address: 0x10129250
 * callers: 0x10008d4b
 * callees: 0x102c9d98
 */

char __thiscall sub_10129250(_DWORD *this, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // ecx
  Texture *v11; // ebx
  int v13; // ebp
  Texture *v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _DWORD v18[7]; // [esp-18h] [ebp-5Ch] BYREF
  int v19; // [esp+4h] [ebp-40h]
  float v20; // [esp+8h] [ebp-3Ch]
  float v21; // [esp+Ch] [ebp-38h]
  float v22; // [esp+10h] [ebp-34h]
  float v23; // [esp+14h] [ebp-30h]
  float v24; // [esp+18h] [ebp-2Ch]
  int v25; // [esp+1Ch] [ebp-28h]
  Texture *v26; // [esp+34h] [ebp-10h]
  int v27; // [esp+40h] [ebp-4h]

  v10 = this[27];
  v11 = 0;
  v27 = 0;
  if ( v10 && a2 < (this[28] - v10) >> 3 )
  {
    v13 = 8 * a2;
    if ( !*(_DWORD *)(this[27] + 8 * a2 + 4) )
    {
      v14 = (Texture *)operator new(0x9Cu);
      v26 = v14;
      LOBYTE(v27) = 1;
      if ( v14 )
        v11 = Texture::Texture(v14);
      v15 = this[27];
      LOBYTE(v27) = 0;
      if ( !v15 || a2 >= (this[28] - v15) >> 3 )
        _invalid_parameter_noinfo();
      v16 = this[27];
      v25 = 0;
      v24 = 0.0;
      *(_DWORD *)(v16 + v13 + 4) = v11;
      v23 = 1.0;
      v22 = 1.0;
      v21 = 0.0;
      v20 = 0.0;
      v19 = 0;
      v26 = (Texture *)v18;
      std::string::string(v18, &a3);
      v17 = this[27];
      if ( !v17 || a2 >= (this[28] - v17) >> 3 )
        _invalid_parameter_noinfo();
      Texture::Load(
        *(_DWORD *)(this[27] + v13 + 4),
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        LODWORD(v20),
        LODWORD(v21),
        LODWORD(v22),
        LODWORD(v23),
        LODWORD(v24),
        v25);
    }
    v27 = -1;
    std::string::~string(&a3);
    return 1;
  }
  else
  {
    v27 = -1;
    std::string::~string(&a3);
    return 0;
  }
}
