/*
 * func-name: ?AddRebornLoc@CRadarMapUI@@QAEXMMK@Z_0
 * func-address: 0x1027ab70
 * callers: 0x100122bf
 * callees: 0x102c9fe0
 */

void __thiscall CRadarMapUI::AddRebornLoc(CHotZonePic **this, float a2, float a3, unsigned int a4)
{
  int v5; // edi
  int v6; // eax
  CHotZonePic *v7; // ecx
  int v8; // edi
  struct tagRECT rc; // [esp+10h] [ebp-38h] BYREF
  _DWORD v10[7]; // [esp+20h] [ebp-28h] BYREF
  int v11; // [esp+44h] [ebp-4h]

  v5 = (int)((double)(int)CHotZonePic::GetPicWidth(this[974])
           * ((a2 - *((float *)this + 984))
            / (*((float *)this + 987) - *((float *)this + 984))));
  v6 = (int)((double)(int)CHotZonePic::GetPicHeight(this[974])
           * ((*((float *)this + 989) - a3)
            / (*((float *)this + 989) - *((float *)this + 986))));
  SetRect(&rc, v5 - 16, v6 - 16, v5 + 16, v6 + 16);
  std::string::string(v10, "MachineCabin_m_1.dds");
  v7 = this[974];
  v11 = 0;
  v8 = CHotZonePic::AddHotZone(v7, &rc, v10, 0, 1, a4);
  v11 = -1;
  std::string::~string(v10);
  CHotZonePic::HighLight(this[974], v8, 1);
}
