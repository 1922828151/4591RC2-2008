/*
 * func-name: sub_100F1360
 * func-address: 0x100f1360
 * callers: 0x1000b43d
 * callees: none
 */

void __thiscall sub_100F1360(char *this)
{
  char *v2; // edi
  Editor *v3; // eax
  int v4; // eax
  const char *v5; // eax
  _BYTE v6[12]; // [esp-28h] [ebp-34h] BYREF
  _DWORD v7[6]; // [esp-1Ch] [ebp-28h] BYREF
  int v8; // [esp-4h] [ebp-10h]
  int v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]
  _BYTE *v11; // [esp+8h] [ebp-4h]

  v2 = this + 28;
  if ( (unsigned __int8)std::operator!=<char>(this, this + 28) || this[92] )
  {
    v8 = (int)this;
    this[92] = 0;
    std::string::operator=(v2, v8);
    if ( !(unsigned __int8)std::operator==<char>(this, &unk_1031103F) )
    {
      Precacher::PurgeModel((struct Model **)this + 22);
      v3 = (Editor *)Editor::Instance(v9, v10);
      if ( Editor::GetEditorMode(v3) )
      {
        v11 = v7;
        std::string::string(v7, this);
        Precacher::PurgeModelTMP();
      }
      v8 = 1;
      v7[5] = this + 72;
      v7[4] = this + 56;
      v11 = v6;
      std::string::string(v6, this);
      v4 = Precacher::CacheModel();
      *((_DWORD *)this + 22) = v4;
      if ( !v4 )
      {
        v5 = (const char *)std::string::c_str(this);
        LogPrintf("Create option of Model (%s) is Failed.", v5);
      }
    }
  }
}
