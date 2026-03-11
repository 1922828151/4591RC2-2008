/*
 * func-name: ?LoadSHProbe@World@@QAEHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10117840
 * callers: 0x1012ffd0
 * callees: 0x1000cb70, 0x10097800, 0x10117d50, 0x10136140, 0x10136290, 0x10136360, 0x10136530, 0x101781b2, 0x101a251c, 0x101a2534
 */

int __thiscall World::LoadSHProbe(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  float *v9; // eax
  float *v10; // esi
  const char *v11; // eax
  struct IDirect3DTexture9 *Texture; // eax
  int v14; // eax
  int v15; // esi
  char v16; // [esp-20h] [ebp-F4h] BYREF
  int v17; // [esp-1Ch] [ebp-F0h]
  int v18; // [esp-18h] [ebp-ECh]
  int v19; // [esp-14h] [ebp-E8h]
  int v20; // [esp-10h] [ebp-E4h]
  int v21; // [esp-Ch] [ebp-E0h]
  int v22; // [esp-8h] [ebp-DCh]
  int v23; // [esp-4h] [ebp-D8h]
  float v24; // [esp+0h] [ebp-D4h]
  float v25; // [esp+4h] [ebp-D0h]
  float v26; // [esp+8h] [ebp-CCh]
  float v27; // [esp+Ch] [ebp-C8h]
  float v28; // [esp+10h] [ebp-C4h]
  float *v29; // [esp+14h] [ebp-C0h]
  int v30[2]; // [esp+24h] [ebp-B0h] BYREF
  void *v31[39]; // [esp+2Ch] [ebp-A8h] BYREF
  int v32; // [esp+D0h] [ebp-4h]

  v32 = 1;
  v9 = (float *)operator new(0x1D0u);
  v10 = v9;
  v30[0] = (int)v9;
  if ( v9 )
    std::string::string(v9 + 108);
  else
    v10 = 0;
  LOBYTE(v32) = 0;
  v30[0] = (int)v10;
  std::string::operator=(v10 + 108, &a2);
  v10[115] = 0.30000001;
  Texture::Texture((Texture *)v31);
  v29 = 0;
  v28 = 0.0;
  LOBYTE(v32) = 2;
  v27 = 1.0;
  v26 = 1.0;
  v25 = 0.0;
  v24 = 0.0;
  v23 = 0;
  v30[1] = (int)&v16;
  std::string::string(&v16, &a2);
  if ( (unsigned __int8)Texture::Load(v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, (int)v29) )
  {
    memset(v10, 0, 0x1B0u);
    v29 = v10 + 72;
    LODWORD(v28) = v10 + 36;
    v27 = *(float *)&v10;
    Texture = Texture::GetTexture((Texture *)v31);
    D3DXSHProjectCubeMap(6, Texture, LODWORD(v27), LODWORD(v28), v29);
    Texture::Destroy((Texture *)v31);
    sub_10117D50((int)(this + 817), (int)v30);
    v14 = this[818];
    if ( v14 )
      v15 = (this[819] - v14) >> 2;
    else
      v15 = 0;
    LOBYTE(v32) = 0;
    Texture::~Texture(v31);
    v32 = -1;
    std::string::~string(&a2);
    return v15 - 1;
  }
  else
  {
    v11 = (const char *)std::string::c_str(&a2);
    Warning("SH Probe %s not found!", v11);
    LOBYTE(v32) = 0;
    Texture::~Texture(v31);
    v32 = -1;
    std::string::~string(&a2);
    return -1;
  }
}
