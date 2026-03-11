/*
 * func-name: ??0CRadarMapUI@@QAE@XZ_0
 * func-address: 0x1027df50
 * callers: 0x100090cf
 * callees: 0x1000bb90, 0x1000f1dc, 0x10010776, 0x10013fca
 */

CRadarMapUI *__thiscall CRadarMapUI::CRadarMapUI(CRadarMapUI *this)
{
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CRadarMapUI::`vftable';
  MapStateManager::MapStateManager((CRadarMapUI *)((char *)this + 3872));
  sub_1000F1DC();
  std::string::string((char *)this + 3960);
  sub_1000F1DC();
  std::string::string((char *)this + 4044);
  *((float *)this + 1030) = 0.0;
  *((_BYTE *)this + 4088) = 0;
  *((_BYTE *)this + 4089) = 0;
  *((_BYTE *)this + 4090) = 0;
  *((float *)this + 1032) = 0.0;
  *((float *)this + 1033) = 0.0;
  *((float *)this + 1034) = 0.0;
  *((_DWORD *)this + 22) = 15;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CRadarMapUI::InitComponent(this);
  CRadarMapUI::Initialize(this);
  *((_DWORD *)this + 979) = 200;
  *((_DWORD *)this + 1023) = 0;
  std::string::operator=(&unk_103B7AA0, "Teammate1.dds");
  std::string::operator=(&unk_103B7ABC, "Teammate2.dds");
  std::string::operator=(&unk_103B7AD8, "Teammate3.dds");
  std::string::operator=(&unk_103B7AF4, "Teammate4.dds");
  std::string::operator=(&unk_103B7B10, "Teammate5.dds");
  std::string::operator=(&unk_103B7B2C, "Teammate6.dds");
  std::string::operator=(&unk_103B7B48, "Teammate7.dds");
  std::string::operator=(&unk_103B7B64, "Teammate8.dds");
  std::string::operator=(&unk_103B7B80, "Teammate9.dds");
  std::string::operator=(&unk_103B7B9C, "Teammate10.dds");
  std::string::operator=(&unk_103B7BB8, "Radar_Command_Attack.dds");
  std::string::operator=(&unk_103B7BD4, "Radar_Command_Defence.dds");
  std::string::operator=(&unk_103B7BF0, "Radar_Command_Occupy.dds");
  std::string::operator=(&unk_103B7C0C, "Radar_Command_Scout.dds");
  std::string::operator=(&unk_103B7C28, "Radar_Command_Destroy.dds");
  std::string::operator=(&unk_103B7C44, "Radar_Command_Energy.dds");
  return this;
}
