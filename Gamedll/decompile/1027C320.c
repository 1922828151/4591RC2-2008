/*
 * func-name: ?OnCorpCmdUpdated@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027c320
 * callers: 0x10011c2a
 * callees: 0x10005aa1, 0x10017c29, 0x102c9d62, 0x102c9fe0
 */

void __thiscall CRadarMapUI::OnCorpCmdUpdated(CHotZonePic **this)
{
  float *v2; // esi
  int PicWidth; // eax
  int v4; // ebp
  int v5; // eax
  CHotZonePic *v6; // ecx
  int inserted; // esi
  int PicHeight; // [esp+44h] [ebp-68h]
  float v9[2]; // [esp+48h] [ebp-64h] BYREF
  float v10; // [esp+50h] [ebp-5Ch]
  struct tagRECT rc; // [esp+54h] [ebp-58h] BYREF
  _DWORD v12[7]; // [esp+64h] [ebp-48h] BYREF
  _BYTE v13[28]; // [esp+80h] [ebp-2Ch] BYREF
  int v14; // [esp+A8h] [ebp-4h]

  CHotZonePic::RemoveHoverPic(this[974], 7, 0);
  v9[0] = 0.0;
  v9[1] = 0.0;
  v10 = 0.0;
  std::string::string(v13);
  v14 = 0;
  GameClient::GroupManager::Instance();
  GameClient::GroupManager::GetCorpCmd((int)v9, (int)v13);
  v2 = (float *)(this + 1001);
  if ( !*((_BYTE *)this + 4090) )
    v2 = (float *)(this + 980);
  PicWidth = CHotZonePic::GetPicWidth(this[974]);
  v4 = (int)((double)PicWidth * ((v9[0] - v2[4]) / (v2[7] - v2[4])));
  PicHeight = CHotZonePic::GetPicHeight(this[974]);
  v5 = (int)((double)PicHeight * ((v2[9] - v10) / (v2[9] - v2[6])));
  SetRect(&rc, v4 - 16, v5 - 16, v4 + 16, v5 + 16);
  std::string::string(v12, "Radar_Target_Corps.dds");
  v6 = this[974];
  LOBYTE(v14) = 1;
  inserted = CHotZonePic::InsertHoverPic(v6, 7, v12, &rc, 1, 0, 0, -1, 0.0);
  LOBYTE(v14) = 0;
  std::string::~string(v12);
  CHotZonePic::AnimateHoverPic(this[974], inserted, 1, 0.80000001, 1.0, -1.0);
  v14 = -1;
  std::string::~string(v13);
}
