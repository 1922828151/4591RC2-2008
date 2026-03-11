/*
 * func-name: ?CacheTexture@Precacher@@SAPAVTexture@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1010bf60
 * callers: none
 * callees: 0x1000cb70, 0x100f5b70, 0x1010b910, 0x1010ed10, 0x10136290, 0x10136530, 0x101a2500, 0x101a2534
 */

Texture *__cdecl Precacher::CacheTexture(char a1, int a2, int a3, int a4, int a5, int a6, int a7, int *a8)
{
  Texture *v8; // eax
  Texture *v9; // esi
  Texture *v10; // ebp
  int v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  char v15; // [esp-20h] [ebp-54h] BYREF
  int v16; // [esp-1Ch] [ebp-50h]
  int v17; // [esp-18h] [ebp-4Ch]
  int v18; // [esp-14h] [ebp-48h]
  int v19; // [esp-10h] [ebp-44h]
  int v20; // [esp-Ch] [ebp-40h]
  int v21; // [esp-8h] [ebp-3Ch] BYREF
  int v22; // [esp-4h] [ebp-38h]
  float v23; // [esp+0h] [ebp-34h]
  float v24; // [esp+4h] [ebp-30h]
  float v25; // [esp+8h] [ebp-2Ch]
  float v26; // [esp+Ch] [ebp-28h]
  float v27; // [esp+10h] [ebp-24h]
  int *v28; // [esp+14h] [ebp-20h]
  char *v29; // [esp+24h] [ebp-10h]
  int v30; // [esp+30h] [ebp-4h]

  v28 = a8;
  a8 = &v21;
  v30 = 0;
  std::string::string(&v21, &a1);
  Precacher::CacheTextureTMP(v21);
  v8 = (Texture *)operator new(0x9Cu);
  a8 = (int *)v8;
  LOBYTE(v30) = 1;
  if ( v8 )
    v9 = Texture::Texture(v8);
  else
    v9 = 0;
  v28 = 0;
  v27 = 0.0;
  v10 = v9;
  v26 = 1.0;
  v25 = 1.0;
  LOBYTE(v30) = 0;
  a8 = (int *)v9;
  v24 = 0.0;
  v23 = 0.0;
  v22 = 0;
  v11 = std::string::c_str(&a1);
  v29 = &v15;
  std::string::string(&v15, v11);
  Texture::Load(v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, (int)v28);
  if ( *((_BYTE *)v9 + 22) )
  {
    v12 = (_DWORD *)(dword_112414C4 + 4);
    v13 = sub_100F5B70(dword_112414C4, *(_DWORD *)(dword_112414C4 + 4), &a8);
    sub_1010ED10(1);
    *v12 = v13;
    *(_DWORD *)v13[1] = v13;
  }
  else
  {
    Texture::~Texture((void **)v9);
    operator delete(v9);
    v10 = 0;
  }
  v30 = -1;
  std::string::~string(&a1);
  return v10;
}
