/*
 * func-name: sub_1009D640
 * func-address: 0x1009d640
 * callers: none
 * callees: 0x1000cb70, 0x100956d0, 0x1009cf20, 0x10136140, 0x10136290, 0x10136360, 0x10136400, 0x10136530, 0x10178134
 */

int __thiscall sub_1009D640(_DWORD *this)
{
  Texture *v2; // edi
  struct IDirect3DTexture9 *Texture; // eax
  struct IDirect3DTexture9 *v4; // eax
  char v6; // [esp-20h] [ebp-ECh] BYREF
  int v7; // [esp-1Ch] [ebp-E8h]
  int v8; // [esp-18h] [ebp-E4h]
  int v9; // [esp-14h] [ebp-E0h]
  int v10; // [esp-10h] [ebp-DCh]
  int v11; // [esp-Ch] [ebp-D8h]
  int v12; // [esp-8h] [ebp-D4h]
  int v13; // [esp-4h] [ebp-D0h]
  float v14; // [esp+0h] [ebp-CCh]
  float v15; // [esp+4h] [ebp-C8h]
  float v16; // [esp+8h] [ebp-C4h]
  float v17; // [esp+Ch] [ebp-C0h]
  float v18; // [esp+10h] [ebp-BCh]
  _DWORD *v19; // [esp+14h] [ebp-B8h]
  char *v20; // [esp+20h] [ebp-ACh]
  void *v21[39]; // [esp+24h] [ebp-A8h] BYREF
  int v22; // [esp+C8h] [ebp-4h]

  v2 = (Texture *)(this + 1);
  Texture::Destroy((Texture *)(this + 1));
  Texture::Texture((Texture *)v21);
  v22 = 0;
  if ( v21[6] == (void *)-1 )
  {
    v19 = 0;
    v18 = 0.0;
    v17 = 1.0;
    v16 = 1.0;
    v15 = 0.0;
    v14 = 0.0;
    v13 = 0;
    v20 = &v6;
    std::string::string(&v6, "Attenuate3D.dds");
    if ( !(unsigned __int8)Texture::Load(v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, (int)v19) )
      Error("Couldn't find Attenuate3D.dds, unfortunately this texture is vital.\n"
            "Ensure you are running from the correct directory and have the media extracted to the correct subdirectory.");
    if ( Texture::GetTexture((Texture *)v21) )
    {
      Texture = Texture::GetTexture((Texture *)v21);
      sub_1009CF20(dword_102879F0, (int)Texture);
    }
  }
  Texture::CreateBlank(v2, 5, 50, this[42], this[43], this[44]);
  v19 = this;
  v18 = COERCE_FLOAT(sub_1009D090);
  v4 = Texture::GetTexture(v2);
  if ( D3DXFillVolumeTexture(v4, LODWORD(v18), v19) < 0 )
    Error("FILL VOLUME MAP FAILED");
  v22 = -1;
  Texture::~Texture(v21);
  return 0;
}
