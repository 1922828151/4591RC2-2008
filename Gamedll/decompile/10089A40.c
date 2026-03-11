/*
 * func-name: ?Refresh@Effect_LightDizzy@@QAEXXZ_0
 * func-address: 0x10089a40
 * callers: 0x10004200
 * callees: none
 */

void __thiscall Effect_LightDizzy::Refresh(Effect_LightDizzy *this)
{
  char *v2; // ebx
  char *v3; // esi
  struct Texture **v4; // edi
  int v5; // eax
  _BYTE v6[28]; // [esp-20h] [ebp-30h] BYREF
  int v7; // [esp-4h] [ebp-14h]
  _BYTE *v8; // [esp+Ch] [ebp-4h]

  v2 = (char *)this + 1080;
  v3 = (char *)this + 1052;
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 1052, (char *)this + 1080) )
  {
    v4 = (struct Texture **)((char *)this + 1124);
    Precacher::PurgeTexture(v4);
    v7 = 1;
    v8 = v6;
    std::string::string(v6, v3);
    v5 = Precacher::CacheTexture();
    v7 = (int)v3;
    *v4 = (struct Texture *)v5;
    std::string::operator=(v2, v7);
  }
}
