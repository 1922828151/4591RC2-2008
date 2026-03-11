/*
 * func-name: sub_100F14F0
 * func-address: 0x100f14f0
 * callers: 0x10014673
 * callees: none
 */

void __thiscall sub_100F14F0(struct Texture **this)
{
  char *v2; // edi
  int v3; // eax
  const char *v4; // eax
  _DWORD v5[11]; // [esp-20h] [ebp-2Ch] BYREF

  v2 = (char *)(this + 7);
  if ( (unsigned __int8)std::operator!=<char>(this, this + 7) )
  {
    std::string::operator=(v2, this);
    Precacher::PurgeTexture(this + 14);
    if ( (unsigned __int8)std::operator!=<char>(this, &unk_10311067) )
    {
      v5[7] = 1;
      v5[10] = v5;
      std::string::string(v5, this);
      v3 = Precacher::CacheTexture();
      this[14] = (struct Texture *)v3;
      if ( !v3 )
      {
        v4 = (const char *)std::string::c_str(this);
        LogPrintf("Create option of Texture (%s) is Failed.", v4);
      }
    }
  }
}
