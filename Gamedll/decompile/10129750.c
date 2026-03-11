/*
 * func-name: sub_10129750
 * func-address: 0x10129750
 * callers: 0x10012913
 * callees: 0x102c9d98
 */

float *__thiscall sub_10129750(float *this)
{
  void *v2; // ebp
  Texture *v3; // eax
  Texture *v4; // eax
  Texture *v5; // eax
  Texture *v6; // eax
  int v7; // eax
  int v8; // edi
  void (__thiscall *v9)(int, int, int, int, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, unsigned int); // edx
  int v11; // [esp+Ch] [ebp-78h]
  int v12; // [esp+10h] [ebp-74h] BYREF
  int v13; // [esp+14h] [ebp-70h] BYREF
  int v14; // [esp+18h] [ebp-6Ch]
  int v15; // [esp+1Ch] [ebp-68h]
  int v16; // [esp+20h] [ebp-64h]
  int v17; // [esp+24h] [ebp-60h]
  int v18; // [esp+28h] [ebp-5Ch]
  int v19; // [esp+2Ch] [ebp-58h] BYREF
  int v20; // [esp+30h] [ebp-54h]
  float v21; // [esp+34h] [ebp-50h]
  float v22; // [esp+38h] [ebp-4Ch]
  float v23; // [esp+3Ch] [ebp-48h]
  float v24; // [esp+40h] [ebp-44h]
  float v25; // [esp+44h] [ebp-40h]
  unsigned int v26; // [esp+48h] [ebp-3Ch]
  float *v27; // [esp+60h] [ebp-24h]
  Texture *v28; // [esp+64h] [ebp-20h]
  int *v29; // [esp+68h] [ebp-1Ch]
  float v30; // [esp+6Ch] [ebp-18h]
  float v31; // [esp+70h] [ebp-14h]
  float v32; // [esp+74h] [ebp-10h]
  int v33; // [esp+80h] [ebp-4h]

  v27 = this;
  v2 = this + 7;
  *this = 0.0;
  this[1] = 0.0;
  this[2] = 0.0;
  std::string::string(this + 7);
  v33 = 0;
  std::string::string(this + 14);
  this[27] = 0.0;
  this[28] = 0.0;
  this[29] = 0.0;
  v30 = 0.0;
  v26 = (unsigned int)"NONE";
  v31 = 0.0;
  v32 = 0.0;
  this[4] = 0.0;
  *this = 0.0;
  this[5] = 1.0;
  this[1] = 0.0;
  this[2] = 0.0;
  this[6] = 0.0;
  *((_BYTE *)this + 12) = 0;
  std::string::operator=(v2, v26);
  v26 = (unsigned int)"NONE";
  this[21] = NAN;
  std::string::operator=(this + 14, v26);
  v26 = 156;
  this[22] = 0.0;
  this[24] = 0.0;
  this[25] = 0.0;
  v3 = (Texture *)operator new(v26);
  v28 = v3;
  LOBYTE(v33) = 3;
  if ( v3 )
    v4 = Texture::Texture(v3);
  else
    v4 = 0;
  v26 = 0;
  v25 = 0.0;
  LOBYTE(v33) = 2;
  v24 = 1.0;
  *((_DWORD *)this + 23) = v4;
  v23 = 1.0;
  v22 = 0.0;
  v21 = 0.0;
  v20 = 0;
  v28 = (Texture *)&v13;
  std::string::string(&v13, "Blood.dds");
  Texture::Load(
    *((_DWORD *)this + 23),
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    LODWORD(v21),
    LODWORD(v22),
    LODWORD(v23),
    LODWORD(v24),
    LODWORD(v25),
    v26);
  v5 = (Texture *)operator new(0x9Cu);
  v28 = v5;
  LOBYTE(v33) = 4;
  if ( v5 )
    v6 = Texture::Texture(v5);
  else
    v6 = 0;
  LOBYTE(v33) = 2;
  *((_DWORD *)this + 22) = v6;
  v7 = Canvas::Instance();
  v26 = 40;
  v28 = (Texture *)&v19;
  v8 = v7;
  std::string::string(&v19, "Arial");
  v29 = &v12;
  LOBYTE(v33) = 5;
  std::string::string(&v12, v2);
  v9 = *(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, unsigned int))(*(_DWORD *)v8 + 148);
  v11 = *((_DWORD *)this + 22);
  LOBYTE(v33) = 2;
  v9(
    v8,
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
    LODWORD(v21),
    LODWORD(v22),
    LODWORD(v23),
    LODWORD(v24),
    LODWORD(v25),
    v26);
  return this;
}
