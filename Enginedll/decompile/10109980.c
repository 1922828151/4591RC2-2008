/*
 * func-name: ?UpdateTexture@Precacher@@SA_NPAVTexture@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10109980
 * callers: none
 * callees: 0x10136360, 0x10136530
 */

char Precacher::UpdateTexture(Texture *a1, ...)
{
  char v2; // [esp-20h] [ebp-48h] BYREF
  int v3; // [esp-1Ch] [ebp-44h]
  int v4; // [esp-18h] [ebp-40h]
  int v5; // [esp-14h] [ebp-3Ch]
  int v6; // [esp-10h] [ebp-38h]
  int v7; // [esp-Ch] [ebp-34h]
  int v8; // [esp-8h] [ebp-30h]
  int v9; // [esp-4h] [ebp-2Ch]
  float v10; // [esp+0h] [ebp-28h]
  float v11; // [esp+4h] [ebp-24h]
  float v12; // [esp+8h] [ebp-20h]
  float v13; // [esp+Ch] [ebp-1Ch]
  float v14; // [esp+10h] [ebp-18h]
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+24h] [ebp-4h]
  va_list va; // [esp+30h] [ebp+8h] BYREF

  va_start(va, a1);
  v16 = 0;
  if ( a1 )
  {
    Texture::Destroy(a1);
    v15 = 0;
    v14 = 0.0;
    v13 = 1.0;
    v12 = 1.0;
    v11 = 0.0;
    v10 = 0.0;
    v9 = 0;
    std::string::string(&v2, va);
    Texture::Load(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
    v16 = -1;
    std::string::~string(va);
    return 1;
  }
  else
  {
    std::string::~string(va);
    return 0;
  }
}
