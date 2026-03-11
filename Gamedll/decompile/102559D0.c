/*
 * func-name: ?OnMapInfoUpdated@CBattleFieldDetailUI@@QAEXJ@Z_0
 * func-address: 0x102559d0
 * callers: 0x100177c4
 * callees: 0x1000783d, 0x1000a105, 0x102c8d6c, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CBattleFieldDetailUI::OnMapInfoUpdated(CBattleFieldDetailUI *this, int a2)
{
  int v3; // eax
  int *BattleFieldIntro; // edi
  int v5; // eax
  int v6; // eax
  int PicWidth; // eax
  const char *v8; // eax
  const wchar_t *v9; // eax
  int v10; // [esp+0h] [ebp-70h]
  struct tagRECT rc; // [esp+1Ch] [ebp-54h] BYREF
  _BYTE v12[4]; // [esp+44h] [ebp-2Ch] BYREF
  _BYTE v13[24]; // [esp+48h] [ebp-28h] BYREF
  int v14; // [esp+6Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 968);
  if ( v3 == a2 )
  {
    BattleFieldIntro = (int *)GameClient::BattleFieldManager::GetBattleFieldIntro(
                                GameClient::BattleFieldManager::s_pInstance,
                                v3,
                                1);
    if ( BattleFieldIntro )
    {
      std::string::string(v12, BattleFieldIntro + 20);
      v14 = 0;
      v5 = std::string::rfind(v12, 46, std::string::npos);
      v6 = std::string::substr(v12, &rc.bottom, 0, v5);
      LOBYTE(v14) = 1;
      std::string::operator=(v12, v6);
      LOBYTE(v14) = 0;
      std::string::~string(&rc.bottom);
      std::string::operator+=(v12, "_s.dds");
      CHotZonePic::SetPic(*((_DWORD *)this + 969), v12);
      CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 969));
      PicWidth = CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 969));
      SetRect(&rc, 0, 0, PicWidth, v10);
      CHotZonePic::SetPic(*((_DWORD *)this + 969), v13);
      v8 = (const char *)std::string::c_str(BattleFieldIntro);
      v9 = atow(v8);
      CREStatic::SetText(*((CREStatic **)this + 970), v9);
      CBattleFieldDetailUI::RefreshEntryPoint(this, a2);
      *((_DWORD *)this + 980) = 342;
      *((_DWORD *)this + 979) = (int)(342.0 / (double)BattleFieldIntro[19] * (double)BattleFieldIntro[18]);
      *((_BYTE *)this + 3894) = 1;
      v14 = -1;
      std::string::~string(v12);
    }
    else
    {
      *((_BYTE *)this + 3894) = 0;
    }
  }
}
