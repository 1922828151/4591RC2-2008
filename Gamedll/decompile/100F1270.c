/*
 * func-name: sub_100F1270
 * func-address: 0x100f1270
 * callers: 0x10004ff2
 * callees: none
 */

void __thiscall sub_100F1270(char *this)
{
  char *v2; // edi
  bool v3; // zf
  int *v4; // edi
  int v5; // eax
  const char *v6; // eax
  int v7; // eax
  const char *v8; // eax
  _BYTE v9[28]; // [esp-20h] [ebp-2Ch] BYREF
  int v10; // [esp-4h] [ebp-10h]
  _BYTE *v11; // [esp+8h] [ebp-4h]

  v2 = this + 28;
  if ( (unsigned __int8)std::operator!=<char>(this, this + 28) )
  {
    std::string::operator=(v2, this);
    v3 = this[64] == 0;
    v4 = (int *)(this + 56);
    v10 = (int)(this + 56);
    if ( v3 )
    {
      Precacher::PurgeSound2D((struct Sound **)v10);
      if ( (unsigned __int8)std::operator!=<char>(this, &unk_1031103D) )
      {
        v10 = 1;
        v11 = v9;
        std::string::string(v9, this);
        v7 = Precacher::CacheSound2D();
        *v4 = v7;
        if ( !v7 )
        {
          v8 = (const char *)std::string::c_str(this);
          LogPrintf("Create option of Sound (%s) is Failed.", v8);
        }
      }
    }
    else
    {
      Precacher::PurgeSound((struct Sound **)v10);
      if ( (unsigned __int8)std::operator!=<char>(this, &unk_1031103C) )
      {
        v10 = 1;
        v11 = v9;
        std::string::string(v9, this);
        v5 = Precacher::CacheSound();
        *v4 = v5;
        if ( !v5 )
        {
          v6 = (const char *)std::string::c_str(this);
          LogPrintf("Create option of Sound (%s) is Failed.", v6);
        }
      }
    }
  }
}
