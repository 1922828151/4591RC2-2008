/*
 * func-name: ?AddAlarmArea@CRadarMapUI@@QAEXKMM@Z_0
 * func-address: 0x1027ada0
 * callers: 0x100076c6
 * callees: 0x102c9fe0
 */

void __thiscall CRadarMapUI::AddAlarmArea(CHotZonePic **this, unsigned int a2, float a3, float a4)
{
  int v5; // edi
  int v6; // eax
  CHotZonePic *v7; // ecx
  int inserted; // edi
  struct tagRECT rc; // [esp+3Ch] [ebp-38h] BYREF
  _BYTE v10[28]; // [esp+4Ch] [ebp-28h] BYREF
  int v11; // [esp+70h] [ebp-4h]

  v5 = (int)((double)(int)CHotZonePic::GetPicWidth(this[974])
           * ((a3 - *((float *)this + 984))
            / (*((float *)this + 987) - *((float *)this + 984))));
  v6 = (int)((double)(int)CHotZonePic::GetPicHeight(this[974])
           * ((*((float *)this + 989) - a4)
            / (*((float *)this + 989) - *((float *)this + 986))));
  SetRect(&rc, v5 - 16, v6 - 16, v5 + 16, v6 + 16);
  std::string::string(v10, "Radar_Alert_Hack.dds");
  v7 = this[974];
  v11 = 0;
  inserted = CHotZonePic::InsertHoverPic(v7, 9, v10, &rc, 0, 0, a2, -1, 0.0);
  v11 = -1;
  std::string::~string(v10);
  CHotZonePic::AnimateHoverPic(this[974], inserted, 1, 0.80000001, 1.0, -1.0);
}
