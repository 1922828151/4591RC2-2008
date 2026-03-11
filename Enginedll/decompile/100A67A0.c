/*
 * func-name: ?ChangeBGTexture@CRETextBox@@UAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100a67a0
 * callers: none
 * callees: 0x10136290, 0x10136530, 0x101a2534
 */

int __thiscall CRETextBox::ChangeBGTexture(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  bool v9; // zf
  Texture *v10; // eax
  Texture *v11; // eax
  char v13; // [esp-20h] [ebp-4Ch] BYREF
  int v14; // [esp-1Ch] [ebp-48h]
  int v15; // [esp-18h] [ebp-44h]
  int v16; // [esp-14h] [ebp-40h]
  int v17; // [esp-10h] [ebp-3Ch]
  int v18; // [esp-Ch] [ebp-38h]
  int v19; // [esp-8h] [ebp-34h]
  int v20; // [esp-4h] [ebp-30h]
  float v21; // [esp+0h] [ebp-2Ch]
  float v22; // [esp+4h] [ebp-28h]
  float v23; // [esp+8h] [ebp-24h]
  float v24; // [esp+Ch] [ebp-20h]
  float v25; // [esp+10h] [ebp-1Ch]
  int v26; // [esp+14h] [ebp-18h]
  char *v27; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+28h] [ebp-4h]

  v9 = this[174] == 0;
  v28 = 0;
  if ( v9 )
  {
    v10 = (Texture *)operator new(0x9Cu);
    v27 = (char *)v10;
    LOBYTE(v28) = 1;
    if ( v10 )
      v11 = Texture::Texture(v10);
    else
      v11 = 0;
    LOBYTE(v28) = 0;
    this[174] = v11;
  }
  v26 = 0;
  v25 = 0.0;
  v24 = 1.0;
  v23 = 1.0;
  v22 = 0.0;
  v21 = 0.0;
  v20 = 0;
  v27 = &v13;
  std::string::string(&v13, &a2);
  Texture::Load(v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(this[174] + 58) = 0;
  v28 = -1;
  return std::string::~string(&a2);
}
