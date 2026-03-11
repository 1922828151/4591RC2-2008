/*
 * func-name: ??4FEstabDoor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101a1880
 * callers: 0x10007829
 * callees: 0x100083cd
 */

int __thiscall GameClient::FEstabDoor::operator=(int this, int a2)
{
  GameClient::FEstablishment::operator=(a2);
  *(_BYTE *)(this + 516) = *(_BYTE *)(a2 + 516);
  std::string::operator=(this + 520, a2 + 520);
  std::string::operator=(this + 548, a2 + 548);
  std::string::operator=(this + 576, a2 + 576);
  std::string::operator=(this + 604, a2 + 604);
  std::string::operator=(this + 632, a2 + 632);
  std::string::operator=(this + 660, a2 + 660);
  std::string::operator=(this + 688, a2 + 688);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 716) + 4))(this + 716, a2 + 716);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 760) + 4))(this + 760, a2 + 760);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 804) + 4))(this + 804, a2 + 804);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 848) + 4))(this + 848, a2 + 848);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 892) + 4))(this + 892, a2 + 892);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 936) + 4))(this + 936, a2 + 936);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 980) + 4))(this + 980, a2 + 980);
  return this;
}
